// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x10, exact bytes and relocation targets; argument/return contract corrected.
// FUN_overlay_4__0212b8f4 @ 0x0212b8f4 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch09.json; original draft retained for referenced provenance.
// FUN_overlay_4__0212b8f4 @ 0x0212b8f4 (code 0x10, pool extent 0x10, thumb)
// check: vers=2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Initialize sentinel and three cleared words.
 * Field identities remain provisional.
 */
unsigned int *FUN_overlay_4__0212b8f4(unsigned int *p) {p[0]=~0U;p[1]=0;p[2]=0;p[3]=0;return p;}

// Caller/callee ABI evidence: Caller212b904 immediately stores post-call r0 tosingleton2197f40 at212b920, without restoring saved allocation pointer. Initializer preserves receiverr0. This concrete consumed return supports pointer contract; prior batch57 inferred void from banked source definition rather than ROM caller behavior.
