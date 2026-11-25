// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x2e, exact bytes and relocation targets.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0 full_extent=0x2e
// Actual24-byte receiver record: notes/sessions/matching-overlays-2026-11-12-continue-stride-twins.json
typedef struct {unsigned int field[6];} Record_0211edc0;
// FUN_overlay_14__0211edc0 @ 0x0211edc0 (code 0x2e, pool extent 0x2e, thumb)
// flags: -O4,s
/* USA overlay 14 reconstruction from extracted module bytes, 2026-11-04.
 * Read field from selected record or alternate mode.
 * Field identities remain provisional.
 */
unsigned int FUN_overlay_14__0211edc0(unsigned int *p) {int mode=(int)p[37];if(mode==0){int index=(int)p[38];if(index>=0 && index<2)return ((Record_0211edc0 *)p)[index].field[3];}else if(mode==1)return p[15];return 0;}
