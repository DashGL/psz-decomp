// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3a, exact bytes and relocation targets.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0 full_extent=0x3a
// Actual28-byte receiver record: notes/sessions/matching-overlays-2026-11-12-continue-more-records.json
typedef struct {int field[7];} Record_02124a98;
// FUN_overlay_4__02124a98 @ 0x02124a98 (code 0x2e, pool extent 0x3a, thumb)
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Map indexed record state to four-way category or invalid sentinel.
 * Field identities remain provisional.
 */
int FUN_overlay_4__02124a98(int *p,int index) {switch(((Record_02124a98 *)p)[index].field[5]){case 2:return 0;case 3:return 1;case 4:return 2;case 5:return 3;default:return -1;}}
