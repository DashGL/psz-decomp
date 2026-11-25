/* Clean-room structs and symbol bridges for the Phantasy Star Zero Weapon-ID,
 * Effect Bank (global/middle/effect tex+dat), Mag Parameter DB, and Dynamic
 * Item/Mag/Weapon Slot Cache (0x02044ef8..0x020459c8).
 */
#ifndef PSZ_EFFECT_H
#define PSZ_EFFECT_H

#include <psz_core.h>

#ifdef __cplusplus
struct EffectVirtualArchive {
    virtual ~EffectVirtualArchive();
};
typedef EffectVirtualArchive EffectArchiveSlot;
#else
typedef NARCArchive EffectArchiveSlot;
#endif

#ifdef __cplusplus
extern "C" {
#endif

#define EFFECT_RES_SLOT_COUNT     7
#define EFFECT_GLOBAL_START       0
#define EFFECT_GLOBAL_END         11
#define EFFECT_MIDDLE_START       11
#define EFFECT_MIDDLE_END         14
#define EFFECT_FIELD_START        14
#define EFFECT_TOTAL_COUNT        149
#define EFFECT_HANDLE_NONE        0xffff
#define WEAPON_CAT_TABLE_COUNT    16
#define WEAPON_CAT_TABLE_BYTES    216
#define MAG_TYPE_COUNT            22
#define MAG_GROWTH_GROUP_COUNT    12
#define MAG_GROWTH_ITEM_COUNT     6
#define ITEM_CACHE_SLOT_COUNT     4
#define ITEM_MODEL_POOL_BYTES     8192
#define WEAPON_MODEL_POOL_BYTES   11520
#define ITEM_POOL_ALIGN           16

typedef struct EffectIndexRow {
    s16 indices[EFFECT_RES_SLOT_COUNT];     /* 14 bytes: NARC entry indices (-1 = unused, [1] = tex flag) */
} EffectIndexRow;

typedef struct EffectBufRow {
    void *ptrs[EFFECT_RES_SLOT_COUNT];      /* 28 bytes: extracted NARC sub-file pointers */
} EffectBufRow;

typedef struct EffectAnimHandles {
    u16 ids[5];                             /* 10 bytes: 5 animation resource handles */
} EffectAnimHandles;

typedef struct EffectResHandles {
    u16 mdl_id;                             /* +0x00 */
    u16 tex_id;                             /* +0x02 */
    EffectAnimHandles anims;                /* +0x04..+0x0d */
} EffectResHandles;                         /* 14 (0x0e) bytes */

typedef struct EffectMetaEntry {
    u32 flags;                              /* +0x00 */
    s8 param_a;                             /* +0x04 */
    s8 param_b;                             /* +0x05 */
    s16 param_c;                            /* +0x06 */
} EffectMetaEntry;                          /* 8 bytes */

typedef struct MagFeedIndexRow {
    s8 stats[4];
} MagFeedIndexRow;

typedef struct ItemIdKey {
    u8 bytes[4];                            /* 4-byte item identity (category, subtype, ...) */
} ItemIdKey;

typedef struct EffectArchiveBank {
    EffectArchiveSlot *slots[9];            /* [0]=zarc_state, [1]=egd, [2]=emx, [3]=wpn_max, [4]=egx, [5]=wpn_zarc, [6]=efx, [7]=efd, [8]=emd */
    u32 weapon_ref_count;                   /* +0x24 */
    s32 item_pool_max_used;                 /* +0x28 */
    VecFx32 default_offset;                 /* +0x2c..+0x37 (0x02108d98) */
    u16 field_tex_mdl_id;                   /* +0x38 (0x02108da4) */
    u16 field_tex_id;                       /* +0x3a (0x02108da6) */
} EffectArchiveBank;

typedef struct WeaponZarcManager {
    u32 async_tag;                          /* +0x00 */
    void *_narc04;                          /* +0x04 */
    void *_narc08;                          /* +0x08 */
    s32 weapon_pool_max;                    /* +0x0c */
    void *_narc10;                          /* +0x10 */
    void *weapon_zarc;                      /* +0x14 */
    void *_narc18;                          /* +0x18 */
    void *_narc1c;                          /* +0x1c */
    void *_narc20;                          /* +0x20 */
    u32 ref_count;                          /* +0x24 */
    s32 item_pool_max;                      /* +0x28 */
    VecFx32 default_offset;                 /* +0x2c..+0x37 */
} WeaponZarcManager;

typedef struct WeaponTierCounts {
    s8 tier0;
    s8 tier1;
    s8 tier2;
    s8 tier3;
} WeaponTierCounts;

typedef struct WeaponZarcEntry {
    u32 mdl_main : 10;                      /* 0x3ff = none */
    u32 mdl_sub  : 10;
    u32 tex      : 10;
    u32 _pad0    : 2;
    u32 anim_a   : 10;
    u32 anim_b   : 10;
    u32 bullet   : 10;
    u32 _pad1    : 2;
} WeaponZarcEntry;                          /* 8 bytes */

typedef struct WeaponZarcRawWords {
    u32 lo;
    u32 hi;
} WeaponZarcRawWords;                       /* 8 bytes */

typedef struct EffectClassEntry {
    s8 param_a;
    s8 param_b;
    s16 param_c;
    u32 flags;
} EffectClassEntry;                         /* 8 bytes */

typedef struct ElementColorTable {
    u16 entries[9];
} ElementColorTable;

typedef struct EffectTexHandleTable {
    u16 _pad00[4];
    u16 global_tex_id;                      /* +0x08 (0x02108db4) */
    u16 _pad0a[6];
    u16 middle_tex_id;                      /* +0x16 (0x02108dc2) */
} EffectTexHandleTable;

typedef struct EffectTexBufBlock {
    u32 _pad00[14];
    void *global_tex_buf;                   /* +0x38 (0x02108e24) */
    u32 _pad3c[6];
    void *middle_tex_buf;                   /* +0x54 (0x02108e40) */
    u32 _pad58[6];
    void *field_tex_buf;                    /* +0x70 (0x02108e5c) */
} EffectTexBufBlock;

/* Function bridges (0x02044ef8..0x020459c8) */
#define WeaponIdDB_Load           FUN_02044ef8
#define EffectIdDB_Load           FUN_020450cc
#define MagParamDB_Load           FUN_02045164
#define EffectBank_LoadGlobal     FUN_020451d4
#define EffectBank_UnloadGlobal   FUN_020452ec
#define EffectBank_LoadMiddle     FUN_02045378
#define EffectBank_UnloadMiddle   FUN_02045490
#define EffectBank_LoadField      FUN_0204551c
#define EffectBank_UnloadField    FUN_02045630
#define EffectBank_GetHandles     FUN_020456bc
#define EffectIdDB_GetMeta        FUN_0204570c
#define MagParamDB_GetFeedStats   FUN_0204573c
#define MagParamDB_GetGrowthRow   FUN_0204579c
#define ItemModelPool_Init        FUN_020457f0
#define ItemIdKey_Clear           FUN_02045848
#define ItemModelPool_Reset       FUN_02045854
#define ItemModelPool_Invalidate  FUN_020458ac
#define ItemIdKey_Equals          FUN_020458f8
#define ItemModelPool_MatchesSlot FUN_02045920
#define ItemModelPool_GetResPtr   FUN_02045948
#define ItemModelPool_SetSlotKey  FUN_02045970
#define ItemIdKey_Copy            FUN_02045990
#define ItemModelPool_IsSlotReady FUN_020459a4
#define WeaponModelPool_Init      FUN_020459c8

extern void FUN_02044ef8(void);
extern void FUN_020450cc(void);
extern void FUN_02045164(void);
extern void FUN_020451d4(void);
extern void FUN_020452ec(void);
extern void FUN_02045378(void);
extern void FUN_02045490(void);
extern void FUN_0204551c(void);
extern void FUN_02045630(void);
extern void FUN_020456bc(EffectResHandles *out, int effect_id);
extern void FUN_0204570c(EffectMetaEntry *out, int effect_id);
extern int FUN_0204573c(s8 *out_stats, int mag_type, int item_col);
extern int FUN_0204579c(s8 *out_growth, int group_idx, int item_idx);
extern void FUN_020457f0(void);
extern void FUN_02045848(ItemIdKey *key);
extern void FUN_02045854(void);
extern void FUN_020458ac(int slot, ItemIdKey *key);
extern int FUN_020458f8(const ItemIdKey *left, const ItemIdKey *right);
extern int FUN_02045920(int slot, const ItemIdKey *key);
extern u32 FUN_02045948(int slot, int res_idx);
extern void FUN_02045970(u32 slot, const ItemIdKey *key);
extern ItemIdKey *FUN_02045990(ItemIdKey *dst, const ItemIdKey *src);
extern int FUN_020459a4(int slot);
extern void FUN_020459c8(void);

/* Function bridges (0x02045a38..0x020463b8) */
#define WeaponModelPool_Reset         FUN_02045a38
#define WeaponModelPool_Invalidate    FUN_02045aac
#define WeaponModelPool_MatchesSlot   FUN_02045b1c
#define WeaponModelPool_GetResPtr     FUN_02045b50
#define WeaponModelPool_SetSlotKey    FUN_02045b84
#define WeaponModelPool_IsSlotReady   FUN_02045bb4
#define WeaponZarc_LoadAssetAsync     FUN_02045bd8
#define WeaponZarc_ResolveEntryIndex  FUN_02045ce4
#define WeaponIdDB_GetTierFlatIndex   FUN_02045e30
#define EffectRes_RegisterSet         FUN_02045e90
#define EffectRes_UnregisterSet       FUN_02045f84
#define EffectRes_BindSharedTex       FUN_02045fd8
#define WeaponIdDB_GetMuzzleByParts   FUN_02046000
#define WeaponIdDB_GetMuzzleOffset    FUN_02046020
#define MagParamDB_GetAttachOffset    FUN_020461f8
#define WeaponIdDB_GetSlicerOffset    FUN_0204624c
#define WeaponIdDB_GetDefaultOffset   FUN_020462c8
#define WeaponIdDB_GetBulletByParts   FUN_020462f0
#define WeaponIdDB_GetBulletEffectId  FUN_0204630c
#define ElementColor_GetByIndex       FUN_02046390
#define EffectIdDB_GetClassEntry      FUN_020463b8

extern void FUN_02045a38(void);
extern void FUN_02045aac(int slot, ItemIdKey *key);
extern int FUN_02045b1c(int slot, const ItemIdKey *key, int hand);
extern u32 FUN_02045b50(int slot, int res_idx, int hand);
extern void FUN_02045b84(int slot, const ItemIdKey *key, int hand);
extern int FUN_02045bb4(int slot);
extern void *FUN_02045bd8(int owner, ItemIdKey *key, int res_slot, int hand, int selector, u32 async_arg, u32 async_tag);
extern int FUN_02045ce4(const ItemIdKey *key, int res_slot, int hand, int selector);
extern u32 FUN_02045e30(u32 category, u32 tier, u32 sub_id);
extern void FUN_02045e90(EffectResHandles *dst, void *src_ptrs, int mode);
extern void FUN_02045f84(EffectResHandles *handles);
extern void FUN_02045fd8(EffectResHandles *handles, u32 tex_id);
extern void FUN_02046000(void *ctx, VecFx32 *out, u32 cat, u32 tier, u32 sub, u32 alt_hand);
extern void FUN_02046020(void *ctx, VecFx32 *out, const ItemIdKey *key, int alt_hand);
extern void FUN_020461f8(VecFx32 *out, int mag_id);
extern void FUN_0204624c(void *ctx, VecFx32 *out, const ItemIdKey *key);
extern void FUN_020462c8(VecFx32 *out);
extern u32 FUN_020462f0(void *ctx, u32 cat, u32 tier, u32 sub);
extern u32 FUN_0204630c(void *ctx, const ItemIdKey *key);
extern void FUN_02046390(u16 *out_color, u32 index);
extern EffectClassEntry FUN_020463b8(int alt_set, u32 a, u32 b, u32 c);

/* Shared helper bridges */
#define Item_IsCategory           FUN_0203a820
#define Item_IsSubCategory        FUN_0203a1a8
#define Weapon_GetModelSelector   FUN_02046660
#define ResMgr_BindModelTex       FUN_02033f30
#define ResMgr_RegisterModel      FUN_02037adc
#define ResMgr_UnregisterModel    FUN_02037b88
#define ResMgr_RegisterTex        FUN_02037bd0
#define ResMgr_UnregisterTex      FUN_02037c5c
#define ResMgr_RegisterAnim       FUN_02037c88
#define ResMgr_UnregisterAnim     FUN_02037d20
#define ItemSlot_IsValid          FUN_02078188
#define Rel_ResolveTable          FUN_020ba440
#define psz_alloc_array_aligned   FUN_020ba8bc
#define crt_memcpy                FUN_020014d4

extern int FUN_0203a820(const ItemIdKey *key, int cat);
extern int FUN_0203a1a8(const ItemIdKey *key, int sub_cat);
extern int FUN_02046660(void *ctx, const ItemIdKey *key);
extern void FUN_02033f30(void *res_mgr, u32 mdl_id, u32 tex_id);
extern u32 FUN_02037adc(void *res_mgr, void *mdl_buf, int flags);
extern void FUN_02037b88(void *res_mgr, u32 handle);
extern u32 FUN_02037bd0(void *res_mgr, void *tex_buf);
extern void FUN_02037c5c(void *res_mgr, u32 handle);
extern u32 FUN_02037c88(void *res_mgr, void *anim_buf, int kind, int flags);
extern void FUN_02037d20(void *res_mgr, u32 handle);
extern int FUN_02078188(int slot);
extern void *FUN_020ba440(void *raw_buf);
extern void *FUN_020ba8bc(u32 size, u32 align);

#define g_ResMgr                  DAT_02108c84
#define g_WeaponTierCounts        DAT_02108e94
#define g_WeaponZarcTable         DAT_0210c390
#define g_MagZarcTable            DAT_0210a818
#define g_MuzzleHandgun           DAT_02109200
#define g_MuzzleRifle             DAT_02109344
#define g_MuzzleGunblade          DAT_02109488
#define g_MuzzleMechgun           DAT_02109cb0
#define g_MuzzleBazooka           DAT_021095cc
#define g_MuzzleLaser             DAT_02109710
#define g_MagAttachOffsets        DAT_02109b24
#define g_SlicerOffsets           DAT_021090bc
#define g_EffectClassTableAlt     DAT_0210b040
#define g_ElementColorTable       DAT_020ed5b4

#pragma thumb off
extern void FUN_020014d4(void *dst, const void *src, u32 size);
#pragma thumb reset

/* Global BSS & string symbol bridges */
#define g_EffectArchiveBank       DAT_02108d6c
#define g_EffectFieldTexHandles   DAT_02108da4
#define g_EffectTexHandleTable    DAT_02108dac
#define g_EffectGlobalTexHandles  DAT_02108db2
#define g_EffectMiddleTexHandles  DAT_02108dc0
#define g_EffectTexBufBlock       DAT_02108dec
#define g_EffectGlobalTexBufs     DAT_02108e20
#define g_EffectMiddleTexBufs     DAT_02108e3c
#define g_EffectFieldTexBufs      DAT_02108e58
#define g_EffectIndexTable        DAT_0210bb68
#define g_EffectMetaTable         DAT_0210a370
#define g_EffectClassTable        DAT_0210ad40
#define g_EffectHandlesTable      DAT_0210b340
#define g_EffectBufsTable         DAT_0210d1e8

#define g_MagFeedStatTable        DAT_02108f48
#define g_MagFeedIndexTable       DAT_02108f84
#define g_MagGrowthTable          DAT_021099bc

#define g_ItemPoolBases           DAT_02108dd0
#define g_ItemPoolCursors         DAT_02108df0
#define g_ItemPoolKeys            DAT_02108e00
#define g_ItemPoolResPtrs         DAT_02108ed8
#define g_WeaponPoolBases         DAT_02108de0
#define g_WeaponPoolCursors       DAT_02108e10
#define g_WeaponPoolKeys          DAT_02108e74
#define g_WeaponPoolResPtrs       DAT_02108fdc

#define g_WeaponIdMountName       DAT_020f8e88
#define g_WeaponIdNarcPath        DAT_020f8e8c
#define g_EffectIdMountName       DAT_020f8ea0
#define g_EffectIdNarcPath        DAT_020f8ea4
#define g_MagParamMountName       DAT_020f8eb8
#define g_MagParamNarcPath        DAT_020f8ebc
#define g_GlobalTexMountName      DAT_020f8ed0
#define g_GlobalTexNarcPath       DAT_020f8ed4
#define g_GlobalDatMountName      DAT_020f8eec
#define g_GlobalDatNarcPath       DAT_020f8ef0
#define g_MiddleTexMountName      DAT_020f8f08
#define g_MiddleTexNarcPath       DAT_020f8f0c
#define g_MiddleDatMountName      DAT_020f8f24
#define g_MiddleDatNarcPath       DAT_020f8f28
#define g_EffectTexMountName      DAT_020f8f40
#define g_EffectTexNarcPath       DAT_020f8f44
#define g_EffectDatMountName      DAT_020f8f5c
#define g_EffectDatNarcPath       DAT_020f8f60

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
#define EffectNarc_Alloc()             ((EffectArchiveSlot *)psz_new(sizeof(NARCArchive)))
#define EffectNarc_Ctor(arc, name)     ((EffectArchiveSlot *)NARC_Ctor((NARCArchive *)(arc), (name), 0))
#define EffectNarc_LoadSync(arc, path) NARC_LoadSync((NARCArchive *)(arc), (path), 0)
#define EffectNarc_GetFile(arc, idx)   NARC_GetFileByIndex((NARCArchive *)(arc), (idx))
#define EffectRel_ResolveChars(p)      ((char *)Rel_ResolveTable(p))
#define AllocWeaponAssetBuf(sz)        ((char *)psz_alloc_array_aligned((sz), ITEM_POOL_ALIGN))
#endif

#endif /* PSZ_EFFECT_H */
