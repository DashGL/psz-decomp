# Asset-to-Subsystem Rosetta Stone (`psz-us` / `NTR-C24E-USA`)

Maps Phantasy Star Zero's NitroFS asset directories (`weapons/` / `item/`,
`objects/` / `object/`, `effects/`, `player/`, `enemies/` / `enemy/`, plus
`scene/`, `quest/`, `camera/`, `sound/`) directly to their ARM9 loaders,
`.rodata` tables, and Slot-0 / Slot-1 overlay modules.

Every address and table below is proven directly from `assets/extracted/arm9/arm9.bin`
and the extracted ARM9 overlay binaries in `assets/extracted/arm9_overlays/`.
Machine-readable mirror: `config/symbol_map.json`.

---

## 1. Enemies (`enemy/` + Slot-1 Overlays `ov019..ov031`)

All 69 enemy/boss types are indexed by a single unified ID (`0..68`) shared
between three master `.rodata` tables:

| Table | Address | Size | Consumer |
|---|---|---|---|
| `g_EnemyNames[69]` | `0x020f9e6c` | 69 `const char *` | `src-readable/arm9/FUN_0203f9c8.c` (`EnemyResourceCache_Poll`), `src-readable/arm9/FUN_0203fb00.c` (`EnemyResourceCache_LoadSync`) -> `"enemy/%s.narc"` (`include/psz_enemy.h`) |
| `g_EnemyFactoryTable[69]` | `0x020f24c0` | 69 `EnemyFactoryFn` | `src/arm9/FUN_0206e3f0.c` (`Enemy_Create`, readable: `src-readable/arm9/FUN_0206e3f0.c`) |
| `g_StageOverlayTable[9][3]` | `0x020f2740` | 9 stages x 3 slots (`[field, boss1, boss2]`) | `src/arm9/FUN_02074d68.c` (`FieldOverlay_LoadStageOverlay`, readable: `src-readable/arm9/FUN_02074d68.c`) |

### Complete Slot-1 Overlay Map (`0x02197f80`, `ov019..ov031`)

| Overlay | Size | Stage / Boss | Factory Entrypoints (`g_EnemyFactoryTable`) |
|---|---:|---|---|
| `ov019` | 21,984 B | **Boss: Dark Falz** (Stage 07 Boss 2) | `[68] boss_darkfalz` (`0x02197f80`) |
| `ov020` | 32,704 B | **Boss: Reyburn** (Stage 01 Boss) | `[61] boss_dragon` (`0x02197f80`) |
| `ov021` | 39,712 B | **Boss: Octo Diablo** (Stage 02 Ozette Wetland Boss) | `[62] boss_octopus` (`0x021983c8`) |
| `ov022` | 38,848 B | **Boss: Chaos & Mobius (Stage 05) & Humilias (Stage 06)** | `[63] boss_robot`, `[65] boss_robot_cmb` (`0x0219eee4`) |
| `ov023` | 23,680 B | **Stage 08: Eternal Tower & Rare Enemies** | `[52..54] rappy*` (`0x02197f80`), `[55..56] booma/jigobooma` (`0x02198e00`), `[57..60] mother*` (`0x021999fc`) |
| `ov024` | 18,912 B | **Stage 01: Gurhacia Valley** | `[1] lizard` (`0x0219a26c`), `[2] vulture` (`0x0219ab1c`), `[3..4] snake*` (`0x02198dbc`), `[5..6] lion*` (`0x02198f44`), `[7..8] hyena*` (`0x0219b578`) |
| `ov025` | 12,352 B | **Stage 02: Ozette Wetland** | `[9..10] frog*` (`0x0219992c`), `[11..12] seal*` (`0x02198b60`), `[13..14] roc*` (`0x02198324`) |
| `ov026` | 14,624 B | **Stage 03: Rioh Snowfield** | `[15..16] rabbit*` (`0x02198690`), `[17] deer` (`0x0219a434`), `[18] wolf` (`0x02198cd4`), `[19..21] gorilla*` (`0x021996b0`) |
| `ov027` | 18,752 B | **Stage 04: Makara Ruins** | `[22] mole` (`0x02199928`), `[23..24] bat*` (`0x0219aa80`), `[25] tiger` (`0x0219b58c`), `[26..27] armadillo*` (`0x0219962c`) |
| `ov028` | 17,696 B | **Stage 05: Oblivion City Paru** | `[28..29] shrimp*` (`0x0219a11c`), `[30] frog_bomb` (`0x0219808c`), `[31..32] quad*` (`0x0219aab0`), `[33..34] orangutan*` (`0x021990a0`) |
| `ov029` | 16,544 B | **Stage 06: Arca Plant** | `[35..36] shooter*` (`0x021992fc`), `[37..39] board*` (`0x0219884c`), `[40..41] tank*` (`0x0219a4c0`) |
| `ov030` | 12,736 B | **Stage 07: Dark Shrine** | `[42..43] circle*` (`0x02198ed8`), `[44..47] leg*/lower*` (`0x021984d8`), `[48..51] swordman*` (`0x021994c0`) |
| `ov031` | 20,768 B | **Boss: Mother Trinity** (Stage 07 Boss 1) | `[66] boss_mother` (`0x0219b070`), `[67] boss_mother_piece` (`0x0219968c`) |

