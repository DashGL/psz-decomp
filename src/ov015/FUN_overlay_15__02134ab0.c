// FUN_overlay_15__02134ab0 @ 0x02134ab0 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_overlay_15__02134ab0 @ 0x02134ab0 (code 0x20, pool extent 0x24, thumb)
// check: vers=2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Advance global state five to six and run input-free cleanup.
 * Field identities remain provisional.
 */
extern void FUN_overlay_15__02133828(void);
int FUN_overlay_15__02134ab0(void) {unsigned char *p=*(unsigned char **)0x0213e8e8;if(p[2704]==5){p[2704]=6;FUN_overlay_15__02133828();return 1;}return 0;}
