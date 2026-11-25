// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x20, exact bytes and relocation targets; argument/return contract corrected.
// FUN_overlay_14__02121070 @ 0x02121070 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_overlay_14__02121070 @ 0x02121070 (code 0x1c, pool extent 0x20, thumb)
// check: vers=2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 14 reconstruction from extracted module bytes, 2026-11-04.
 * Construct common receiver with fixed type then update resident singleton state.
 * Field identities remain provisional.
 */
extern void *FUN_020af01c(void *,unsigned int,unsigned int);
extern unsigned int *FUN_0209081c(void);
void *FUN_overlay_14__02121070(unsigned int *p,int unused_option) {FUN_020af01c(p,5,1);p[0]=0x0212212c;FUN_0209081c()[5]=8;return p;}

// Caller/callee ABI evidence: Factory2121208 preserves incoming option then explicitly moves it into r1 immediately before constructor; constructor ignores option.