Boss intro/defeat camera animations (`camera/z_000..z_005*.narc`) are loaded via
`0x020fb94c` in `src/arm9/FUN_020a0878.c`.

---

## 2. Weapons & Items (`item/`)

Individual weapon model IDs live inside `item/weapon_id.narc` and
`item/weapon.zarc` rather than hardcoded ARM9 strings. ARM9 loads the item
database and archives through these entrypoints:

| Asset Path | Loader Function | Readable Twin | Role |
|---|---|---|---|
| `item/weapon_id.narc` | `src/arm9/FUN_02044ef8.c` (`WeaponIdTable_Load`) | — | Unpacks weapon ID table into `DAT_0210c390[][216]` |
| `item/weapon.zarc` | `src/arm9/FUN_0204641c.c` (`WeaponArchive_Acquire`) | `src-readable/arm9/FUN_0204641c.c` | Ref-counted ZARC handle for weapon models/textures |
| `item/mag_param.narc` | `src/arm9/FUN_02045164.c` (`MagParamTable_Load`) | — | Mag evolution/stat parameter table |
| `item/global_{tex,dat}.narc` | `src/arm9/FUN_020451d4.c` (`ItemGlobalTex_Load`) | — | Shared item icons & metadata |
| `item/middle_{tex,dat}.narc` | `src/arm9/FUN_02045378.c` (`ItemMiddleTex_Load`) | — | Mid-tier item textures & data |
| `item/{genprm,proprm,uniprm,wpnprm}.rel` | `src/arm9/FUN_020843e8.c` (`ItemParamDB_LoadAll`) | `src-readable/arm9/FUN_020843e8.c` | General, protector/armor, unit, and weapon stat `.rel` tables (`D_020fa934[4]`) |
| `item/wpneqprm.zarc` | `src/arm9/FUN_020847c8.c` (`ItemParamDB_LoadPlayerWeaponEquip`) | `src-readable/arm9/FUN_020847c8.c` | Weapon equip requirement & PA stat tables (`include/psz_item.h`) |
| `item/drop/%s%d.narc` | `src/arm9/FUN_0209b030.c` (`DropTable_Load`) | — | Stage/difficulty enemy & box drop tables |
| `"item/text/expl.bin"`, `xfexpl.zarc` | `src/arm9/FUN_0209dfb8.c`, `src/arm9/FUN_0209dfdc.c` | — | Item description text packs |

---

## 3. Objects & Stages (`object/`, `scene/`, `set/`)

