/* Clean-room structs and symbol bridges for the Phantasy Star Zero Enemy
 * Resource Cache & 3D Asset Loader (enemy/<name>.narc, 3 concurrent slots).
 */
#ifndef PSZ_ENEMY_H
#define PSZ_ENEMY_H

#include <psz_core.h>

#ifdef __cplusplus
extern "C" {
#endif

#define ENEMY_CACHE_SLOT_COUNT 3
#define ENEMY_RES_GROUP_COUNT  7
#define RES_HANDLE_INVALID     0xffff

typedef struct EnemyResHandle {
    u16 res_id;               /* +0x00: 3D resource manager handle (0xffff = invalid) */
    u16 flags;                /* +0x02 */
} EnemyResHandle;             /* 4 bytes */

typedef struct EnemyResGroupDesc {
    s8 *entries;              /* +0x00: 4-byte descriptors ({ s8 narc_idx, s8 tex_idx, ... }) */
    s32 count;                /* +0x04 */
} EnemyResGroupDesc;          /* 8 bytes */

typedef struct EnemySubEffectSpec {
    s8 narc_indices[7];       /* +0x00..+0x06 */
    s8 shared_tex_id;         /* +0x07 (14..148 binds shared texture) */
} EnemySubEffectSpec;         /* 8 bytes */

typedef struct EnemySubResource {
    u16 handles[7];           /* +0x00..+0x0d */
    u16 _pad0e;
    s32 has_shared_tex;       /* +0x10 */
} EnemySubResource;           /* 20 (0x14) bytes */

typedef struct EnemyAssetHeader {
    s8 *id_ptr;               /* +0x00: *id_ptr is the enemy type ID */
    EnemyResGroupDesc *groups;/* +0x04: array of 7 resource groups */
    u32 _pad08[6];
    EnemySubEffectSpec *sub_specs; /* +0x20 */
    s32 sub_count;            /* +0x24 */
    u32 _pad28[2];
    u32 config_word;          /* +0x30 */
} EnemyAssetHeader;

typedef struct EnemyResourceSlot {
    NARCArchive *narc;        /* +0x00: opened enemy/%s.narc */
    char mount_name[4];       /* +0x04: "e0", "e1", "e2" */
    EnemyAssetHeader *header; /* +0x08: resolved entry 0 of NARC */
    s32 enemy_id;             /* +0x0c: -1 when empty */
    u32 active;               /* +0x10: 1 while allocated/loaded */
    EnemyResHandle *group_handles[ENEMY_RES_GROUP_COUNT]; /* +0x14..+0x2f */
    EnemySubResource *sub_resources; /* +0x30: array of header->sub_count entries */
} EnemyResourceSlot;          /* 52 (0x34) bytes */

typedef struct EnemyResourceCache {
    OverlaySlot *stage_overlay; /* +0x00: Slot-1 enemy/boss overlay */
    EnemyResourceSlot *slots; /* +0x04: 3-element EnemyResourceSlot array */
    s32 slot_count;           /* +0x08: 3 */
    s32 *pending_ids;         /* +0x0c: 3-element async load queue (-1 = empty) */
    s32 loading_slot;         /* +0x10: active async slot index (-1 = idle) */
    void *heap;               /* +0x14: enemy asset heap */
    u32 _pad18[3];
    u32 sound_bank_id;        /* +0x24: enemy SE sound bank handle */
} EnemyResourceCache;         /* 40 (0x28) bytes */

#define EnemyResourceCache_Destroy          FUN_0203f894
#define EnemyResourceSlot_Reset             FUN_0203f8b8
#define EnemyResourceCache_Ctor             FUN_0203f8d8
#define EnemyResourceCache_Dtor             FUN_0203f96c
#define EnemyResourceCache_Poll             FUN_0203f9c8
#define EnemyResourceCache_LoadSync         FUN_0203fb00
#define EnemyResourceSlot_MountAssets       FUN_0203fb70
#define ResourceHandleSet_Init              FUN_0203fd88
#define EnemySubResource_Ctor               FUN_0203fda4
#define EnemyResourceCache_UnloadEnemy      FUN_0203fdb0
#define EnemyResourceCache_UnloadAll        FUN_0203fde0
#define EnemyResourceSlot_Release           FUN_0203fe10
#define EnemyResourceCache_FindSlot         FUN_0203ff0c
#define EnemyResourceCache_FindFreeSlot     FUN_0203ff48
#define EnemyResourceCache_GetHeader        FUN_0203ff68
#define EnemyResourceCache_GetModelId       FUN_0203ff7c
#define EnemyResourceCache_GetResourceId    FUN_0203ffa8
#define EnemyResourceCache_GetSubResource   FUN_0203ffe8
#define EnemyResourceCache_GetHeaderParam   FUN_02040004
#define EnemyResourceCache_IsLoaded         FUN_02040010
#define EnemyResourceCache_IsLoadedOrQueued FUN_0204002c

extern void FUN_0203f894(void);
extern EnemyResourceSlot *FUN_0203f8b8(EnemyResourceSlot *slot);
extern EnemyResourceCache *FUN_0203f8d8(EnemyResourceCache *cache);
extern EnemyResourceCache *FUN_0203f96c(EnemyResourceCache *cache);
extern void FUN_0203f9c8(EnemyResourceCache *cache);
extern void FUN_0203fb00(EnemyResourceCache *cache, int enemy_id);
extern void FUN_0203fb70(EnemyResourceCache *cache, EnemyResourceSlot *slot);
extern u16 *FUN_0203fd88(u16 *handles);
extern EnemySubResource *FUN_0203fda4(EnemySubResource *sub);
extern void FUN_0203fdb0(EnemyResourceCache *cache, int enemy_id);
extern void FUN_0203fde0(EnemyResourceCache *cache);
extern void FUN_0203fe10(EnemyResourceCache *cache, EnemyResourceSlot *slot);
extern EnemyResourceSlot *FUN_0203ff0c(EnemyResourceCache *cache, int enemy_id);
extern EnemyResourceSlot *FUN_0203ff48(EnemyResourceCache *cache);
extern EnemyAssetHeader *FUN_0203ff68(EnemyResourceCache *cache, int enemy_id);
extern u32 FUN_0203ff7c(EnemyResourceCache *cache, int enemy_id, int index);
extern u32 FUN_0203ffa8(EnemyResourceCache *cache, int enemy_id, int kind, int index);
extern EnemySubResource *FUN_0203ffe8(EnemyResourceCache *cache, int enemy_id, u32 index);
extern u32 FUN_02040004(EnemyResourceCache *cache, int enemy_id);
extern int FUN_02040010(EnemyResourceCache *cache, int enemy_id);
extern int FUN_0204002c(EnemyResourceCache *cache, int enemy_id);

/* Shared array allocator & 3D resource manager helpers */
#define psz_new_array         FUN_020ba8a0
#define psz_delete_buf        FUN_020ba8b4
#define Rel_ResolveTable      FUN_020ba440

extern void *FUN_020ba8a0(u32 size);
extern void FUN_020ba8b4(void *ptr);
extern void *FUN_020ba440(void *raw_buf);

#ifdef __cplusplus
}
#endif

#endif /* PSZ_ENEMY_H */
