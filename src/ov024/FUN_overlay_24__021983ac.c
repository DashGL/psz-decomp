// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xc, exact bytes and relocation targets.
// FUN_overlay_24__021983ac @ 0x021983ac, verified extent 0xc.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_0208680d[];
// FUN_overlay_24__021983ac @ 0x021983ac (code 0x6, full extent 0xc, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete typed tail veneer.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch524.md.
 */
typedef int (*Call)(int,void *);
int FUN_overlay_24__021983ac(int *self,void *output) { return ((Call)((unsigned int)DAT_0208680d + 0u))(self[22],output); }