| Asset Path | Loader Function | Readable Twin | Role |
|---|---|---|---|
| `object/%s_{mdl.narc,tex.narc,prm.rel}` | `src/arm9/FUN_02050148.c` (`StageObjectBank_Load`) | `src-readable/arm9/FUN_02050148.c` | Loads 3D model, texture, and `.rel` parameter data for a stage object bank (`include/psz_object.h`) |
| `%02d/o%02d%c` | `src/arm9/FUN_02050624.c` (`StageObject_LoadForRoom`) | — | Formats stage/object IDs for the active room and dispatches `StageObjectBank_Load` |
| `StageObjectBank` / `StageObjectManager` | `src/arm9/FUN_02050148.c`..`src/arm9/FUN_02050948.c` | `src-readable/arm9/FUN_02050148.c`..`src-readable/arm9/FUN_02050948.c` | Complete 3-bank object asset registry, binary search, handle resolution (17 readable files) |
| `object/text/message_pack_{00..08,99_rare}.bin` | `src/arm9/FUN_020a0ae4.c` (`StageMessagePack_Load`) | — | Per-stage interactive object message packs (`0x020fbb64..0x020fbb88`) |
| `/lnd/{pr,cl,md,ta}`, `scene/fp/%s.*`, `scene/%c%c/%c`, `set/%c%c/%c/%c%c%c` | `src/arm9/FUN_02041574.c`..`src/arm9/FUN_02041b80.c` | — | Room land geometry, collision, texture anims, floor props, and entity placement sets |

---

## 4. Effects (`item/effect_*`, `item/paeff*`, `scene/fse/`, `PhotonBlastTask`)

| Asset Path / Symbol | Loader Function | Role |
|---|---|---|
| `item/effect_id.narc` | `src/arm9/FUN_020450cc.c` (`EffectIdTable_Load`) | Master visual-effect ID lookup table |
| `item/effect_{tex,dat}.narc` | `src/arm9/FUN_0204551c.c` (`EffectTexDat_Load`) | Shared combat/item particle textures and effect definitions |
| `item/paeff%02d.rel` | `src/arm9/FUN_020808c4.c` (`PAEffect_Load`) | Per-Photon-Art visual & hitbox effect `.rel` modules |
| `scene/fse/%s.{narc,nsbtx}` | `src/arm9/FUN_0209f2e0.c` (`FieldEffect_Load`) | Field/stage special effects (weather, portals, environmental VFX) |
| `PhotonBlastTask` (`0x020fc620`) | `src/arm9/FUN_020b0f70.c`, `src/arm9/FUN_020b100c.c`, `src/arm9/FUN_020b18c0.c` | Photon Blast summon & chain execution task |

---

## 5. Player & APCs (`player/`, `apc/`)

| Asset Path / Symbol | Loader Function | Role |
|---|---|---|
| `PlayerCore` (`0x020f7024`) | `src/arm9/FUN_02037e48.c`..`src/arm9/FUN_02038b28.c` | Core player actor state & action controller |
| `PlayerManager` (`0x020f71fc`) | `src/arm9/FUN_0203c8f0.c`..`src/arm9/FUN_0203f214.c` | Party player pool, city anim packs (`99_city_{m,w,sm,sw}.narc`), global player models |
| `player/99_always.narc`, `player_model.zarc`, `pb_param_data.rel` | `src/arm9/FUN_0203f214.c` (`PlayerManager_InitAssets`) | Always-resident player models, base anims, and Photon Blast params |
| `player/%s%s` (textures) | `src/arm9/FUN_0203e72c.c` (`Player_LoadTextureArchive`) | Character race/class/palette texture archives |
| `player/%s%s` (142 PA anim packs, `0x020f8654`) | `src/arm9/FUN_0203ee1c.c` (`Player_LoadWeaponPAAnim`) | Weapon-category (`00_common`, `01_saver`, `02_sword`, `03_dagger`, `04_spear`, `05_claw`, `06_shield`, `08_handgun`, `10_shotgun`, `11_machinegun`, `12_grenade`, `15_wand`, `16_slicer`) x body (`m`/`w`/`sm`/`sw`) x `pa00..pa02` |
| `player/pb_{centaur,bird,dragon,rabbit}.narc` | `src/arm9/FUN_0203efe0.c` (`Player_LoadPhotonBlast`) | Summoned Photon Blast creature models (`0x020f7220`) |
| `player/player_lv_param.zarc` | `src/arm9/FUN_0206e7a0.c` | Level-up stat growth curves (`0x020f9854`) |
| `apc/apc_param.zarc`, `apc/chat_words/{sarisa,kai,ogi,reve}%02d.dat` | `src/arm9/FUN_020994ac.c`..`src/arm9/FUN_0209f014.c` | AI Partner Character stats & battle chatter |

---

## 6. Core Infrastructure (`OverlaySlot`, `GameStateManager`, `NARCArchive`, `ItemParamDB`, `EnemyResourceCache`)

