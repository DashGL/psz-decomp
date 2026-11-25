/* Clean-room #define symbol bridges and prototypes for proven core PSZ
 * engine helpers (heap allocation, vector helpers, core accessors).
 */
#ifndef PSZ_CORE_H
#define PSZ_CORE_H

#include <psz_types.h>
#include <nitro_sdk.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Core heap allocator / C++ operator new & delete wrappers */
#define psz_alloc_aligned     FUN_020ba7f4
#define psz_free              FUN_020ba84c
#define psz_new               FUN_020ba894
#define psz_delete            FUN_020ba8ac
#define psz_delete_array      FUN_020ba8c4

extern void *FUN_020ba7f4(unsigned int size, int align);
extern void FUN_020ba84c(void *ptr);
extern void *FUN_020ba894(unsigned int size);
extern void FUN_020ba8ac(void *ptr);
extern void FUN_020ba8c4(void *ptr);

/* Core vector / field helpers */
#define vec3_copy             FUN_020345f0
#define vec3_set              FUN_02035408
#define vec16_zero            FUN_02071d0c

extern void FUN_020345f0(VecFx32 *dst, const VecFx32 *src);
extern void FUN_02035408(VecFx32 *dst, fx32 x, fx32 y, fx32 z);
extern void FUN_02071d0c(VecFx16 *dst);

/* Archive loaders (NARCArchive = 0x84 / 132B, ZARC = 0x58 / 88B) */
#define NARC_STATE_IDLE       0
#define NARC_STATE_LOADING    1
#define NARC_STATE_MOUNTED    2
#define NARC_STATE_CLOSED     3

typedef struct NARCArchive {
    void *vtable;             /* +0x00 (0x020fc970) */
    u32 state;                /* +0x04 (NARC_STATE_*) */
    u8 fs_archive[0x68];      /* +0x08..+0x6f: NitroSystem NNS_FndArchive */
    void *data_buf;           /* +0x70: mounted archive payload */
    char mount_name[4];       /* +0x74: 3-char mount prefix + NUL */
    void *compressed_buf;     /* +0x78: temporary LZ buffer */
    void *heap;               /* +0x7c: optional custom heap */
    u32 owns_buf;             /* +0x80: 1 if archive owns data_buf */
} NARCArchive;                /* 0x84 (132) bytes */

#define NARC_Ctor             FUN_020bc2dc
#define NARC_Dtor             FUN_020bc324
#define NARC_Delete           FUN_020bc360
#define LZ77_GetUncompressedSize FUN_020bc3a4
#define NARC_LoadSync         FUN_020bc3c0
#define NARC_LoadAsync        FUN_020bc418
#define NARC_OnAsyncDone      FUN_020bc474
#define NARC_DecompressAndMount FUN_020bc498
#define NARC_Mount            FUN_020bc4dc
#define NARC_GetFileByIndex   FUN_020bc508
#define NARC_GetFileByName    FUN_020bc51c
#define NARC_GetFileSizeByName FUN_020bc548
#define NARC_AllocBuffer      FUN_020bc578
#define NARC_FreeBuffer       FUN_020bc5a0

typedef struct ZarcEntry {
    u32 offset;               /* +0x00: byte offset inside .zarc */
    u32 raw_size;             /* +0x04: stored/compressed byte size */
    u32 unpacked_size;        /* +0x08: 0 if uncompressed, else unpacked size */
    u32 flags;                /* +0x0c: decompression flags */
    u8 _meta[0x20];           /* +0x10..+0x2f */
} ZarcEntry;                  /* 0x30 (48) bytes */

typedef struct ZARCArchive {
    void *vtable;             /* +0x00 (0x020fcb54) */
    u32 entry_count;          /* +0x04 */
    u32 table_offset;         /* +0x08 */
    u32 entry_stride;         /* +0x0c */
    FSFile file;              /* +0x10..+0x57 (72 bytes) */
} ZARCArchive;                /* 0x58 (88) bytes */

