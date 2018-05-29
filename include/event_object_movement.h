#ifndef GUARD_EVENTOBJMV_H
#define GUARD_EVENTOBJMV_H

#include "sprite.h"

enum {
    MOVEMENT_TYPE_NONE,
    MOVEMENT_TYPE_LOOK_AROUND,
    MOVEMENT_TYPE_WANDER_AROUND,
    MOVEMENT_TYPE_WANDER_UP_AND_DOWN,
    MOVEMENT_TYPE_WANDER_DOWN_AND_UP,
    MOVEMENT_TYPE_WANDER_LEFT_AND_RIGHT,
    MOVEMENT_TYPE_WANDER_RIGHT_AND_LEFT,
    MOVEMENT_TYPE_FACE_UP,
    MOVEMENT_TYPE_FACE_DOWN,
    MOVEMENT_TYPE_FACE_LEFT,
    MOVEMENT_TYPE_FACE_RIGHT,
    MOVEMENT_TYPE_PLAYER,
    MOVEMENT_TYPE_BERRY_TREE_GROWTH,
    MOVEMENT_TYPE_FACE_DOWN_AND_UP,
    MOVEMENT_TYPE_FACE_LEFT_AND_RIGHT,
    MOVEMENT_TYPE_FACE_UP_AND_LEFT,
    MOVEMENT_TYPE_FACE_UP_AND_RIGHT,
    MOVEMENT_TYPE_FACE_DOWN_AND_LEFT,
    MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT,
    MOVEMENT_TYPE_FACE_DOWN_UP_AND_LEFT,
    MOVEMENT_TYPE_FACE_DOWN_UP_AND_RIGHT,
    MOVEMENT_TYPE_FACE_UP_LEFT_AND_RIGHT,
    MOVEMENT_TYPE_FACE_DOWN_LEFT_AND_RIGHT,
    MOVEMENT_TYPE_ROTATE_COUNTERCLOCKWISE,
    MOVEMENT_TYPE_ROTATE_CLOCKWISE,
    MOVEMENT_TYPE_WALK_UP_AND_DOWN,
    MOVEMENT_TYPE_WALK_DOWN_AND_UP,
    MOVEMENT_TYPE_WALK_LEFT_AND_RIGHT,
    MOVEMENT_TYPE_WALK_RIGHT_AND_LEFT,
    MOVEMENT_TYPE_WALK_SEQUENCE_UP_RIGHT_LEFT_DOWN,
    MOVEMENT_TYPE_WALK_SEQUENCE_RIGHT_LEFT_DOWN_UP,
    MOVEMENT_TYPE_WALK_SEQUENCE_DOWN_UP_RIGHT_LEFT,
    MOVEMENT_TYPE_WALK_SEQUENCE_LEFT_DOWN_UP_RIGHT,
    MOVEMENT_TYPE_WALK_SEQUENCE_UP_LEFT_RIGHT_DOWN,
    MOVEMENT_TYPE_WALK_SEQUENCE_LEFT_RIGHT_DOWN_UP,
    MOVEMENT_TYPE_WALK_SEQUENCE_DOWN_UP_LEFT_RIGHT,
    MOVEMENT_TYPE_WALK_SEQUENCE_RIGHT_DOWN_UP_LEFT,
    MOVEMENT_TYPE_WALK_SEQUENCE_LEFT_UP_DOWN_RIGHT,
    MOVEMENT_TYPE_WALK_SEQUENCE_UP_DOWN_RIGHT_LEFT,
    MOVEMENT_TYPE_WALK_SEQUENCE_RIGHT_LEFT_UP_DOWN,
    MOVEMENT_TYPE_WALK_SEQUENCE_DOWN_RIGHT_LEFT_UP,
    MOVEMENT_TYPE_WALK_SEQUENCE_RIGHT_UP_DOWN_LEFT,
    MOVEMENT_TYPE_WALK_SEQUENCE_UP_DOWN_LEFT_RIGHT,
    MOVEMENT_TYPE_WALK_SEQUENCE_LEFT_RIGHT_UP_DOWN,
    MOVEMENT_TYPE_WALK_SEQUENCE_DOWN_LEFT_RIGHT_UP,
    MOVEMENT_TYPE_WALK_SEQUENCE_UP_LEFT_DOWN_RIGHT,
    MOVEMENT_TYPE_WALK_SEQUENCE_DOWN_RIGHT_UP_LEFT,
    MOVEMENT_TYPE_WALK_SEQUENCE_LEFT_DOWN_RIGHT_UP,
    MOVEMENT_TYPE_WALK_SEQUENCE_RIGHT_UP_LEFT_DOWN,
    MOVEMENT_TYPE_WALK_SEQUENCE_UP_RIGHT_DOWN_LEFT,
    MOVEMENT_TYPE_WALK_SEQUENCE_DOWN_LEFT_UP_RIGHT,
    MOVEMENT_TYPE_WALK_SEQUENCE_LEFT_UP_RIGHT_DOWN,
    MOVEMENT_TYPE_WALK_SEQUENCE_RIGHT_DOWN_LEFT_UP,
    MOVEMENT_TYPE_COPY_PLAYER,
    MOVEMENT_TYPE_COPY_PLAYER_OPPOSITE,
    MOVEMENT_TYPE_COPY_PLAYER_COUNTERCLOCKWISE,
    MOVEMENT_TYPE_COPY_PLAYER_CLOCKWISE,
    MOVEMENT_TYPE_TREE_DISGUISE,
    MOVEMENT_TYPE_MOUNTAIN_DISGUISE,
    MOVEMENT_TYPE_COPY_PLAYER_IN_GRASS,
    MOVEMENT_TYPE_COPY_PLAYER_OPPOSITE_IN_GRASS,
    MOVEMENT_TYPE_COPY_PLAYER_COUNTERCLOCKWISE_IN_GRASS,
    MOVEMENT_TYPE_COPY_PLAYER_CLOCKWISE_IN_GRASS,
    MOVEMENT_TYPE_HIDDEN,
    MOVEMENT_TYPE_WALK_IN_PLACE_DOWN,
    MOVEMENT_TYPE_WALK_IN_PLACE_UP,
    MOVEMENT_TYPE_WALK_IN_PLACE_LEFT,
    MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT,
    MOVEMENT_TYPE_JOG_IN_PLACE_DOWN,
    MOVEMENT_TYPE_JOG_IN_PLACE_UP,
    MOVEMENT_TYPE_JOG_IN_PLACE_LEFT,
    MOVEMENT_TYPE_JOG_IN_PLACE_RIGHT,
    MOVEMENT_TYPE_RUN_IN_PLACE_DOWN,
    MOVEMENT_TYPE_RUN_IN_PLACE_UP,
    MOVEMENT_TYPE_RUN_IN_PLACE_LEFT,
    MOVEMENT_TYPE_RUN_IN_PLACE_RIGHT,
    MOVEMENT_TYPE_INVISIBLE,
};

