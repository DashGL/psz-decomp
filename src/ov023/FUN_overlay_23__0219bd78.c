// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x10, exact bytes and relocation targets; argument/return contract corrected.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x10, exact bytes and relocation targets.
// FUN_overlay_23__0219bd78 @ 0x0219bd78, verified extent 0x10.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_02084d01[];
extern unsigned char DAT_0211a51c[];
// FUN_overlay_23__0219bd78 @ 0x0219bd78 (code 0x6, full extent 0x10, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete typed tail veneer.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch524.md.
 */
typedef int (*Call)(void *);
int FUN_overlay_23__0219bd78(void *unused_receiver) { return ((Call)((unsigned int)DAT_02084d01 + 0u))((void *)((unsigned int)DAT_0211a51c + 0u)); }

// Caller/callee ABI evidence: Caller219c180 explicitly MOV r0,r5 at219c31e beforecall; veneer replaces it with manager211a51c. Preserve prepared unused caller position.