#define ZARC_Open               FUN_020c3ca0
#define ZARC_Dtor               FUN_020c3d04
#define ZARC_Delete             FUN_020c3d18
#define ZARC_GetEntrySize       FUN_020c3d34
#define ZARC_ReadEntrySync      FUN_020c3d58
#define ZARC_ReadEntryAsync     FUN_020c3dcc
#define ZARC_FindEntry          FUN_020c3e54
#define PSZ_GenerateRandomSeed64 FUN_020c3e90
#define PSZ_StrCatControl1      FUN_020c3ec4
#define PSZ_StrCopyPadControl1  FUN_020c3f00
#define PSZ_StrNCmp             FUN_020c3f34

extern NARCArchive *FUN_020bc2dc(NARCArchive *arc, const char *mount_name, void *heap);
extern NARCArchive *FUN_020bc324(NARCArchive *arc);
extern NARCArchive *FUN_020bc360(NARCArchive *arc);
extern u32 FUN_020bc3a4(const u8 *lz_hdr);
extern u32 FUN_020bc3c0(NARCArchive *arc, const char *path, void *user_buf);
extern int FUN_020bc418(NARCArchive *arc, const char *path, void *user_buf);
extern void FUN_020bc474(NARCArchive *arc);
extern int FUN_020bc498(NARCArchive *arc, const u8 *lz_buf);
extern u32 FUN_020bc4dc(NARCArchive *arc, void *binary);
extern void *FUN_020bc508(void *archive, u32 index);
extern void *FUN_020bc51c(NARCArchive *arc, const char *entry_name);
extern int FUN_020bc548(NARCArchive *arc, const char *entry_name);
extern void FUN_020bc578(NARCArchive *arc, u32 size, u32 align);
extern void FUN_020bc5a0(NARCArchive *arc);
extern void *FUN_020c3ca0(void *zarc, const char *path);
extern s32 FUN_020c3d34(void *zarc, u32 index);
extern u32 FUN_020c3d58(ZARCArchive *zarc, int index, u8 *out_buf);
extern u32 FUN_020c3dcc(void *zarc, u32 index, void *out_buf, u32 arg);
extern int FUN_020c3e54(ZARCArchive *zarc, ZarcEntry *out_entry, u32 index);
extern u64 FUN_020c3e90(void);
extern s8 *FUN_020c3ec4(s8 *dst, const s8 *src, u32 limit);
extern u32 FUN_020c3f00(s8 *dst, const s8 *src, u32 limit);
extern int FUN_020c3f34(const s8 *a, const s8 *b, u32 limit);

/* Async overlay slot controller (0x80 = 128 bytes) */
typedef struct OverlaySlot {
    FSOverlayInfo info;       /* +0x00 (0x2c bytes) */
    FSFile file;              /* +0x2c (0x48 bytes) */
    u32 overlay_id;           /* +0x74 (0xffffffffu when empty) */
    u32 loading;              /* +0x78 (1 while async read in flight) */
    u32 loaded;               /* +0x7c (1 when overlay active in slot) */
} OverlaySlot;

#define OVERLAY_ID_NONE         0xffffffffu

#define OverlaySlot_Init        FUN_020c3490
#define OverlaySlot_Dtor        FUN_020c34a0
#define OverlaySlot_Poll        FUN_020c34c8
#define OverlaySlot_LoadAsync   FUN_020c34d8
#define OverlaySlot_FinishLoad  FUN_020c3538

extern OverlaySlot *FUN_020c3490(OverlaySlot *slot);
extern void FUN_020c34a0(OverlaySlot *slot);
extern void FUN_020c34c8(OverlaySlot *slot);
extern int FUN_020c34d8(OverlaySlot *slot, u32 overlay_id);
extern void FUN_020c3538(OverlaySlot *slot);

/* Top-level Slot-0 GameStateManager (0x20 = 32 bytes, 19 states -> ov000..ov018) */
#define GAME_STATE_COUNT        19

typedef void (*GameStateCallback)(void);