enum {
    MOVEMENT_ACTION_FACE_DOWN,                  // 0x0
    MOVEMENT_ACTION_FACE_UP,                    // 0x1
    MOVEMENT_ACTION_FACE_LEFT,                  // 0x2
    MOVEMENT_ACTION_FACE_RIGHT,                 // 0x3
    MOVEMENT_ACTION_WALK_SLOW_DOWN,             // 0x4
    MOVEMENT_ACTION_WALK_SLOW_UP,               // 0x5
    MOVEMENT_ACTION_WALK_SLOW_LEFT,             // 0x6
    MOVEMENT_ACTION_WALK_SLOW_RIGHT,            // 0x7
    MOVEMENT_ACTION_WALK_NORMAL_DOWN,           // 0x8
    MOVEMENT_ACTION_WALK_NORMAL_UP,             // 0x9
    MOVEMENT_ACTION_WALK_NORMAL_LEFT,           // 0xA
    MOVEMENT_ACTION_WALK_NORMAL_RIGHT,          // 0xB
    MOVEMENT_ACTION_JUMP_2_DOWN,                // 0xC
    MOVEMENT_ACTION_JUMP_2_UP,                  // 0xD
    MOVEMENT_ACTION_JUMP_2_LEFT,                // 0xE
    MOVEMENT_ACTION_JUMP_2_RIGHT,               // 0xF
    MOVEMENT_ACTION_DELAY_1,                    // 0x10
    MOVEMENT_ACTION_DELAY_2,                    // 0x11
    MOVEMENT_ACTION_DELAY_4,                    // 0x12
    MOVEMENT_ACTION_DELAY_8,                    // 0x13
    MOVEMENT_ACTION_DELAY_16,                   // 0x14
    MOVEMENT_ACTION_WALK_FAST_DOWN,             // 0x15
    MOVEMENT_ACTION_WALK_FAST_UP,               // 0x16
    MOVEMENT_ACTION_WALK_FAST_LEFT,             // 0x17
    MOVEMENT_ACTION_WALK_FAST_RIGHT,            // 0x18
    MOVEMENT_ACTION_WALK_IN_PLACE_SLOW_DOWN,    // 0x19
    MOVEMENT_ACTION_WALK_IN_PLACE_SLOW_UP,      // 0x1A
    MOVEMENT_ACTION_WALK_IN_PLACE_SLOW_LEFT,    // 0x1B
    MOVEMENT_ACTION_WALK_IN_PLACE_SLOW_RIGHT,   // 0x1C
    MOVEMENT_ACTION_WALK_IN_PLACE_NORMAL_DOWN,  // 0x1D
    MOVEMENT_ACTION_WALK_IN_PLACE_NORMAL_UP,    // 0x1E
    MOVEMENT_ACTION_WALK_IN_PLACE_NORMAL_LEFT,  // 0x1F
    MOVEMENT_ACTION_WALK_IN_PLACE_NORMAL_RIGHT, // 0x20
    MOVEMENT_ACTION_WALK_IN_PLACE_FAST_DOWN,    // 0x21
    MOVEMENT_ACTION_WALK_IN_PLACE_FAST_UP,      // 0x22
    MOVEMENT_ACTION_WALK_IN_PLACE_FAST_LEFT,    // 0x23
    MOVEMENT_ACTION_WALK_IN_PLACE_FAST_RIGHT,   // 0x24
    MOVEMENT_ACTION_WALK_IN_PLACE_FASTEST_DOWN, // 0x25
    MOVEMENT_ACTION_WALK_IN_PLACE_FASTEST_UP,   // 0x26
    MOVEMENT_ACTION_WALK_IN_PLACE_FASTEST_LEFT, // 0x27
    MOVEMENT_ACTION_WALK_IN_PLACE_FASTEST_RIGHT,// 0x28
    MOVEMENT_ACTION_RIDE_WATER_CURRENT_DOWN,    // 0x29
    MOVEMENT_ACTION_RIDE_WATER_CURRENT_UP,      // 0x2A
    MOVEMENT_ACTION_RIDE_WATER_CURRENT_LEFT,    // 0x2B
    MOVEMENT_ACTION_RIDE_WATER_CURRENT_RIGHT,   // 0x2C
    MOVEMENT_ACTION_WALK_FASTEST_DOWN,          // 0x2D
    MOVEMENT_ACTION_WALK_FASTEST_UP,            // 0x2E
    MOVEMENT_ACTION_WALK_FASTEST_LEFT,          // 0x2F
    MOVEMENT_ACTION_WALK_FASTEST_RIGHT,         // 0x30
    MOVEMENT_ACTION_SLIDE_DOWN,                 // 0x31
    MOVEMENT_ACTION_SLIDE_UP,                   // 0x32
    MOVEMENT_ACTION_SLIDE_LEFT,                 // 0x33
    MOVEMENT_ACTION_SLIDE_RIGHT,                // 0x34
    MOVEMENT_ACTION_PLAYER_RUN_DOWN,            // 0x35
    MOVEMENT_ACTION_PLAYER_RUN_UP,              // 0x36
    MOVEMENT_ACTION_PLAYER_RUN_LEFT,            // 0x37
    MOVEMENT_ACTION_PLAYER_RUN_RIGHT,           // 0x38
    MOVEMENT_ACTION_START_ANIM_IN_DIRECTION,    // 0x39
    MOVEMENT_ACTION_JUMP_SPECIAL_DOWN,          // 0x3A
    MOVEMENT_ACTION_JUMP_SPECIAL_UP,            // 0x3B
    MOVEMENT_ACTION_JUMP_SPECIAL_LEFT ,         // 0x3C
    MOVEMENT_ACTION_JUMP_SPECIAL_RIGHT,         // 0x3D
    MOVEMENT_ACITON_FACE_PLAYER,                // 0x3E
    MOVEMENT_ACITON_FACE_AWAY_PLAYER,           // 0x3F
    MOVEMENT_ACTION_LOCK_FACING_DIRECTION,      // 0x40
    MOVEMENT_ACTION_UNLOCK_FACING_DIRECTION,    // 0x41
    MOVEMENT_ACITON_JUMP_DOWN,                  // 0x42
    MOVEMENT_ACITON_JUMP_UP,                    // 0x43
    MOVEMENT_ACITON_JUMP_LEFT,                  // 0x44
    MOVEMENT_ACITON_JUMP_RIGHT,                 // 0x45
    MOVEMENT_ACTION_JUMP_IN_PLACE_DOWN,         // 0x46
    MOVEMENT_ACTION_JUMP_IN_PLACE_UP,           // 0x47
    MOVEMENT_ACTION_JUMP_IN_PLACE_LEFT,         // 0x48
    MOVEMENT_ACTION_JUMP_IN_PLACE_RIGHT,        // 0x49
    MOVEMENT_ACTION_JUMP_IN_PLACE_DOWN_UP,      // 0x4A
    MOVEMENT_ACTION_JUMP_IN_PLACE_UP_DOWN,      // 0x4B
    MOVEMENT_ACTION_JUMP_IN_PLACE_LEFT_RIGHT,   // 0x4C
    MOVEMENT_ACTION_JUMP_IN_PLACE_RIGHT_LEFT,   // 0x4D
    MOVEMENT_ACTION_FACE_ORIGINAL_DIRECTION,    // 0x4E
    MOVEMENT_ACTION_NURSE_JOY_BOW_DOWN,         // 0x4F
    MOVEMENT_ACTION_ENABLE_JUMP_LANDING_GROUND_EFFECT,  // 0x50
    MOVEMENT_ACTION_DISABLE_JUMP_LANDING_GROUND_EFFECT, // 0x51
    MOVEMENT_ACTION_DISABLE_ANIMATION,          // 0x52
    MOVEMENT_ACTION_RESTORE_ANIMATION,          // 0x53
    MOVEMENT_ACTION_SET_INVISIBLE,              // 0x54
    MOVEMENT_ACTION_SET_VISIBLE,                // 0x55
    MOVEMENT_ACTION_EMOTE_EXCLAMATION_MARK,     // 0x56
    MOVEMENT_ACTION_EMOTE_QUESTION_MARK,        // 0x57
    MOVEMENT_ACTION_EMOTE_HEART,                // 0x58
    MOVEMENT_ACTION_REVEAL_TRAINER,             // 0x59
    MOVEMENT_ACTION_ROCK_SMASH_BREAK,           // 0x5A
    MOVEMENT_ACTION_CUT_TREE,                   // 0x5B
    MOVEMENT_ACTION_SET_FIXED_PRIORITY,         // 0x5C
    MOVEMENT_ACTION_CLEAR_FIXED_PRIORITY,       // 0x5D
    MOVEMENT_ACTION_INIT_AFFINE_ANIM,           // 0x5E
    MOVEMENT_ACTION_CLEAR_AFFINE_ANIM,          // 0x5F
    MOVEMENT_ACTION_WALK_DOWN_AFFINE_0,         // 0x60
    MOVEMENT_ACTION_WALK_DOWN_AFFINE_1,         // 0x61
    MOVEMENT_ACTION_ACRO_WHEELIE_FACE_DOWN,     // 0x62
    MOVEMENT_ACTION_ACRO_WHEELIE_FACE_UP,       // 0x63
    MOVEMENT_ACTION_ACRO_WHEELIE_FACE_LEFT,     // 0x64
    MOVEMENT_ACTION_ACRO_WHEELIE_FACE_RIGHT,    // 0x65
    MOVEMENT_ACTION_ACRO_POP_WHEELIE_DOWN,      // 0x66
    MOVEMENT_ACTION_ACRO_POP_WHEELIE_UP,        // 0x67
    MOVEMENT_ACTION_ACRO_POP_WHEELIE_LEFT,      // 0x68
    MOVEMENT_ACTION_ACRO_POP_WHEELIE_RIGHT,     // 0x69
    MOVEMENT_ACTION_ACRO_END_WHEELIE_FACE_DOWN, // 0x6A
    MOVEMENT_ACTION_ACRO_END_WHEELIE_FACE_UP,   // 0x6B
    MOVEMENT_ACTION_ACRO_END_WHEELIE_FACE_LEFT, // 0x6C
    MOVEMENT_ACTION_ACRO_END_WHEELIE_FACE_RIGHT,// 0x6D
    MOVEMENT_ACTION_ACRO_WHEELIE_HOP_FACE_DOWN, // 0x6E
    MOVEMENT_ACTION_ACRO_WHEELIE_HOP_FACE_UP,   // 0x6F
    MOVEMENT_ACTION_ACRO_WHEELIE_HOP_FACE_LEFT, // 0x70
    MOVEMENT_ACTION_ACRO_WHEELIE_HOP_FACE_RIGHT,// 0x71
    MOVEMENT_ACTION_ACRO_WHEELIE_HOP_DOWN,      // 0x72
    MOVEMENT_ACTION_ACRO_WHEELIE_HOP_UP,        // 0x73
    MOVEMENT_ACTION_ACRO_WHEELIE_HOP_LEFT,      // 0x74
    MOVEMENT_ACTION_ACRO_WHEELIE_HOP_RIGHT,     // 0x75
    MOVEMENT_ACTION_ACRO_WHEELIE_JUMP_DOWN,     // 0x76
    MOVEMENT_ACTION_ACRO_WHEELIE_JUMP_UP,       // 0x77
    MOVEMENT_ACTION_ACRO_WHEELIE_JUMP_LEFT,     // 0x78
    MOVEMENT_ACTION_ACRO_WHEELIE_JUMP_RIGHT,    // 0x79
    MOVEMENT_ACTION_ACRO_WHEELIE_IN_PLACE_DOWN, // 0x7A
    MOVEMENT_ACTION_ACRO_WHEELIE_IN_PLACE_UP,   // 0x7B
    MOVEMENT_ACTION_ACRO_WHEELIE_IN_PLACE_LEFT, // 0x7C
    MOVEMENT_ACTION_ACRO_WHEELIE_IN_PLACE_RIGHT,// 0x7D
    MOVEMENT_ACTION_ACRO_POP_WHEELIE_MOVE_DOWN, // 0x7E
    MOVEMENT_ACTION_ACRO_POP_WHEELIE_MOVE_UP,   // 0x7F
    MOVEMENT_ACTION_ACRO_POP_WHEELIE_MOVE_LEFT, // 0x80
    MOVEMENT_ACTION_ACRO_POP_WHEELIE_MOVE_RIGHT,// 0x81
    MOVEMENT_ACTION_ACRO_WHEELIE_MOVE_DOWN,     // 0x82
    MOVEMENT_ACTION_ACRO_WHEELIE_MOVE_UP,       // 0x83
    MOVEMENT_ACTION_ACRO_WHEELIE_MOVE_LEFT,     // 0x84
    MOVEMENT_ACTION_ACRO_WHEELIE_MOVE_RIGHT,    // 0x85
    MOVEMENT_ACTION_ACRO_END_WHEELIE_MOVE_DOWN, // 0x86
    MOVEMENT_ACTION_ACRO_END_WHEELIE_MOVE_UP,   // 0x87
    MOVEMENT_ACTION_ACRO_END_WHEELIE_MOVE_LEFT, // 0x88
    MOVEMENT_ACTION_ACRO_END_WHEELIE_MOVE_RIGHT,// 0x89
};

