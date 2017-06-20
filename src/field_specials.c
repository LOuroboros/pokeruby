#include "global.h"
#include "field_specials.h"
#include "diploma.h"
#include "event_data.h"
#include "field_player_avatar.h"
#include "main.h"
#include "map_constants.h"
#include "rom4.h"
#include "script.h"
#include "songs.h"
#include "string_util.h"
#include "strings.h"
#include "text.h"
#include "wallclock.h"
#include "tv.h"
#include "link.h"

#if ENGLISH
#define CHAR_DECIMAL_SEPARATOR CHAR_PERIOD
#elif GERMAN
#define CHAR_DECIMAL_SEPARATOR CHAR_COMMA
#endif

extern struct WarpData gUnknown_020297F0;
extern u16 gScriptResult;
extern u8 gUnknown_02039250;
extern u8 gUnknown_02039251;
extern u32 gUnknown_02039254;

static void RecordCyclingRoadResults(u32, u8);

void sub_810D6A4(void) {
    SetMainCallback2(sub_8145D88);
    ScriptContext2_Enable();
}

void sub_810D6B8(void) {
    gMain.savedCallback = c2_exit_to_overworld_2_switch;
    SetMainCallback2(CB2_ViewWallClock);
    ScriptContext2_Enable();
}

void ResetCyclingRoadChallengeData(void) {
    gUnknown_02039250 = 0;
    gUnknown_02039251 = 0;
    gUnknown_02039254 = 0;
}

void BeginCyclingRoadChallenge(void) {
    gUnknown_02039250 = 1;
    gUnknown_02039251 = 0;
    gUnknown_02039254 = gMain.vblankCounter1;
}

u16 GetPlayerAvatarBike(void) {
    if (TestPlayerAvatarFlags(PLAYER_AVATAR_FLAG_ACRO_BIKE))
    {
        return 1;
    }

    if (TestPlayerAvatarFlags(PLAYER_AVATAR_FLAG_MACH_BIKE))
    {
        return 2;
    }

    return 0;
}

void DetermineCyclingRoadResults(u32 arg0, u8 arg1) {
    u8 result;

    if (arg1 <= 99)
    {
        ConvertIntToDecimalStringN(gStringVar1, arg1, STR_CONV_MODE_LEFT_ALIGN, 2);
        StringAppend(gStringVar1, gOtherText_Times);
    }
    else
    {
        StringCopy(gStringVar1, gOtherText_99Times);
    }

    if (arg0 < 3600)
    {
        ConvertIntToDecimalStringN(gStringVar2, arg0 / 60, STR_CONV_MODE_RIGHT_ALIGN, 2);
        gStringVar2[2] = CHAR_DECIMAL_SEPARATOR;
        ConvertIntToDecimalStringN(&gStringVar2[3], ((arg0 % 60) * 100) / 60, STR_CONV_MODE_LEADING_ZEROS, 2);
        StringAppend(gStringVar2, gOtherText_Seconds);
    }
    else
    {
        StringCopy(gStringVar2, gOtherText_1Minute);
    }

    result = 0;
    if (arg1 == 0)
    {
        result = 5;
    }
    else if (arg1 < 4)
    {
        result = 4;
    }
    else if (arg1 < 10)
    {
        result = 3;
    }
    else if (arg1 < 20)
    {
        result = 2;
    }
    else if (arg1 < 100)
    {
        result = 1;
    }

    if (arg0 / 60 <= 10)
    {
        result += 5;
    }
    else if (arg0 / 60 <= 15)
    {
        result += 4;
    }
    else if (arg0 / 60 <= 20)
    {
        result += 3;
    }
    else if (arg0 / 60 <= 40)
    {
        result += 2;
    }
    else if (arg0 / 60 < 60)
    {
        result += 1;
    }


    gScriptResult = result;
}

void FinishCyclingRoadChallenge(void) {
    const u32 time = gMain.vblankCounter1 - gUnknown_02039254;

    DetermineCyclingRoadResults(time, gUnknown_02039251);
    RecordCyclingRoadResults(time, gUnknown_02039251);
}

