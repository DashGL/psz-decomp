// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x7c, exact bytes and relocation targets.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0 full_extent=0x7c
// Actual24-byte ROM table record: notes/sessions/matching-overlays-2026-11-12-continue-strides.json
typedef struct {int field[6];} Record_02136930;
// FUN_overlay_12__02136930 @ 0x02136930 (code 0x76, pool extent 0x7c, thumb)
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Toggle selection with feedback only when enabled and cooldown expired.
 * Field identities remain provisional.
 */
extern Record_02136930 DAT_0213bf6c[];
extern int FUN_020bbf6c(int);
extern void FUN_020c193c(int,int,int,int,int);
void FUN_overlay_12__02136930(int *p) {if(p[9]&&p[24]<=0&&DAT_0213bf6c[p[20]].field[0]){if(FUN_020bbf6c(128)){if(!p[16]){FUN_020c193c(0,2,0,0,-1);p[16]++;}}else if(FUN_020bbf6c(64)){if(p[16]){FUN_020c193c(0,2,0,0,-1);p[16]=0;}}}}