typedef struct GameStateDesc {
    u32 overlay_id;           /* +0x00: Slot-0 overlay ID (0..18) */
    GameStateCallback on_enter;  /* +0x04 */
    GameStateCallback on_update; /* +0x08 */
    GameStateCallback on_exit;   /* +0x0c */
    u32 _reserved10;          /* +0x10 */
} GameStateDesc;

typedef struct GameStateManager {
    OverlaySlot *overlay_slot; /* +0x00 */
    s32 _unk04;                /* +0x04 */
    s32 next_state;            /* +0x08 (-1 when idle) */
    s32 curr_state;            /* +0x0c (-1 before first state) */
    s32 prev_state;            /* +0x10 */
    s32 prev_prev_state;       /* +0x14 */
    u32 phase;                 /* +0x18 (0..5) */
    u8 transition_flags;       /* +0x1c (bit 0 = fade in, bit 1 = fade out) */
    u8 fade_delay;             /* +0x1d */
} GameStateManager;

#define GameStateManager_Create            FUN_0200d124
#define GameStateManager_Destroy           FUN_0200d148
#define GameStateManager_GetInstance       FUN_0200d16c
#define GameStateManager_Ctor              FUN_0200d178
#define GameStateManager_Dtor              FUN_0200d1a8
#define GameStateManager_Update            FUN_0200d1d4
#define GameStateManager_EnterState        FUN_0200d318
#define GameStateManager_ExitState         FUN_0200d34c
#define GameStateManager_TickState         FUN_0200d378
#define GameStateManager_RequestTransition FUN_0200d3a4

extern void FUN_0200d124(void);
extern void FUN_0200d148(void);
extern GameStateManager *FUN_0200d16c(void);
extern GameStateManager *FUN_0200d178(GameStateManager *mgr);
extern GameStateManager *FUN_0200d1a8(GameStateManager *mgr);
extern void FUN_0200d1d4(GameStateManager *mgr);
extern void FUN_0200d318(GameStateManager *mgr, int state_id);
extern void FUN_0200d34c(GameStateManager *mgr, int state_id);
extern void FUN_0200d378(GameStateManager *mgr, int state_id);
extern int FUN_0200d3a4(GameStateManager *mgr, int state_id, int use_fade);

/* Stage/Boss Slot-1 overlay & enemy factory */
#define ENEMY_TYPE_COUNT      69
typedef u32 (*EnemyFactoryFn)(void *manager, int enemy_id);

#define Enemy_Create                  FUN_0206e3f0
#define FieldOverlay_LoadStageOverlay FUN_02074d68

extern u32 FUN_0206e3f0(void *manager, int enemy_id);
extern void FUN_02074d68(OverlaySlot **out_slot, int stage_id, int area_type);

/* Weapon, item, & stage-object asset loaders */
typedef struct WeaponArchiveHandle {
    u32 state;                /* +0x00 */
    u32 _pad04[4];
    void *zarc;               /* +0x14: opened item/weapon.zarc */
    u32 _pad18[3];
    u32 ref_count;            /* +0x24 */
} WeaponArchiveHandle;

typedef struct RelResourceSlot {
    s8 *raw_buf;              /* +0x00: loaded .rel / extracted buffer */
    void *table;              /* +0x04: resolved table pointer from Rel_ResolveTable */
} RelResourceSlot;

#define WeaponArchive_Acquire     FUN_0204641c
#define WeaponArchive_Reset       FUN_0204644c
#define WeaponArchive_GetRefCount FUN_020464b0
#define WeaponArchive_GetState    FUN_020464bc
#define WeaponArchive_ClearState  FUN_020464c8
#define ItemParamDB_LoadAll       FUN_020843e8
#define RelResource_Load          FUN_02084868

extern void FUN_0204641c(void);
extern void FUN_0204644c(void);
extern int FUN_020464b0(void);
extern int FUN_020464bc(void);
extern void FUN_020464c8(void);
extern void FUN_020843e8(RelResourceSlot *slots);
extern void FUN_02084868(RelResourceSlot *slot, const char *path);

#ifdef __cplusplus
}
#endif

#endif /* PSZ_CORE_H */