#define GROUND_EFFECT_FLAG_TALL_GRASS_ON_SPAWN   (1 << 0)
#define GROUND_EFFECT_FLAG_TALL_GRASS_ON_MOVE    (1 << 1)
#define GROUND_EFFECT_FLAG_LONG_GRASS_ON_SPAWN   (1 << 2)
#define GROUND_EFFECT_FLAG_LONG_GRASS_ON_MOVE    (1 << 3)
#define GROUND_EFFECT_FLAG_ICE_REFLECTION        (1 << 4)
#define GROUND_EFFECT_FLAG_REFLECTION            (1 << 5)
#define GROUND_EFFECT_FLAG_SHALLOW_FLOWING_WATER (1 << 6)
#define GROUND_EFFECT_FLAG_SAND                  (1 << 7)
#define GROUND_EFFECT_FLAG_DEEP_SAND             (1 << 8)
#define GROUND_EFFECT_FLAG_RIPPLES               (1 << 9)
#define GROUND_EFFECT_FLAG_PUDDLE                (1 << 10)
#define GROUND_EFFECT_FLAG_SAND_PILE             (1 << 11)
#define GROUND_EFFECT_FLAG_LAND_IN_TALL_GRASS    (1 << 12)
#define GROUND_EFFECT_FLAG_LAND_IN_LONG_GRASS    (1 << 13)
#define GROUND_EFFECT_FLAG_LAND_IN_SHALLOW_WATER (1 << 14)
#define GROUND_EFFECT_FLAG_LAND_IN_DEEP_WATER    (1 << 15)
#define GROUND_EFFECT_FLAG_LAND_ON_NORMAL_GROUND (1 << 16)
#define GROUND_EFFECT_FLAG_SHORT_GRASS           (1 << 17)
#define GROUND_EFFECT_FLAG_HOT_SPRINGS           (1 << 18)
#define GROUND_EFFECT_FLAG_SEAWEED               (1 << 19)

