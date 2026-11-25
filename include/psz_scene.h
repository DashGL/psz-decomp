/* Clean-room structs and symbol bridges for the Phantasy Star Zero Scene / Land /
 * Skybox / Spawn-Set Loader (scene/%c%c/%c/%s.{narc,nsbtx}, scene/fp/%s.{narc,nsbtx},
 * set/%c%c/%c/%c%c%c/%s_%s.rel, and /lnd/{pr,cl,md,ta}).
 */
#ifndef PSZ_SCENE_H
#define PSZ_SCENE_H

#include <psz_core.h>

#ifdef __cplusplus
struct SceneVirtualArchive {
    virtual ~SceneVirtualArchive();
};
typedef SceneVirtualArchive SceneArchiveSlot;
#else
typedef NARCArchive SceneArchiveSlot;
#endif

#ifdef __cplusplus
extern "C" {
#endif

#define SCENE_HANDLE_NONE        0xffff
#define SCENE_ROOM_FLAG_NONE     0x7fff
#define SCENE_SKY_ANIM_SLOTS     5
#define SCENE_PATH_BUF_SIZE      64
#define SCENE_PREFIX_BUF_SIZE    16
#define SCENE_NAME_BUF_SIZE      12
#define SCENE_SUFFIX_BUF_SIZE    4
#define SCENE_FILE_ALIGN         16
#define SCENE_FLOOR_MIN          1
#define SCENE_FLOOR_MAX          9

typedef struct AreaKey {
    s32 fields[5];            /* 20-byte stage/block/room descriptor */
} AreaKey;

typedef struct AreaManagerState {
    u8 _pad00[0x16];
    s8 curr_block_idx;        /* +0x16 */
} AreaManagerState;

typedef struct QuestModeState {
    u8 _pad00[0x0c];
    s8 mode;                  /* +0x0c: 0 = demo, 1 = story, else field quest */
} QuestModeState;

typedef struct QuestProgressRecord {
    u8 _pad00[0x0b];
    s8 floor_number;          /* +0x0b: field floor 1..9 */
} QuestProgressRecord;

typedef struct SceneLandParam {
    u32 _unk00;               /* +0x00 */
    void *sub_param;          /* +0x04 */
    u32 field_effect_id;      /* +0x08 */
    const char *fp_name;      /* +0x0c: skybox/backdrop asset stem */
    u16 room_flags;           /* +0x10 */
} SceneLandParam;

typedef struct SceneSkyHandles {
    u16 mdl_id;                             /* +0x00: l.md / s.md */
    u16 tex_id;                             /* +0x02: shared fp .nsbtx */
    u16 anim_ids[SCENE_SKY_ANIM_SLOTS];     /* +0x04..+0x0d: [0]=ca, [2]=ma */
} SceneSkyHandles;                          /* 14 (0x0e) bytes */

typedef struct SceneLandManager {
    SceneArchiveSlot *land_narc;  /* +0x00: "scn" room NARC */
    SceneLandParam *land_param;   /* +0x04: resolved /lnd/pr */
    void *set_raw_buf;            /* +0x08: raw set/.../*.rel buffer */
    void *set_table;              /* +0x0c: resolved spawn-set table */
    u16 land_mdl_id;              /* +0x10: /lnd/md model handle */
    u16 land_ta_id;               /* +0x12: /lnd/ta tex-anim handle */
    u16 land_tex_id;              /* +0x14: room .nsbtx handle */
    u16 _pad16;                   /* +0x16 */
    void *land_tex_buf;           /* +0x18: raw room .nsbtx buffer */
    void *land_collision;         /* +0x1c: resolved /lnd/cl */
    SceneArchiveSlot *fp_narc;    /* +0x20: "fpm" skybox/backdrop NARC */
    void *fp_tex_buf;             /* +0x24: raw scene/fp/%s.nsbtx buffer */
    SceneSkyHandles fp_large;     /* +0x28..+0x35: large backdrop (l.*) */
    SceneSkyHandles fp_small;     /* +0x36..+0x43: small backdrop (s.*) */
} SceneLandManager;               /* 68 (0x44) bytes */

/* SceneLandManager function bridges */
#define SceneLandManager_Create          FUN_020414c0
#define SceneLandManager_Destroy         FUN_020414e4
#define SceneSkyHandles_Reset            FUN_02041510
#define SceneLandManager_Ctor            FUN_0204152c
#define SceneLandManager_StubA           FUN_0204156c
#define SceneLandManager_StubB           FUN_02041570
#define SceneLandManager_LoadRoom        FUN_02041574
#define SceneLandManager_UnloadRoom      FUN_020415f8
#define SceneLandManager_LoadLandFiles   FUN_020416dc
#define SceneLandManager_RegisterLand    FUN_02041740
#define SceneLandManager_LoadBackdrop    FUN_02041794
#define SceneLandManager_UnregisterSky   FUN_020418c8
#define SceneLandManager_LoadSpawnSet    FUN_02041918
#define AreaKey_Copy                     FUN_02041a08
#define SceneLandManager_SelectSetSuffix FUN_02041a20
#define SceneLandManager_FormatFloorTag  FUN_02041a50
#define SceneLandManager_LoadSetRel      FUN_02041adc
#define SceneLand_LoadTexture            FUN_02041afc
#define SceneLandManager_GetSubParam     FUN_02041b2c
#define SceneLandManager_GetSkyHandles   FUN_02041b4c
#define SceneLand_FormatSceneDir         FUN_02041b58
#define SceneLand_FormatSetDir           FUN_02041b80
#define SceneLandManager_GetRoomFlags    FUN_02041bb8
#define SceneLand_NormalizeAreaKey       FUN_02041bcc

extern void FUN_020414c0(void);
extern void FUN_020414e4(void);
extern SceneSkyHandles *FUN_02041510(SceneSkyHandles *handles);
extern SceneLandManager *FUN_0204152c(SceneLandManager *mgr);
extern void FUN_0204156c(void);
extern void FUN_02041570(void);
extern void FUN_02041574(SceneLandManager *mgr, const AreaKey *area_key);
extern void FUN_020415f8(SceneLandManager *mgr);
extern void FUN_020416dc(SceneLandManager *mgr, const AreaKey *area_key);
extern void FUN_02041740(SceneLandManager *mgr);
extern void FUN_02041794(SceneLandManager *mgr, const SceneLandParam *param);
extern void FUN_020418c8(SceneLandManager *mgr, SceneSkyHandles *sky);
extern void FUN_02041918(SceneLandManager *mgr, const AreaKey *area_key);
extern void FUN_02041a08(AreaKey *dst, const AreaKey *src);
extern void FUN_02041a20(SceneLandManager *mgr, char *out_suffix);
extern void FUN_02041a50(char *out_suffix);
extern void FUN_02041adc(SceneLandManager *mgr, const char *rel_path);
extern void FUN_02041afc(const char *tex_path, void **out_buf, u16 *out_handle);
extern void *FUN_02041b2c(SceneLandManager *mgr);
extern SceneSkyHandles *FUN_02041b4c(SceneLandManager *mgr, int selector);
extern int FUN_02041b58(char *out_dir, const s8 *room_name);
extern int FUN_02041b80(char *out_dir, const s8 *room_name);
extern u32 FUN_02041bb8(SceneLandManager *mgr);
extern void FUN_02041bcc(AreaKey *out_key, const AreaKey *in_key);

/* Shared ResMgr, Area, Quest, and FieldEffect bridges */
#define QuestManager_GetInstance  FUN_02031a74
#define QuestManager_GetProgress  FUN_02031c74
#define AreaState_IsRareRoom      FUN_02032e78
#define ResMgr_BindModelTex       FUN_02033f30
#define ResMgr_UnbindModelTex     FUN_02033fcc
#define ResMgr_RegisterModel      FUN_02037adc
#define ResMgr_UnregisterModel    FUN_02037b88
#define ResMgr_RegisterTex        FUN_02037bd0
#define ResMgr_UnregisterTex      FUN_02037c5c
#define ResMgr_RegisterAnim       FUN_02037c88
#define ResMgr_UnregisterAnim     FUN_02037d20
#define AreaKey_Init              FUN_0206d1ec
#define AreaKey_FormatRoomName    FUN_0206d2e4
#define AreaKey_GetCityVariant    FUN_0206d36c
#define AreaKey_GetDemoCutscene   FUN_0206d3dc
#define GameConfig_IsMultiplayer  FUN_02084bf8
#define FieldEffectMgr_GetInstance FUN_0209f170
#define FieldEffectMgr_Request    FUN_0209f2d0
#define File_LoadAligned          FUN_020ba374
#define Rel_ResolveTable          FUN_020ba440

extern void *FUN_02031a74(void);
extern QuestProgressRecord *FUN_02031c74(void *quest_mgr);
extern int FUN_02032e78(AreaManagerState *area_mgr, int block_idx);
extern void FUN_02033f30(void *res_mgr, u32 mdl_id, u32 tex_id);
extern void FUN_02033fcc(void *res_mgr, u32 mdl_id);
extern u32 FUN_02037adc(void *res_mgr, void *mdl_buf, int flags);
extern int FUN_02037b88(void *res_mgr, u32 handle);
extern u32 FUN_02037bd0(void *res_mgr, void *tex_buf);
extern int FUN_02037c5c(void *res_mgr, u32 handle);
extern u32 FUN_02037c88(void *res_mgr, void *anim_buf, int kind, int flags);
extern int FUN_02037d20(void *res_mgr, u32 handle);
extern AreaKey *FUN_0206d1ec(AreaKey *key, u32 a, u32 b, u32 c, u32 d, u32 e);
extern int FUN_0206d2e4(const AreaKey *key, char *out_name);
extern int FUN_0206d36c(const AreaKey *key, u32 *out_variant);
extern int FUN_0206d3dc(const AreaKey *key, s32 *out_mode);
extern int FUN_02084bf8(void *config);
extern void *FUN_0209f170(void);
extern void FUN_0209f2d0(void *fse_mgr, u32 effect_id);
extern void *FUN_020ba374(const char *path, u32 *out_size, int align);
extern void *FUN_020ba440(void *raw_buf);

/* Proven global symbol bridges */
#define g_SceneLandManager        DAT_02108d64
#define g_ResMgr                  DAT_02108c84
#define g_AreaManager             DAT_02108c64
#define g_QuestModeState          DAT_0211a3c4
#define g_GameConfig              DAT_0211a51c

#define g_SceneMountNames         DAT_020f8d04
#define g_LndParamEntry           DAT_020f8d14
#define g_LndCollisionEntry       DAT_020f8d1c
#define g_SceneNarcFmt            DAT_020f8d24
#define g_SceneTexFmt             DAT_020f8d30
#define g_LndModelEntry           DAT_020f8d3c
#define g_LndTexAnimEntry         DAT_020f8d44
#define g_FpNarcFmt               DAT_020f8d4c
#define g_FpTexFmt                DAT_020f8d60
#define g_FpLargeModelEntry       DAT_020f8d74
#define g_FpLargeCamAnimEntry     DAT_020f8d7c
#define g_FpLargeMatAnimEntry     DAT_020f8d84
#define g_FpSmallModelEntry       DAT_020f8d8c
#define g_FpSmallCamAnimEntry     DAT_020f8d94
#define g_FpSmallMatAnimEntry     DAT_020f8d9c
#define g_SetSuffixCityMulti      DAT_020f8da4
#define g_SetSuffixCitySolo       DAT_020f8da8
#define g_SetSuffixDemo           DAT_020f8dac
#define g_SetRelFmt               DAT_020f8db0
#define g_SetSuffixRare           DAT_020f8dc0
#define g_SetSuffixStory          DAT_020f8dc4
#define g_SetSuffixEventDemo      DAT_020f8dc8
#define g_SetSuffixFloorLow       DAT_020f8dcc
#define g_SetSuffixFloorHigh      DAT_020f8dd0
#define g_SetSuffixFloorFmt       DAT_020f8dd4
#define g_SetSuffixFloorDefault   DAT_020f8dd8
#define g_SceneDirFmt             DAT_020f8ddc
#define g_SetDirFmt               DAT_020f8dec

#ifdef __cplusplus
}
#endif

#endif /* PSZ_SCENE_H */
