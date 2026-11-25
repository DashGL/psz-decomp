// FUN_overlay_12__02131ff8 @ 0x02131ff8 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch23.json; original draft retained for referenced provenance.
// FUN_overlay_12__02131ff8 @ 0x02131ff8 (code 0x1a, pool extent 0x1a, thumb)
// check: vers=2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Store mode and mark request pending when resident mode request succeeds.
 * Field identities remain provisional.
 */
extern int FUN_020c2d94(int,int,int);
void FUN_overlay_12__02131ff8(unsigned int *p,int mode) {p[12]=mode;if(FUN_020c2d94(mode,1,0))p[11]=2;}