static void RecordCyclingRoadResults(u32 arg0, u8 arg1) {
    u16 high, low;
    u32 record;

    high = VarGet(0x4028);
    low = VarGet(0x4029);
    record = high + (low << 16);

    if (record > arg0 || record == 0)
    {
        VarSet(0x4028, arg0);
        VarSet(0x4029, arg0 >> 16);
        VarSet(0x4027, arg1);
    }
}

u16 GetRecordedCyclingRoadResults(void) {
    u16 high, low;
    u32 record;

    high = VarGet(0x4028);
    low = VarGet(0x4029);
    record = high + (low << 16);

    if (record == 0)
    {
        return FALSE;
    }

    DetermineCyclingRoadResults(record, VarGet(0x4027));
    return TRUE;
}

void UpdateCyclingRoadState(void) {
    if (gUnknown_020297F0.mapNum == MAP_ID_ROUTE110_SEASIDE_CYCLING_ROAD_NORTH_ENTRANCE && gUnknown_020297F0.mapGroup == MAP_GROUP_ROUTE110_SEASIDE_CYCLING_ROAD_NORTH_ENTRANCE)
    {
        return;
    }

    if (VarGet(0x40a9) == 2 || VarGet(0x40a9) == 3)
    {
        VarSet(0x40a9, 0);
        sav1_set_battle_music_maybe(SE_STOP);
    }
}

void SetSSTidalFlag(void)
{
    FlagSet(SYS_CRUISE_MODE);
    *GetVarPointer(VAR_CRUISE_STEP_COUNT) = 0;
}

void ResetSSTidalFlag(void)
{
    FlagReset(SYS_CRUISE_MODE);
}

bool32 CountSSTidalStep(u16 delta)
{
    if (!FlagGet(SYS_CRUISE_MODE) || (*GetVarPointer(VAR_CRUISE_STEP_COUNT) += delta) <= 0xcc)
    {
        return FALSE;
    }
    return TRUE;
}

u8 GetSSTidalLocation(s8 *mapGroup, s8 *mapNum, s16 *x, s16 *y)
{
    u16 *varCruiseStepCount = GetVarPointer(VAR_CRUISE_STEP_COUNT);
    switch (*GetVarPointer(VAR_PORTHOLE))
    {
        case 1:
        case 8:
            return 1;
        case 3:
        case 9:
            return 4;
        case 4:
        case 5:
            return 2;
        case 6:
        case 10:
            return 3;
        case 2:
            if (*varCruiseStepCount < 60)
            {
                *mapNum = MAP_ID_ROUTE134;
                *x = *varCruiseStepCount + 19;
            }
            else if (*varCruiseStepCount < 140)
            {
                *mapNum = MAP_ID_ROUTE133;
                *x = *varCruiseStepCount - 60;
            }
            else
            {
                *mapNum = MAP_ID_ROUTE132;
                *x = *varCruiseStepCount - 140;
            }
            break;
        case 7:
            if (*varCruiseStepCount < 66)
            {
                *mapNum = MAP_ID_ROUTE132;
                *x = 65 - *varCruiseStepCount;
            }
            else if (*varCruiseStepCount < 146) {
                *mapNum = MAP_ID_ROUTE133;
                *x = 145 - *varCruiseStepCount;
            }
            else
            {
                *mapNum = MAP_ID_ROUTE134;
                *x = 224 - *varCruiseStepCount;
            }
            break;
    }
    *mapGroup = MAP_GROUP_ROUTE132;
    *y = 20;
    return 0;
}

u8 GetLinkPartnerNames(void)
{
    u8 i;
    u8 j = 0;
    u8 myLinkPlayerNumber = sub_8008218();
    u8 nLinkPlayers = sub_800820C();
    for (i=0; i<nLinkPlayers; i++)
    {
        if (myLinkPlayerNumber != i)
        {
            StringCopy(gUnknown_083D1464[j], gLinkPlayers[i].name);
            j++;
        }
    }
    return nLinkPlayers;
}