extern const u8 gUnknown_0830FD14[];

#define fieldmap_object_cb(setup, callback, table) \
static u8 callback(struct MapObject *, struct Sprite *);\
void setup(struct Sprite *sprite)\
{\
    meta_step(&gMapObjects[sprite->data[0]], sprite, callback);\
}\
static u8 callback(struct MapObject *mapObject, struct Sprite *sprite)\
{\
    return table[sprite->data[1]](mapObject, sprite);\
}

#define fieldmap_object_empty_callback(setup, callback) \
static u8 callback(struct MapObject *, struct Sprite *);\
void setup(struct Sprite *sprite)\
{\
    meta_step(&gMapObjects[sprite->data[0]], sprite, callback);\
}\
static u8 callback(struct MapObject *mapObject, struct Sprite *sprite)\
{\
    return 0;\
}

struct PairedPalettes
{
    u16 tag;
    const u16 *data;
};

extern const u16 gMapObjectPalette19[];

extern const u32 gMapObjectPic_MovingBox[32];
extern const struct SpriteFrameImage gMapObjectPicTable_PechaBerryTree[];

extern const u8 gFieldEffectPic_CutGrass[];
extern const u16 gFieldEffectObjectPalette6[];

void sub_805C058(struct MapObject *mapObject, s16 a, s16 b);
void FieldObjectSetDirection(struct MapObject *pObject, u8 unk_18);
void MoveCoords(u8 direction, s16 *x, s16 *y);
void meta_step(struct MapObject *pObject,  struct Sprite *pSprite,  u8 (*d8)(struct MapObject *, struct Sprite *));
void npc_reset(struct MapObject *mapObject, struct Sprite *sprite);

u8 sub_805CAAC(s16 a0, s16 a1, s16 a2, s16 a3);
u8 sub_805CADC(s16 a0, s16 a1, s16 a2, s16 a3);
u8 sub_805CAEC(s16 a0, s16 a1, s16 a2, s16 a3);
u8 sub_805CB00(s16 a0, s16 a1, s16 a2, s16 a3);
u8 sub_805CB5C(s16 a0, s16 a1, s16 a2, s16 a3);
u8 sub_805CBB8(s16 a0, s16 a1, s16 a2, s16 a3);
u8 sub_805CC14(s16 a0, s16 a1, s16 a2, s16 a3);
u8 sub_805CC70(s16 a0, s16 a1, s16 a2, s16 a3);
u8 sub_805CCAC(s16 a0, s16 a1, s16 a2, s16 a3);
u8 sub_805CCE8(s16 a0, s16 a1, s16 a2, s16 a3);
u8 sub_805CD24(s16 a0, s16 a1, s16 a2, s16 a3);

u8 CopyablePlayerMovement_None(struct MapObject *, struct Sprite *, u8, bool8(u8));
u8 CopyablePlayerMovement_FaceDirection(struct MapObject *, struct Sprite *, u8, bool8(u8));
u8 CopyablePlayerMovement_GoSpeed0(struct MapObject *, struct Sprite *, u8, bool8(u8));
u8 CopyablePlayerMovement_GoSpeed1(struct MapObject *, struct Sprite *, u8, bool8(u8));
u8 CopyablePlayerMovement_GoSpeed2(struct MapObject *, struct Sprite *, u8, bool8(u8));
u8 CopyablePlayerMovement_Slide(struct MapObject *, struct Sprite *, u8, bool8(u8));
u8 cph_IM_DIFFERENT(struct MapObject *, struct Sprite *, u8, bool8(u8));
u8 CopyablePlayerMovement_GoSpeed4(struct MapObject *, struct Sprite *, u8, bool8(u8));
u8 CopyablePlayerMovement_Jump(struct MapObject *, struct Sprite *, u8, bool8(u8));

extern struct CameraSomething gUnknown_03004880;
extern u16 gUnknown_03004898;
extern u16 gUnknown_0300489C;

extern const struct Coords16 gDirectionToVector[];

