// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x10, exact bytes and relocation targets.
// FUN_overlay_22__021a0428 @ 0x021a0428, verified extent 0x10.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_02084d01[];
extern unsigned char DAT_0211a51c[];
// FUN_overlay_22__021a0428 @ 0x021a0428 (code 0x6, full extent 0x10, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete typed tail veneer.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch524.md.
 */
typedef int (*Call)(void *);
int FUN_overlay_22__021a0428(void) { return ((Call)((unsigned int)DAT_02084d01 + 0u))((void *)((unsigned int)DAT_0211a51c + 0u)); }
