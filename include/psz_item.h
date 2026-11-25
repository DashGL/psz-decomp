/* Clean-room structs and symbol bridges for the Phantasy Star Zero Item,
 * Weapon, Armor (Protector), Unit, & General Parameter Database
 * (item/{genprm,proprm,uniprm,wpnprm}.rel + item/wpneqprm.zarc).
 */
#ifndef PSZ_ITEM_H
#define PSZ_ITEM_H

#include <psz_core.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Item category IDs tested by Item_HasCategory (FUN_0203a820) */
#define ITEM_CAT_WEAPON   0
#define ITEM_CAT_ARMOR    1
#define ITEM_CAT_UNIT     2
#define ITEM_CAT_GENERAL  3
#define ITEM_CAT_MESETA   4

#define ITEM_DEFAULT_STACK_LIMIT 99
#define WEAPON_TYPE_COUNT        17
#define ITEM_RARITY_TIER_COUNT   4

typedef struct ItemDesc {
    u8 raw0;                  /* +0x00 */
    u8 category;              /* +0x01: weapon type (0..16), armor/general subcat */
    u8 sub_id;                /* +0x02: index within category/tier */
    u8 tier;                  /* +0x03: rarity tier (0..3) */
} ItemDesc;

typedef struct GeneralItemRecord {
    u16 flags : 11;
    u16 stack_limit : 5;      /* 0 means ITEM_DEFAULT_STACK_LIMIT (99) */
} GeneralItemRecord;

typedef struct GeneralParamTable {
    u8 *entries;              /* +0x00: 4-byte GeneralItemRecord entries */
    u8 offsets[8];            /* +0x04: 7 sub-category start/end offsets */
} GeneralParamTable;

typedef struct ArmorParamTable {
    u8 *entries;              /* +0x00: 16-byte armor records */
    u8 offsets[20];           /* +0x04: 4x4 (subcat x tier) start/end offsets */
} ArmorParamTable;

typedef struct UnitParamTable {
    u8 *entries;              /* +0x00: 9-byte slot-unit records */
    s32 count;                /* +0x04 */
} UnitParamTable;

typedef struct WeaponParamTable {
    u8 *entries;              /* +0x00: 12-byte weapon records */
    s16 offsets[68];          /* +0x04: 17 weapon types x 4 tiers start/end offsets */
    u8 _pad8c[4];
    u8 *nibble_flags;         /* +0x90: packed 4-bit per-weapon attributes */
} WeaponParamTable;

typedef struct WeaponEquipParamHeader {
    u8 *entries;              /* +0x00: 0x12-byte packed weapon equip records */
    u16 *pa_table;            /* +0x04: 5-bit indexed PA lookup table */
    u16 _unk08;               /* +0x08 */
    u8 tier_offsets[5];       /* +0x0a: 4 tier start/end offsets */
} WeaponEquipParamHeader;

typedef struct WeaponEquipStats {
    s16 power_base;           /* +0x00 */
    s16 power_max;            /* +0x02 */
    u16 equip_flags;          /* +0x04 */
    u16 pa_bits;              /* +0x06: 3x 5-bit indices into pa_table */
    u8 attr_a;                /* +0x08 */
    u8 attr_b;                /* +0x09 */
    u8 attr_c;                /* +0x0a */
    s8 mod_a;                 /* +0x0b */
    s8 mod_b;                 /* +0x0c */
    u8 attr_d;                /* +0x0d */
    u8 attr_e;                /* +0x0e */
    u8 attr_f;                /* +0x0f */
    u16 extra_param;          /* +0x10 */
    u16 pa_values[3];         /* +0x12: unpacked PA values */
} WeaponEquipStats;

typedef struct ItemParamDB {
    RelResourceSlot slots[8]; /* +0x00..+0x3f: [0]=genprm [1]=proprm [2]=uniprm [3]=wpnprm [4..7]=wpneqprm[0..3] */
    void *wpneqprm_zarc;      /* +0x40: opened item/wpneqprm.zarc */
    s8 flag44;                /* +0x44: 0x1f */
    u8 flag45;                /* +0x45: 0x1f (halved on DS Protect check) */
    s8 flag46;                /* +0x46: 0x1f */
    s8 flag47;                /* +0x47: 0x1f */
} ItemParamDB;                /* 0x48 bytes */