void MovementType_BerryTreeGrowth(struct Sprite *);
void MovementType_Hidden(struct Sprite *);
void MovementType_MountainDisguise(struct Sprite *);
void MovementType_TreeDisguise(struct Sprite *);
void MovementType_Player(struct Sprite *);
void MovementType_None(struct Sprite *);
void MovementType_WanderAround(struct Sprite *);
void MovementType_LookAround(struct Sprite *);
void MovementType_WanderUpAndDown(struct Sprite *);
void MovementType_WanderLeftAndRight(struct Sprite *);
void MovementType_FaceDirection(struct Sprite *);
void MovementType_FaceDownAndUp(struct Sprite *);
void MovementType_FaceLeftAndRight(struct Sprite *);
void MovementType_FaceUpAndLeft(struct Sprite *);
void MovementType_FaceUpAndRight(struct Sprite *);
void MovementType_FaceDownAndLeft(struct Sprite *);
void MovementType_FaceDownAndRight(struct Sprite *);
void MovementType_FaceDownUpAndLeft(struct Sprite *);
void MovementType_FaceDownUpAndRight(struct Sprite *);
void MovementType_FaceUpLeftAndRight(struct Sprite *);
void MovementType_FaceDownLeftAndRight(struct Sprite *);
void MovementType_RotateCounterclockwise(struct Sprite *);
void MovementType_RotateClockwise(struct Sprite *);
void MovementType_WalkBackAndForth(struct Sprite *);
void MovementType_WalkSequenceUpRightLeftDown(struct Sprite *);
void MovementType_WalkSequenceRightLeftDownUp(struct Sprite *);
void MovementType_WalkSequenceDownUpRightLeft(struct Sprite *);
void MovementType_WalkSequenceLeftDownUpRight(struct Sprite *);
void MovementType_WalkSequenceUpLeftRightDown(struct Sprite *);
void MovementType_WalkSequenceLeftRightDownUp(struct Sprite *);
void MovementType_WalkSequenceDownUpLeftRight(struct Sprite *);
void MovementType_WalkSequenceRightDownUpLeft(struct Sprite *);
void MovementType_WalkSequenceLeftUpDownRight(struct Sprite *);
void MovementType_WalkSequenceUpDownRightLeft(struct Sprite *);
void MovementType_WalkSequenceRightLeftUpDown(struct Sprite *);
void MovementType_WalkSequenceDownRightLeftUp(struct Sprite *);
void MovementType_WalkSequenceRightUpDownLeft(struct Sprite *);
void MovementType_WalkSequenceUpDownLeftRight(struct Sprite *);
void MovementType_WalkSequenceLeftRightUpDown(struct Sprite *);
void MovementType_WalkSequenceDownLeftRightUp(struct Sprite *);
void MovementType_WalkSequenceUpLeftDownRight(struct Sprite *);
void MovementType_WalkSequenceDownRightUpLeft(struct Sprite *);
void MovementType_WalkSequenceLeftDownRightUp(struct Sprite *);
void MovementType_WalkSequenceRightUpLeftDown(struct Sprite *);
void MovementType_WalkSequenceUpRightDownLeft(struct Sprite *);
void MovementType_WalkSequenceDownLeftUpRight(struct Sprite *);
void MovementType_WalkSequenceLeftUpRightDown(struct Sprite *);
void MovementType_WalkSequenceRightDownLeftUp(struct Sprite *);
void MovementType_CopyPlayer(struct Sprite *);
void MovementType_CopyPlayerInGrass(struct Sprite *);
void MovementType_WalkInPlace(struct Sprite *);
void MovementType_JogInPlace(struct Sprite *);
void MovementType_RunInPlace(struct Sprite *);
void MovementType_Invisible(struct Sprite *);

