/* Clean-room structs and symbol bridges for the Phantasy Star Zero Stage Object
 * Asset Banks & Manager (object/%s_{mdl.narc,tex.narc,prm.rel}, 3 banks).
 */
#ifndef PSZ_OBJECT_H
#define PSZ_OBJECT_H

#include <psz_core.h>

#ifdef __cplusplus
extern "C" {
#endif

#define STAGE_OBJ_BANK_COUNT   3
#define STAGE_OBJ_INDEX_NONE   0xff
#define STAGE_OBJ_TYPE_LIMIT   47
#define STAGE_OBJ_HANDLE_NONE  0xffff

typedef struct StageObjectRecord {
    u8 _header[24];           /* +0x00..+0x17 */
    u8 mdl_indices[2];        /* +0x18..+0x19: NARC indices in object/%s_mdl.narc */
    u8 tex_indices[2];        /* +0x1a..+0x1b: NARC indices in object/%s_tex.narc */
    u8 anim_indices[3];       /* +0x1c..+0x1e: NARC indices in object/%s_mdl.narc */
    s8 type;                  /* +0x1f: object type ID (0..46) */
    s8 subtype;               /* +0x20: object subtype/variant */
    u8 anim_flags;            /* +0x21: bit 0 = anim kind 4, bit 1 = anim kind 0 */
    u8 _pad22[2];             /* +0x22..+0x23 */
} StageObjectRecord;          /* 36 (0x24) bytes */

typedef struct StageObjectParamTable {
    StageObjectRecord *records; /* +0x00 */
    u32 count;                  /* +0x04 */
} StageObjectParamTable;

typedef struct StageObjectResHandles {
    u16 mdl[2];               /* +0x00..+0x03: 3D model handles (0xffff = none) */
    u16 tex[2];               /* +0x04..+0x07: 3D texture handles */
    u16 anim[3];              /* +0x08..+0x0d: 3D animation handles */
} StageObjectResHandles;      /* 14 (0x0e) bytes */

typedef struct StageObjectBank {
    NARCArchive *mdl_narc;          /* +0x00: object/%s_mdl.narc */
    NARCArchive *tex_narc;          /* +0x04: object/%s_tex.narc */
    StageObjectParamTable *prm_tbl; /* +0x08: resolved object/%s_prm.rel */
    void *prm_raw_buf;              /* +0x0c: raw .rel allocation */
    StageObjectResHandles *handles; /* +0x10: array of count handle sets */
    u32 count;                      /* +0x14 */
} StageObjectBank;                  /* 24 (0x18) bytes */

typedef struct StageObjectRef {
    s8 status;                /* +0x00: 1 = resolved, 2 = not found */
    s8 bank_idx;              /* +0x01: 0..2 (-1 when unresolved) */
    u8 entry_idx;             /* +0x02: index into bank */
} StageObjectRef;             /* 3 bytes */

typedef struct StageObjectManager {
    StageObjectBank banks[STAGE_OBJ_BANK_COUNT]; /* +0x00..+0x47 (72 bytes) */
    u16 special_handles[5];                      /* +0x48..+0x51 */
    u16 _pad52[3];                               /* +0x52..+0x57 */
    StageObjectResHandles extra_handles[1];      /* +0x58+: bank 2 extra handle sets */
} StageObjectManager;

typedef struct StageEntitySpawn {
    u8 _pad00[0x12];
    s8 subtype;               /* +0x12 */
    u8 _pad13;
    u8 type;                  /* +0x14 */
} StageEntitySpawn;

#define StageObjectBank_Dtor              FUN_0205013c
#define StageObjectBank_Load              FUN_02050148
#define StageObjectRecord_GetKey          FUN_02050200
#define StageObjectBank_Unload            FUN_02050210
#define StageObjectBank_RegisterAssets    FUN_02050250
#define StageObjectBank_UnregisterAssets  FUN_02050364
#define StageObjectBank_GetRecord         FUN_02050420
#define StageObjectBank_FindIndex         FUN_02050440
#define StageObjectBank_GetHandles        FUN_020504a4
#define StageObjectBank_GetModelFile      FUN_020504bc
#define StageObjectBank_GetTextureFile    FUN_020504d4
#define StageObjectManager_LoadStageBank  FUN_02050624
#define StageObjectManager_ClearBank0     FUN_020506bc
#define StageObjectManager_ClearBank1     FUN_020507e0
#define StageObject_ClassifyRoomKind      FUN_020507f4
#define StageObjectManager_GetRecord      FUN_020508ac
#define StageObjectManager_GetHandles     FUN_020508ec
#define StageObjectManager_ResolveFromEntity FUN_02050938
#define StageObjectManager_ResolveRef     FUN_02050948

extern StageObjectBank *FUN_0205013c(StageObjectBank *bank);
extern void FUN_02050148(StageObjectBank *bank, const char *asset_name, int bank_type);
extern u32 FUN_02050200(const StageObjectRecord *rec);
extern void FUN_02050210(StageObjectBank *bank);
extern void FUN_02050250(StageObjectBank *bank);
extern void FUN_02050364(StageObjectBank *bank);
extern StageObjectRecord *FUN_02050420(StageObjectBank *bank, u32 index);
extern u32 FUN_02050440(StageObjectBank *bank, int type, int subtype);
extern StageObjectResHandles *FUN_020504a4(StageObjectBank *bank, u32 index);
extern void *FUN_020504bc(StageObjectBank *bank, u32 index);
extern void *FUN_020504d4(StageObjectBank *bank, u32 index);
extern void FUN_02050624(StageObjectManager *mgr);
extern void FUN_020506bc(StageObjectManager *mgr);
extern void FUN_020507e0(StageObjectManager *mgr);
extern int FUN_020507f4(void *unused, const int *room_desc);
extern StageObjectRecord *FUN_020508ac(StageObjectManager *mgr, const StageObjectRef *ref);
extern StageObjectResHandles *FUN_020508ec(StageObjectManager *mgr, const StageObjectRef *ref);
extern void FUN_02050938(StageObjectRef *out_ref, StageObjectManager *mgr, const StageEntitySpawn *entity);
extern void FUN_02050948(StageObjectRef *out_ref, StageObjectManager *mgr, int type, int subtype);

/* Shared 3D resource manager & allocator helpers */
#define File_LoadAligned      FUN_020ba374
#define Rel_ResolveTable      FUN_020ba440
#define psz_new_array         FUN_020ba8a0
#define psz_delete_buf        FUN_020ba8b4

extern void *FUN_020ba374(const char *path, u32 *out_size, int align);
extern void *FUN_020ba440(void *raw_buf);
extern void *FUN_020ba8a0(u32 size);
extern void FUN_020ba8b4(void *ptr);

#ifdef __cplusplus
}
#endif

#endif /* PSZ_OBJECT_H */
