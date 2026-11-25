// FUN_overlay_15__02133990 @ 0x02133990 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_overlay_15__02133990 @ 0x02133990 (code 0x1a, pool extent 0x20, thumb)
// check: vers=2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Signal resident subsystem when global state and pair of halfword masks agree.
 * Field identities remain provisional.
 */
extern void FUN_020641b0(void);
void FUN_overlay_15__02133990(void) {unsigned short *p=*(unsigned short **)0x0213e8dc;if(p[0]==4 && p[1]==p[6])FUN_020641b0();}