u8 MovementType_WanderAround_Step0(struct MapObject *, struct Sprite *);
u8 MovementType_WanderAround_Step1(struct MapObject *, struct Sprite *);
u8 MovementType_WanderAround_Step2(struct MapObject *, struct Sprite *);
u8 MovementType_WanderAround_Step3(struct MapObject *, struct Sprite *);
u8 MovementType_WanderAround_Step4(struct MapObject *, struct Sprite *);
u8 MovementType_WanderAround_Step5(struct MapObject *, struct Sprite *);
u8 MovementType_WanderAround_Step6(struct MapObject *, struct Sprite *);
u8 MovementType_LookAround_Step0(struct MapObject *, struct Sprite *);
u8 MovementType_LookAround_Step1(struct MapObject *, struct Sprite *);
u8 MovementType_LookAround_Step2(struct MapObject *, struct Sprite *);
u8 MovementType_LookAround_Step3(struct MapObject *, struct Sprite *);
u8 MovementType_LookAround_Step4(struct MapObject *, struct Sprite *);
u8 MovementType_WanderUpAndDown_Step0(struct MapObject *, struct Sprite *);
u8 MovementType_WanderUpAndDown_Step1(struct MapObject *, struct Sprite *);
u8 MovementType_WanderUpAndDown_Step2(struct MapObject *, struct Sprite *);
u8 MovementType_WanderUpAndDown_Step3(struct MapObject *, struct Sprite *);
u8 MovementType_WanderUpAndDown_Step4(struct MapObject *, struct Sprite *);
u8 MovementType_WanderUpAndDown_Step5(struct MapObject *, struct Sprite *);
u8 MovementType_WanderUpAndDown_Step6(struct MapObject *, struct Sprite *);
u8 MovementType_WanderLeftAndRight_Step0(struct MapObject *, struct Sprite *);
u8 MovementType_WanderLeftAndRight_Step1(struct MapObject *, struct Sprite *);
u8 MovementType_WanderLeftAndRight_Step2(struct MapObject *, struct Sprite *);
u8 MovementType_WanderLeftAndRight_Step3(struct MapObject *, struct Sprite *);
u8 MovementType_WanderLeftAndRight_Step4(struct MapObject *, struct Sprite *);
u8 MovementType_WanderLeftAndRight_Step5(struct MapObject *, struct Sprite *);
u8 MovementType_WanderLeftAndRight_Step6(struct MapObject *, struct Sprite *);
u8 MovementType_FaceDirection_Step0(struct MapObject *, struct Sprite *);
u8 MovementType_FaceDirection_Step1(struct MapObject *, struct Sprite *);
u8 MovementType_FaceDirection_Step2(struct MapObject *, struct Sprite *);
u8 MovementType_BerryTreeGrowth_Step0(struct MapObject *, struct Sprite *);
u8 MovementType_BerryTreeGrowth_Step1(struct MapObject *, struct Sprite *);
u8 MovementType_BerryTreeGrowth_Step2(struct MapObject *, struct Sprite *);
u8 MovementType_BerryTreeGrowth_Step3(struct MapObject *, struct Sprite *);
u8 MovementType_BerryTreeGrowth_Step4(struct MapObject *, struct Sprite *);
u8 MovementType_FaceDownAndUp_Step0(struct MapObject *, struct Sprite *);
u8 MovementType_FaceDownAndUp_Step1(struct MapObject *, struct Sprite *);
u8 MovementType_FaceDownAndUp_Step2(struct MapObject *, struct Sprite *);
u8 MovementType_FaceDownAndUp_Step3(struct MapObject *, struct Sprite *);
u8 MovementType_FaceDownAndUp_Step4(struct MapObject *, struct Sprite *);
u8 MovementType_FaceLeftAndRight_Step0(struct MapObject *, struct Sprite *);
u8 MovementType_FaceLeftAndRight_Step1(struct MapObject *, struct Sprite *);
u8 MovementType_FaceLeftAndRight_Step2(struct MapObject *, struct Sprite *);
u8 MovementType_FaceLeftAndRight_Step3(struct MapObject *, struct Sprite *);
u8 MovementType_FaceLeftAndRight_Step4(struct MapObject *, struct Sprite *);
u8 MovementType_FaceUpAndLeft_Step0(struct MapObject *, struct Sprite *);
u8 MovementType_FaceUpAndLeft_Step1(struct MapObject *, struct Sprite *);
u8 MovementType_FaceUpAndLeft_Step2(struct MapObject *, struct Sprite *);
u8 MovementType_FaceUpAndLeft_Step3(struct MapObject *, struct Sprite *);
u8 MovementType_FaceUpAndLeft_Step4(struct MapObject *, struct Sprite *);
u8 MovementType_FaceUpAndRight_Step0(struct MapObject *, struct Sprite *);
u8 MovementType_FaceUpAndRight_Step1(struct MapObject *, struct Sprite *);
u8 MovementType_FaceUpAndRight_Step2(struct MapObject *, struct Sprite *);
u8 MovementType_FaceUpAndRight_Step3(struct MapObject *, struct Sprite *);
u8 MovementType_FaceUpAndRight_Step4(struct MapObject *, struct Sprite *);
u8 MovementType_FaceDownAndLeft_Step0(struct MapObject *, struct Sprite *);
u8 MovementType_FaceDownAndLeft_Step1(struct MapObject *, struct Sprite *);
u8 MovementType_FaceDownAndLeft_Step2(struct MapObject *, struct Sprite *);
u8 MovementType_FaceDownAndLeft_Step3(struct MapObject *, struct Sprite *);
u8 MovementType_FaceDownAndLeft_Step4(struct MapObject *, struct Sprite *);
u8 MovementType_FaceDownAndRight_Step0(struct MapObject *, struct Sprite *);
u8 MovementType_FaceDownAndRight_Step1(struct MapObject *, struct Sprite *);
u8 MovementType_FaceDownAndRight_Step2(struct MapObject *, struct Sprite *);
u8 MovementType_FaceDownAndRight_Step3(struct MapObject *, struct Sprite *);
u8 MovementType_FaceDownAndRight_Step4(struct MapObject *, struct Sprite *);
u8 MovementType_FaceDownUpAndLeft_Step0(struct MapObject *, struct Sprite *);
u8 MovementType_FaceDownUpAndLeft_Step1(struct MapObject *, struct Sprite *);
u8 MovementType_FaceDownUpAndLeft_Step2(struct MapObject *, struct Sprite *);
u8 MovementType_FaceDownUpAndLeft_Step3(struct MapObject *, struct Sprite *);
u8 MovementType_FaceDownUpAndLeft_Step4(struct MapObject *, struct Sprite *);
u8 MovementType_FaceDownUpAndRight_Step0(struct MapObject *, struct Sprite *);
u8 MovementType_FaceDownUpAndRight_Step1(struct MapObject *, struct Sprite *);
u8 MovementType_FaceDownUpAndRight_Step2(struct MapObject *, struct Sprite *);
u8 MovementType_FaceDownUpAndRight_Step3(struct MapObject *, struct Sprite *);
u8 MovementType_FaceDownUpAndRight_Step4(struct MapObject *, struct Sprite *);
u8 MovementType_FaceUpLeftAndRight_Step0(struct MapObject *, struct Sprite *);
u8 MovementType_FaceUpLeftAndRight_Step1(struct MapObject *, struct Sprite *);
u8 MovementType_FaceUpLeftAndRight_Step2(struct MapObject *, struct Sprite *);
u8 MovementType_FaceUpLeftAndRight_Step3(struct MapObject *, struct Sprite *);
u8 MovementType_FaceUpLeftAndRight_Step4(struct MapObject *, struct Sprite *);
u8 MovementType_FaceDownLeftAndRight_Step0(struct MapObject *, struct Sprite *);
u8 MovementType_FaceDownLeftAndRight_Step1(struct MapObject *, struct Sprite *);
u8 MovementType_FaceDownLeftAndRight_Step2(struct MapObject *, struct Sprite *);
u8 MovementType_FaceDownLeftAndRight_Step3(struct MapObject *, struct Sprite *);
u8 MovementType_FaceDownLeftAndRight_Step4(struct MapObject *, struct Sprite *);
u8 MovementType_RotateCounterclockwise_Step0(struct MapObject *, struct Sprite *);
u8 MovementType_RotateCounterclockwise_Step1(struct MapObject *, struct Sprite *);
u8 MovementType_RotateCounterclockwise_Step2(struct MapObject *, struct Sprite *);
u8 MovementType_RotateCounterclockwise_Step3(struct MapObject *, struct Sprite *);
u8 MovementType_RotateClockwise_Step0(struct MapObject *, struct Sprite *);
u8 MovementType_RotateClockwise_Step1(struct MapObject *, struct Sprite *);
u8 MovementType_RotateClockwise_Step2(struct MapObject *, struct Sprite *);
u8 MovementType_RotateClockwise_Step3(struct MapObject *, struct Sprite *);
u8 MovementType_WalkBackAndForth_Step0(struct MapObject *, struct Sprite *);
u8 MovementType_WalkBackAndForth_Step1(struct MapObject *, struct Sprite *);
u8 MovementType_WalkBackAndForth_Step2(struct MapObject *, struct Sprite *);
u8 MovementType_WalkBackAndForth_Step3(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequence_Step0(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequenceUpRightLeftDown_Step1(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequence_Step2(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequence_Step0(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequenceRightLeftDownUp_Step1(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequence_Step2(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequence_Step0(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequenceDownUpRightLeft_Step1(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequence_Step2(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequence_Step0(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequenceLeftDownUpRight_Step1(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequence_Step2(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequence_Step0(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequenceUpLeftRightDown_Step1(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequence_Step2(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequence_Step0(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequenceLeftRightDownUp_Step1(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequence_Step2(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequence_Step0(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequenceDownUpLeftRight_Step1(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequence_Step2(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequence_Step0(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequenceRightDownUpLeft_Step1(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequence_Step2(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequence_Step0(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequenceLeftUpDownRight_Step1(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequence_Step2(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequence_Step0(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequenceUpDownRightLeft_Step1(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequence_Step2(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequence_Step0(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequenceRightLeftUpDown_Step1(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequence_Step2(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequence_Step0(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequenceDownRightLeftUp_Step1(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequence_Step2(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequence_Step0(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequenceRightUpDownLeft_Step1(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequence_Step2(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequence_Step0(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequenceUpDownLeftRight_Step1(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequence_Step2(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequence_Step0(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequenceLeftRightUpDown_Step1(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequence_Step2(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequence_Step0(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequenceDownLeftRightUp_Step1(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequence_Step2(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequence_Step0(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequenceUpLeftDownRight_Step1(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequence_Step2(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequence_Step0(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequenceDownRightUpLeft_Step1(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequence_Step2(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequence_Step0(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequenceLeftDownRightUp_Step1(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequence_Step2(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequence_Step0(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequenceRightUpLeftDown_Step1(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequence_Step2(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequence_Step0(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequenceUpRightDownLeft_Step1(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequence_Step2(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequence_Step0(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequenceDownLeftUpRight_Step1(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequence_Step2(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequence_Step0(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequenceLeftUpRightDown_Step1(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequence_Step2(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequence_Step0(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequenceRightDownLeftUp_Step1(struct MapObject *, struct Sprite *);
u8 MovementType_WalkSequence_Step2(struct MapObject *, struct Sprite *);
u8 MovementType_CopyPlayer_Step0(struct MapObject *, struct Sprite *);
u8 MovementType_CopyPlayer_Step1(struct MapObject *, struct Sprite *);
u8 MovementType_CopyPlayer_Step2(struct MapObject *, struct Sprite *);
u8 MovementType_CopyPlayerInGrass_Step1(struct MapObject *, struct Sprite *);
u8 MovementType_CopyPlayer_Step2(struct MapObject *, struct Sprite *);
u8 MovementType_Hidden_Step0(struct MapObject *, struct Sprite *);
u8 MovementType_WalkInPlace_Step0(struct MapObject *, struct Sprite *);
u8 MovementType_WalkInPlace_Step1(struct MapObject *, struct Sprite *);
u8 MovementType_JogInPlace_Step0(struct MapObject *, struct Sprite *);
u8 MovementType_WalkInPlace_Step1(struct MapObject *, struct Sprite *);
u8 MovementType_RunInPlace_Step0(struct MapObject *, struct Sprite *);
u8 MovementType_WalkInPlace_Step1(struct MapObject *, struct Sprite *);
u8 MovementType_Invisible_Step0(struct MapObject *, struct Sprite *);
u8 MovementType_Invisible_Step1(struct MapObject *, struct Sprite *);
u8 MovementType_Invisible_Step2(struct MapObject *, struct Sprite *);

u8 GetMoveDirectionAnimNum(u8);
u8 GetMoveDirectionFastAnimNum(u8);
u8 GetMoveDirectionFastAnimNum(u8);
u8 GetMoveDirectionFasterAnimNum(u8);
u8 GetMoveDirectionFastestAnimNum(u8);

u32 state_to_direction(u8, u32, u32);

void sub_805AA98();
void sub_805AAB0(void);
u8 sub_805AB54(void);
u8 GetFieldObjectIdByLocalIdAndMap(u8, u8, u8);
bool8 TryGetFieldObjectIdByLocalIdAndMap(u8, u8, u8, u8 *);
u8 GetFieldObjectIdByXY(s16, s16);
u8 GetFieldObjectIdByLocalIdAndMapInternal(u8, u8, u8);
u8 GetFieldObjectIdByLocalId(u8);
u8 GetAvailableFieldObjectSlot(u16, u8, u8, u8 *);
void RemoveFieldObjectByLocalIdAndMap(u8, u8, u8);
void RemoveFieldObjectInternal(struct MapObject *);
u8 SpawnSpecialFieldObject(struct MapObjectTemplate *);
u8 show_sprite(u8, u8, u8);
void MakeObjectTemplateFromFieldObjectTemplate(struct MapObjectTemplate *mapObjTemplate, struct SpriteTemplate *sprTemplate, const struct SubspriteTable **subspriteTables);
u8 AddPseudoFieldObject(u16 graphicsId, void (*callback)(struct Sprite *), s16 x, s16 y, u8 subpriority);
u8 sub_805B410(u8, u8, s16, s16, u8, u8);
void TrySpawnFieldObjects(s16, s16);
void sub_805B710(u16 i, u16 i1);
void sub_805B980(struct MapObject *, u8);
void FieldObjectTurn(struct MapObject *, u8);
void FieldObjectTurnByLocalIdAndMap(u8, u8, u8, u8);
const struct MapObjectGraphicsInfo *GetFieldObjectGraphicsInfo(u8);
void FieldObjectHandleDynamicGraphicsId(struct MapObject *);
void npc_by_local_id_and_map_set_field_1_bit_x20(u8, u8, u8, u8);
void FieldObjectGetLocalIdAndMap(struct MapObject *, void *, void *, void *);
void sub_805BCC0(s16 x, s16 y);
void sub_805BCF0(u8, u8, u8, u8);
void sub_805BD48(u8, u8, u8);
void sub_805BD90(u8 localId, u8 mapNum, u8 mapGroup, s16 x, s16 y);
void gpu_pal_allocator_reset__manage_upper_four(void);
void sub_805BDF8(u16);
u8 sub_805BE58(const struct SpritePalette *);
void pal_patch_for_npc(u16, u16);
u8 FindFieldObjectPaletteIndexByTag(u16);
void npc_load_two_palettes__no_record(u16, u8);
void npc_load_two_palettes__and_record(u16, u8);
void npc_coords_shift(struct MapObject *pObject, s16 x, s16 y);
void sub_805C0F8(u8, u8, u8, s16, s16);
void npc_coords_shift_still(struct MapObject *pObject);
u8 GetFieldObjectIdByXYZ(u16, u16, u8);
void UpdateFieldObjectsForCameraUpdate(s16, s16);
u8 AddCameraObject(u8);
void CameraObjectReset1(void);
u8 * GetFieldObjectScriptPointerByFieldObjectId(u8);
u16 GetFieldObjectFlagIdByFieldObjectId(u8);
u8 FieldObjectGetBerryTreeId(u8);
struct MapObjectTemplate *GetFieldObjectTemplateByLocalIdAndMap(u8, u8, u8);
void sub_805C754(struct MapObject *pObject);
void sub_805C774(struct MapObject *, u8);
void sub_805C78C(u8, u8, u8);
void sub_805C7C4(u8 i);
u8 GetFaceDirectionAnimNum(u8);
u8 GetMoveDirectionAnimNum(u8 unk_19);
u8 GetAcroWheelieDirectionAnimNum(u8);
u8 GetFishingDirectionAnimNum(u8);
u8 GetFishingNoCatchDirectionAnimNum(u8);
u8 GetFishingBiteDirectionAnimNum(u8);
void SetTrainerMovementType(struct MapObject *, u8);
u8 GetTrainerFacingDirectionMovementType(u8);
u8 GetCollisionAtCoords(struct MapObject *, s16, s16, u32);
u8 sub_8060024(struct MapObject *, s16, s16, u8);
bool8 IsBerryTreeSparkling(u8, u8, u8);
void sub_8060288(u8, u8, u8);
void sub_8060388(s16, s16, s16 *, s16 *);
void sub_80603CC(s16 x, s16 y, s16 *pInt, s16 *pInt1);
void GetFieldObjectMovingCameraOffset(s16 *, s16 *);
void FieldObjectMoveDestCoords(struct MapObject *pObject, u32 unk_19, s16 *pInt, s16 *pInt1);
bool8 FieldObjectIsMovementOverridden(struct MapObject *);
bool8 FieldObjectIsHeldMovementActive(struct MapObject *);
bool8 FieldObjectSetHeldMovement(struct MapObject *, u8);
void FieldObjectForceSetHeldMovement(struct MapObject *pObject, u8 a);
void FieldObjectClearHeldMovementIfActive(struct MapObject *);
void FieldObjectClearHeldMovement(struct MapObject *);
bool8 FieldObjectCheckHeldMovementStatus(struct MapObject *);
u8 FieldObjectClearHeldMovementIfFinished(struct MapObject *);
u8 FieldObjectGetHeldMovementActionId(struct MapObject *);
u8 GetFaceDirectionMovementAction(u32);
u8 GetWalkSlowMovementAction(u32);
u8 GetWalkNormalMovementAction(u32);
u8 GetWalkFastMovementAction(u32);
u8 GetRideWaterCurrentMovementAction(u32);
u8 GetWalkFastestMovementAction(u32);
u8 GetSlideMovementAction(u32);
u8 GetPlayerRunMovementAction(u32);
u8 GetJump2MovementAction(u32);
u8 GetJumpInPlaceMovementAction(u32);
u8 GetJumpInPlaceTurnAroundMovementAction(u32);
u8 sub_80608A4(u32);
u8 GetJumpSpecialMovementAction(u32);
u8 GetWalkInPlaceSlowMovementAction(u32);
u8 GetWalkInPlaceNormalMovementAction(u32);
u8 GetWalkInPlaceFastMovementAction(u32);
u8 GetWalkInPlaceFastestMovementAction(u32);
u8 FieldObjectFaceOppositeDirection(struct MapObject *, u8);
u8 GetAcroWheelieFaceDirectionMovementAction(u8);
u8 GetAcroPopWheelieFaceDirectionMovementAction(u8);
u8 GetAcroEndWheelieFaceDirectionMovementAction(u8);
u8 GetAcroWheelieHopFaceDirectionMovementAction(u8);
u8 GetAcroWheelieHopDirectionMovementAction(u8);
u8 GetAcroWheelieJumpDirectionMovementAction(u8);
u8 GetAcroWheelieInPlaceDirectionMovementAction(u8);
u8 GetAcroPopWheelieMoveDirectionMovementAction(u8);
u8 GetAcroWheelieMoveDirectionMovementAction(u8);
u8 GetAcroEndWheelieMoveDirectionMovementAction(u8);
u8 GetOppositeDirection(u8);
void sub_80634D0(struct MapObject *, struct Sprite *);
u8 SpawnSpecialFieldObjectParametrized(u8, u8, u8, s16, s16, u8);
void CameraObjectSetFollowedObjectId(u8);
u8 sub_805ADDC(u8);
void sub_8060320(u32, s16 *, s16 *, s16, s16);
u8 obj_unfreeze(struct Sprite *, s16, s16, u8);
u16 npc_paltag_by_palslot(u8);
void sub_8060470(s16 *, s16 *, s16, s16);
bool8 FreezeMapObject(struct MapObject *);
void FreezeMapObjects(void);
void FreezeMapObjectsExceptOne(u8);
void UnfreezeMapObjects(void);
void UpdateFieldSpriteVisibility(struct Sprite *sprite, bool8 invisible);
void TurnMapObject(u8, u8);
void UnfreezeMapObject(struct MapObject *mapObject);
void oamt_npc_ministep_reset(struct Sprite *sprite, u8 a2, u8 a3);
void sub_806467C(struct Sprite *sprite, u8 direction);
bool8 sub_806468C(struct Sprite *sprite);
void sub_80646E4(struct Sprite *sprite, u8 a2, u8 a3, u8 a4);
void DoShadowFieldEffect(struct MapObject *mapObject);
u8 sub_8064704(struct Sprite *);
u8 sub_806478C(struct Sprite *);
void SetAndStartSpriteAnim(struct Sprite *sprite, u8 a2, u8 a3);
void DoRippleFieldEffect(struct MapObject *mapObj, struct Sprite *sprite);
bool8 IsZCoordMismatchAt(u8 z, s16 x, s16 y);
bool8 AreZCoordsCompatible(u8 z1, u8 z2);
void FieldObjectUpdateMetatileBehaviors(struct MapObject *);
void GetGroundEffectFlags_Reflection(struct MapObject *, u32 *);
void GetGroundEffectFlags_TallGrassOnSpawn(struct MapObject *, u32 *);
void GetGroundEffectFlags_TallGrassOnBeginStep(struct MapObject *, u32 *);
void GetGroundEffectFlags_LongGrassOnSpawn(struct MapObject *, u32 *);
void GetGroundEffectFlags_LongGrassOnBeginStep(struct MapObject *, u32 *);
void GetGroundEffectFlags_Tracks(struct MapObject *, u32 *);
void GetGroundEffectFlags_SandPile(struct MapObject *, u32 *);
void GetGroundEffectFlags_ShallowFlowingWater(struct MapObject *, u32 *);
void GetGroundEffectFlags_Puddle(struct MapObject *, u32 *);
void GetGroundEffectFlags_Ripple(struct MapObject *, u32 *);
void GetGroundEffectFlags_ShortGrass(struct MapObject *, u32 *);
void GetGroundEffectFlags_HotSprings(struct MapObject *, u32 *);
void GetGroundEffectFlags_Seaweed(struct MapObject *, u32 *);
void GetGroundEffectFlags_JumpLanding(struct MapObject *, u32 *);
u8 FieldObjectCheckForReflectiveSurface(struct MapObject *);
u8 GetLedgeJumpDirection(s16, s16, u8);
u8 ZCoordToPriority(u8);
void FieldObjectUpdateZCoord(struct MapObject *pObject);
void SetObjectSubpriorityByZCoord(u8, struct Sprite *, u8);

#endif // GUARD_EVENTOBJMV_H
