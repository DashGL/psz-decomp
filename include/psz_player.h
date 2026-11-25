/* Clean-room structs and symbol bridges for the Phantasy Star Zero Player
 * Resource & Animation Manager (player/player_model.zarc, player/%s_tex.zarc,
 * player/99_always.narc, player/pb_*.narc, player/*_pa*.narc).
 */
#ifndef PSZ_PLAYER_H
#define PSZ_PLAYER_H

#include <psz_core.h>

#ifdef __cplusplus
struct PlayerVirtualArchive {
    virtual ~PlayerVirtualArchive();
};
typedef PlayerVirtualArchive PlayerZarcSlot;
typedef PlayerVirtualArchive PlayerNarcSlot;
#else
typedef ZARCArchive PlayerZarcSlot;
typedef NARCArchive PlayerNarcSlot;
#endif

#ifdef __cplusplus
extern "C" {
#endif

#define PLAYER_SLOT_COUNT        4
#define PLAYER_ANIM_COUNT        22
#define PLAYER_ALWAYS_ANIM_COUNT 2
#define PLAYER_CLASS_COUNT       14
#define PLAYER_NPC_CLASS_MIN     14
#define PLAYER_NPC_CLASS_MAX     18
#define PLAYER_MODEL_COUNT       61
#define PLAYER_TEX_VARIANT_COUNT 45
#define PLAYER_WEAPON_PA_COUNT   54
#define PLAYER_ANIM_SET_LIMIT    56
#define PLAYER_PB_KIND_MIN       1
#define PLAYER_PB_KIND_LIMIT     5
#define PLAYER_HANDLE_NONE       0xffff
#define PLAYER_SLOT_INVALID      0xff
#define PLAYER_MDL_DEFAULT_CAP   0x2200
#define PLAYER_TEX_DEFAULT_CAP   0x2900
#define PLAYER_ANIM_MAX_BYTES    0x19000
#define PLAYER_PB_MAX_BYTES      0x10000
#define PLAYER_TICK_PERIOD       40
#define PLAYER_TICK_STRIDE       10u
#define PLAYER_PATH_BUF_SIZE     0x40
#define PLAYER_WIFI_HEAP_ID      7
#define PLAYER_BUF_ALIGN         16

#ifdef __cplusplus
struct PlayerAppHeaderBlock { u16 words[18]; };
struct PlayerAppColorBlock  { u8 bytes[8]; };
struct PlayerAppEquipBlock  { u32 words[14]; };

struct PlayerAppearance {
    PlayerAppHeaderBlock header;
    PlayerAppColorBlock colors;
    PlayerAppEquipBlock equip;
    inline PlayerAppearance &operator=(const PlayerAppearance &o) {
        header = o.header;
        colors = o.colors;
        equip = o.equip;
        return *this;
    }
};
#else
typedef struct PlayerAppearance {
    u8 name_str[16];          /* +0x00..+0x0f: player name string */
    u8 sub_str[16];           /* +0x10..+0x1f: secondary string */
    s8 race_body_flag;        /* +0x20: 0 with body_type==2 -> short body */
    s8 gender;                /* +0x21: 0 = male, non-zero = female */
    s8 body_type;             /* +0x22: 2 = short body candidate */
    s8 _pad23;                /* +0x23 */
    u8 class_id;              /* +0x24: 0..13 playable, 14..18 NPC */
    u8 head_variant;          /* +0x25: 0..3 */
    u8 costume_color;         /* +0x26 */
    u8 hair_color;            /* +0x27 */
    u8 skin_tone;             /* +0x28 */
    u8 _pad29[3];             /* +0x29..+0x2b */
    u32 equip_words[14];      /* +0x2c..+0x63 */
} PlayerAppearance;           /* 100 (0x64) bytes */
#endif

typedef struct PlayerAssetBuffers {
    void *mdl_buf;                          /* +0x00 (+0x1b8) */
    void *tex_buf;                          /* +0x04 (+0x1bc) */
    void *anim_bufs[PLAYER_ANIM_COUNT];     /* +0x08 (+0x1c0) */
    void *pa_table_raw;                     /* +0x60 (+0x218) */
    s32 mdl_size;                           /* +0x64 (+0x21c) */
    s32 tex_size;                           /* +0x68 (+0x220) */
} PlayerAssetBuffers;                       /* 108 (0x6c) bytes */

typedef struct PlayerResHandles {
    u16 mdl_id;                             /* +0x00 (+0x368) */
    u16 tex_id;                             /* +0x02 (+0x36a) */
    u16 anim_ids[PLAYER_ANIM_COUNT];        /* +0x04 (+0x36c) */
} PlayerResHandles;                         /* 48 (0x30) bytes */

typedef struct PlayerPAAnimParam {
    u8 data[0x98];                          /* 152 (0x98) bytes per PA/anim entry */
} PlayerPAAnimParam;

typedef struct PlayerPBAssetBufs {
    void *mdl_buf;                          /* +0x00 */
    void *anim1_buf;                        /* +0x04 */
    void *anim2_buf;                        /* +0x08 */
} PlayerPBAssetBufs;                        /* 12 (0x0c) bytes */

typedef struct PlayerPBHandles {
    u16 mdl_id;                             /* +0x00 */
    u16 anim1_id;                           /* +0x02 */
    u16 anim2_id;                           /* +0x04 */
} PlayerPBHandles;                          /* 6 bytes */

typedef struct PlayerManager {
    void *vtable;                                       /* +0x00 (0x020f8640) */
    u32 _task_base[2];                                  /* +0x04..+0x0b */
    u32 task_name;                                      /* +0x0c */
    u32 _pad10[4];                                      /* +0x10..+0x1f */
    u16 anim_loading_flag;                              /* +0x20 */
    s16 wifi_mode;                                      /* +0x22 */
    s32 frame_counter;                                  /* +0x24 */
    PlayerAppearance appearances[PLAYER_SLOT_COUNT];    /* +0x28..+0x1b7 */
    PlayerAssetBuffers slot_bufs[PLAYER_SLOT_COUNT];    /* +0x1b8..+0x367 */
    PlayerResHandles slot_handles[PLAYER_SLOT_COUNT];   /* +0x368..+0x427 */
    ZARCArchive *player_model_zarc;                     /* +0x428 */
    PlayerZarcSlot *tex_zarc_slots[PLAYER_SLOT_COUNT];  /* +0x42c..+0x43b */
    PlayerNarcSlot *anim_narc_slots[PLAYER_SLOT_COUNT]; /* +0x43c..+0x44b */
    NARCArchive *always_narc;                           /* +0x44c */
    PlayerPAAnimParam *pa_tables[PLAYER_SLOT_COUNT];    /* +0x450..+0x45f */
    PlayerNarcSlot *pb_narc_slots[PLAYER_SLOT_COUNT];   /* +0x460..+0x46f */
    PlayerPBAssetBufs pb_bufs[PLAYER_SLOT_COUNT];       /* +0x470..+0x49f */
    u8 pb_kinds[PLAYER_SLOT_COUNT];                     /* +0x4a0..+0x4a3 */
    void *pb_param_raw;                                 /* +0x4a4 */
    PlayerPBHandles pb_handles[PLAYER_SLOT_COUNT];      /* +0x4a8..+0x4bf */
    void *pb_param_table;                               /* +0x4c0 */
    void *always_anim_bufs[PLAYER_ALWAYS_ANIM_COUNT];   /* +0x4c4..+0x4cb */
    u16 always_anim_handles[PLAYER_ALWAYS_ANIM_COUNT];  /* +0x4cc..+0x4cf */
    u32 slot_anim_loaded[PLAYER_SLOT_COUNT];            /* +0x4d0..+0x4df */
    u32 slot_pb_loaded[PLAYER_SLOT_COUNT];              /* +0x4e0..+0x4ef */
    u32 mdl_heap_flag[PLAYER_SLOT_COUNT];               /* +0x4f0..+0x4ff */
    u32 tex_heap_flag[PLAYER_SLOT_COUNT];               /* +0x500..+0x50f */
} PlayerManager;                                        /* 0x510 (1296) bytes */

/* PlayerManager function bridges */
#define PlayerManager_Destroy           FUN_0203e70c
#define PlayerManager_LoadCharacterModel FUN_0203e72c
#define PlayerManager_GetSlotHandles    FUN_0203e910
#define PlayerManager_RegisterModelTex  FUN_0203e934
#define PlayerManager_UnregisterModelTex FUN_0203e9b0
#define PlayerManager_UnregisterAllSlots FUN_0203e9fc
#define PlayerAppearance_GetModelIndex  FUN_0203ea90
#define PlayerAppearance_GetTexIndex    FUN_0203eac4
#define PlayerAppearance_IsNPC          FUN_0203eb00
#define PlayerManager_IsSlotTickFrame   FUN_0203eb14
#define PlayerManager_GetAlwaysAnimHandle FUN_0203eb3c
#define PlayerManager_LoadAnimSync      FUN_0203eb5c
#define PlayerManager_LoadAnimAsync     FUN_0203ec54
#define PlayerManager_MountAnimAssets   FUN_0203ed5c
#define PlayerManager_FormatWeaponPAPath FUN_0203ee1c
#define PlayerManager_UnloadAnimSlot    FUN_0203eee4
#define PlayerManager_IsAnimSlotMounted FUN_0203ef54
#define PlayerManager_IsAnyAnimLoading  FUN_0203ef7c
#define PlayerManager_GetPAEntry        FUN_0203efb4
#define PlayerManager_LoadPhotonBlast   FUN_0203efe0
#define PlayerManager_UnloadPhotonBlast FUN_0203f078
#define PlayerManager_MountPhotonBlast  FUN_0203f108
#define PlayerManager_IsPBMounted       FUN_0203f1cc
#define PlayerManager_GetPBHandles      FUN_0203f1f0
#define PlayerManager_Ctor              FUN_0203f214

extern void FUN_0203e70c(void);
extern int FUN_0203e72c(PlayerManager *mgr, PlayerAppearance *app, int slot);
extern PlayerResHandles *FUN_0203e910(PlayerManager *mgr, u32 slot);
extern void FUN_0203e934(PlayerManager *mgr, int slot);
extern void FUN_0203e9b0(PlayerManager *mgr, int slot);
extern void FUN_0203e9fc(PlayerManager *mgr);
extern int FUN_0203ea90(PlayerAppearance *app);
extern int FUN_0203eac4(PlayerAppearance *app);
extern int FUN_0203eb00(PlayerAppearance *app);
extern int FUN_0203eb14(u32 slot);
extern u32 FUN_0203eb3c(PlayerManager *mgr, int index);
extern void FUN_0203eb5c(PlayerManager *mgr, PlayerAppearance *app, int slot, int anim_set);
extern void FUN_0203ec54(PlayerManager *mgr, PlayerAppearance *app, int slot, int anim_set);
extern void FUN_0203ed5c(PlayerManager *mgr, int slot);
extern char *FUN_0203ee1c(void *unused, PlayerAppearance *app, int weapon_pa_idx);
extern void FUN_0203eee4(PlayerManager *mgr, int slot);
extern int FUN_0203ef54(PlayerManager *mgr, int slot);
extern int FUN_0203ef7c(PlayerManager *mgr);
extern PlayerPAAnimParam *FUN_0203efb4(PlayerManager *mgr, int slot, int anim_idx);
extern void FUN_0203efe0(PlayerManager *mgr, int slot, int pb_kind);
extern void FUN_0203f078(PlayerManager *mgr, int slot);
extern void FUN_0203f108(PlayerManager *mgr, int slot);
extern int FUN_0203f1cc(PlayerManager *mgr, int slot);
extern PlayerPBHandles *FUN_0203f1f0(PlayerManager *mgr, u32 slot);
extern PlayerManager *FUN_0203f214(PlayerManager *mgr, int enable_wifi_heap);

/* Shared 3D Resource Manager, allocator, and filesystem bridges */
#define ResMgr_RegisterModel      FUN_02037adc
#define ResMgr_UnregisterModel    FUN_02037b88
#define ResMgr_RegisterTex        FUN_02037bd0
#define ResMgr_UnregisterTex      FUN_02037c5c
#define ResMgr_RegisterAnim       FUN_02037c88
#define ResMgr_UnregisterAnim     FUN_02037d20
#define AreaState_GetCurrent      FUN_02032dfc
#define AreaState_IsCity          FUN_0206d36c
#define GameConfig_IsWifiEnabled  FUN_02084c1c
#define Task_Ctor                 FUN_020b9cb0
#define File_WaitAsync            FUN_020ba0bc
#define File_GetSize              FUN_020ba288
#define File_ReadToBuf            FUN_020ba2d4
#define Rel_ResolveTable          FUN_020ba440
#define psz_alloc_array_aligned   FUN_020ba8bc
#define WifiHeap_Alloc            FUN_020bd2d4
#define WifiHeap_Free             FUN_020bd2fc
#define PSZ_Str16_Init            FUN_020c4434
#define rt_sdiv_rem               FUN_0200a5ac

extern u32 FUN_02037adc(void *res_mgr, void *mdl_buf, int flags);
extern void FUN_02037b88(void *res_mgr, u32 handle);
extern u32 FUN_02037bd0(void *res_mgr, void *tex_buf);
extern void FUN_02037c5c(void *res_mgr, u32 handle);
extern u32 FUN_02037c88(void *res_mgr, void *anim_buf, int arg2, int arg3);
extern void FUN_02037d20(void *res_mgr, u32 handle);
extern void FUN_02032dfc(void *out_desc, void *area_mgr);
extern int FUN_0206d36c(void *desc, int arg);
extern int FUN_02084c1c(void *config);
extern void FUN_020b9cb0(void *task, void *parent);
extern int FUN_020ba0bc(void);
extern u32 FUN_020ba288(const char *path);
extern void FUN_020ba2d4(const char *path, void *dst_buf);
extern void *FUN_020ba440(void *raw_buf);
extern void *FUN_020ba8bc(s32 size, int align);
extern void *FUN_020bd2d4(int heap_id, u32 size, int align);
extern void FUN_020bd2fc(int heap_id, void *ptr, int size);
extern void *FUN_020c4434(void *str16);
extern u64 FUN_0200a5ac(s32 num, s32 denom);

#define PSZ_SNPrintf              crt_snprintf

static inline void PSZ_ZeroMem(void *dst, int size) {
    crt_clear((u8 *)dst, size);
}

/* Proven global symbol bridges */
#define g_PlayerManager           DAT_02108d08
#define g_ResMgr                  DAT_02108c84
#define g_AreaManager             DAT_02108c64
#define g_PlayerAnimWorkBufs      DAT_02108d0c
#define g_PlayerPathScratch       DAT_02108d1c
#define g_PlayerManagerVtable     DAT_020f8640
#define g_PlayerManagerTaskName   DAT_020f71fc
#define g_TaskRootParent          DAT_02101dd4
#define g_GameConfig              DAT_0211a51c

#define g_PlayerModelNames        DAT_020f89b4
#define g_PlayerTexSuffix         DAT_020f8aa8
#define g_PlayerTexPathFmt        DAT_020f8ab4
#define g_PlayerAlwaysNarcPath    DAT_020ed3e8
#define g_PlayerModelZarcPath     DAT_020ed400
#define g_PlayerPBParamRelPath    DAT_020ed41c
#define g_PlayerCityAnimPaths     DAT_020f7200
#define g_PlayerShortCityPaths    DAT_020f7208
#define g_PlayerPBMountNames      DAT_020f7210
#define g_PlayerPBNarcPaths       DAT_020f7220
#define g_PlayerAnimMountNames    DAT_020f7230

#define g_PlayerAnimNamesMale      DAT_020f8654
#define g_PlayerAnimNamesShortMale DAT_020f872c
#define g_PlayerAnimNamesFemale    DAT_020f8804
#define g_PlayerAnimNamesShortFem  DAT_020f88dc

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
#define PlayerZarc_Alloc()            ((PlayerZarcSlot *)psz_new(sizeof(ZARCArchive)))
#define PlayerZarc_Open(zarc, path)   ((PlayerZarcSlot *)ZARC_Open((zarc), (path)))
#define PlayerZarc_ReadSync(z, i, b)  ZARC_ReadEntrySync((ZARCArchive *)(z), (i), (u8 *)(b))
#endif

#endif /* PSZ_PLAYER_H */