- **Slot-0 Game State Machine (`0x020ebbbc`, 19 states -> `ov000..ov018`):**
  Complete readable subsystem (`10/10` functions) in `src-readable/arm9/FUN_0200d124.c`..`src-readable/arm9/FUN_0200d3a4.c` (`include/psz_core.h`).
- **Async Overlay Slot Controller (`OverlaySlot`, `0x80` bytes):**
  `src-readable/arm9/FUN_020c3490.c` (`OverlaySlot_Init`),
  `src-readable/arm9/FUN_020c34c8.c` (`OverlaySlot_Poll`),
  `src-readable/arm9/FUN_020c34d8.c` (`OverlaySlot_LoadAsync`),
  `src-readable/arm9/FUN_020c3538.c` (`OverlaySlot_FinishLoad`).
- **Archive Loaders (`NARCArchive` = `0x84` bytes, `ZARCArchive` = `0x58` bytes):**
  Readable `NARCArchive` (`src-readable/arm9/FUN_020bc3a4.c`..`src-readable/arm9/FUN_020bc578.c`) & `ZARCArchive` (`src-readable/arm9/FUN_020c3d34.c`..`src-readable/arm9/FUN_020c3e54.c`) in `include/psz_core.h`.
- **Item / Weapon / Armor / Unit Parameter DB (`ItemParamDB`, `0x48` bytes):**
  Complete readable subsystem (`23/23` functions) in `src-readable/arm9/FUN_02084394.c`..`src-readable/arm9/FUN_02084900.c` (`include/psz_item.h`).
- **Enemy 3D Resource Cache (`EnemyResourceCache`, 3 concurrent "enemy/<name>.narc" slots):**
  Readable subsystem (`20` functions) in `src-readable/arm9/FUN_0203f894.c`..`src-readable/arm9/FUN_0204002c.c` (`include/psz_enemy.h`).
- **Player Resource & Animation Manager (`PlayerManager`, `0x510` bytes):**
  Complete readable subsystem (`25/25` functions) in `src-readable/arm9/FUN_0203e70c.c`..`src-readable/arm9/FUN_0203f214.c` (`include/psz_player.h`), covering "player/player_model.zarc", "player/<id>_tex.zarc", "player/99_always.narc", "player/pb_*.narc", and 4-slot weapon/PA & city anim NARCs.
- **Scene / Land / Skybox / Spawn-Set Loader (`SceneLandManager`, `0x44` bytes):**
  Complete readable subsystem (`24/24` functions) in `src-readable/arm9/FUN_020414c0.c`..`src-readable/arm9/FUN_02041bcc.c` (`include/psz_scene.h`), covering "scene/%c%c/%c/%s.{narc,nsbtx}", "/lnd/{md,ta,pr,cl}", "scene/fp/%s.{narc,nsbtx}", and "set/%c%c/%c/%c%c%c/%s_%s.rel".
- **Stage Object Asset Banks (`StageObjectBank` / `StageObjectManager`, 3 banks):**
  Complete readable subsystem (`19/19` functions) in `src-readable/arm9/FUN_0205013c.c`..`src-readable/arm9/FUN_02050948.c` (`include/psz_object.h`).
- **Weapon-ID / Effect Bank / Mag Param DB / Dynamic Item & Weapon Pools ("item/weapon.zarc"):**
  Complete readable translation unit (`50/50` functions) in `src-readable/arm9/FUN_02044ef8.c`..`src-readable/arm9/FUN_020464c8.c` (`include/psz_effect.h`, `include/psz_core.h`), covering "item/weapon_id.narc", "item/effect_id.narc", "item/mag_param.narc", "item/{global,middle,effect}_{tex,dat}.narc", "item/weapon.zarc" async pool loading, and weapon muzzle/slicer/mag 3D offsets.
- **NitroSDK 4.2 Fixed-Point & Matrix Math (`FX_*`, `VEC_*`, `MTX_*`):**
  Readable subsystem (`30` functions) in `src-readable/arm9/FUN_0205aad0.c`..`src-readable/arm9/FUN_0205c8cc.c` (`include/nitro_sdk.h`, `include/psz_types.h`).