typedef struct ItemSystemState {
    u8 flag00;                /* +0x00 */
    u8 flag01;                /* +0x01 */
    u8 flag02;                /* +0x02 */
    u8 _pad03;
    u32 state04;              /* +0x04 */
    u32 state08;              /* +0x08 */
    ItemParamDB *param_db;    /* +0x0c */
} ItemSystemState;

/* RelResource & ItemParamDB symbols */
#define Item_HasCategory                   FUN_0203a820
#define ItemParamDB_Ctor                   FUN_02084394
#define ItemParamDB_ReleasePlayerEquip     FUN_0208447c
#define ItemSystem_Shutdown                FUN_020844b0
#define ItemParamDB_GetWeaponNibble        FUN_020844e4
#define WeaponParamTable_FindIndex         FUN_02084534
#define ItemParamDB_GetWeaponRecord        FUN_02084568
#define ItemParamDB_GetArmorRecord         FUN_020845a8
#define ItemParamDB_GetUnitRecord          FUN_020845fc
#define ItemParamDB_GetGeneralRecord       FUN_02084638
#define ItemParamDB_GetPlayerWeaponEquip   FUN_02084684
#define RelResource_GetTable               FUN_02084734
#define Item_GetElementTableEntry          FUN_02084758 /* max tech level cap table DAT_020f3010[11][7] */
#define Item_GetSetBonusEntry              FUN_02084778 /* 14-byte tech param table DAT_020f33b0[11*15] */
#define Weapon_GetPhotonArtEntry           FUN_02084798
#define ItemParamDB_LoadPlayerWeaponEquip  FUN_020847c8
#define RelResource_LoadFromZarc           FUN_02084830
#define ItemParamDB_Dtor                   FUN_02084890
#define RelResource_Release                FUN_020848b4
#define Item_GetGroupColumn                FUN_020848d0
#define Item_ClampFieldBySelector          FUN_020848e0
#define Item_IsStackable                   FUN_02084900

extern int FUN_0203a820(const ItemDesc *item, int category);
extern ItemParamDB *FUN_02084394(ItemParamDB *db);
extern void FUN_0208447c(void);
extern void FUN_020844b0(void);
extern int FUN_020844e4(const ItemDesc *desc);
extern int FUN_02084534(const WeaponParamTable *table, const ItemDesc *desc);
extern void *FUN_02084568(const ItemDesc *desc);
extern void *FUN_020845a8(const ItemDesc *desc);
extern void *FUN_020845fc(const ItemDesc *desc);
extern GeneralItemRecord *FUN_02084638(const ItemDesc *desc);
extern int FUN_02084684(int player_slot, const ItemDesc *desc, WeaponEquipStats *out);
extern void *FUN_02084734(RelResourceSlot *slot);
extern u32 FUN_02084758(u32 row, u32 group, u32 column);
extern void *FUN_02084778(int group, int number);
extern void *FUN_02084798(int category, int variant);
extern void FUN_020847c8(int player_slot, const ItemDesc *desc);
extern void FUN_02084830(RelResourceSlot *slot, void *zarc, u32 entry_id);
extern void FUN_02084890(ItemParamDB *db);
extern void FUN_020848b4(RelResourceSlot *slot);
extern int FUN_020848d0(int group, int column);
extern u32 FUN_020848e0(int selector, u32 value);
extern int FUN_02084900(const ItemDesc *item);

/* Common engine archive/file helpers called by RelResource */
#define File_LoadAligned      FUN_020ba374
#define Rel_ResolveTable      FUN_020ba440
#define Rel_UnregisterSlot    FUN_020ba494
#define psz_new_aligned       FUN_020ba8bc
#define ZARC_ExtractEntry     FUN_020c3dcc

extern void *FUN_020ba374(const char *path, u32 *out_size, int align);
extern void *FUN_020ba440(void *raw_buf);
extern void FUN_020ba494(void *slot);
extern void *FUN_020ba8bc(u32 size, u32 align);

#ifdef __cplusplus
}
#endif

#endif /* PSZ_ITEM_H */
