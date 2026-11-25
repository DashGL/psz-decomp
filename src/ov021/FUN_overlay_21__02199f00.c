// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xc, exact bytes and relocation targets.
// FUN_overlay_21__02199f00 @ 0x02199f00, verified extent 0xc.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_02199779[];
// FUN_overlay_21__02199f00 @ 0x02199f00 (code 0x6, full extent 0xc, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete typed tail veneer.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch526.md.
 */
typedef void (*Call)(void *,int);
void FUN_overlay_21__02199f00(void **self,int value) { ((Call)((unsigned int)DAT_02199779 + 0u))(self[1],value); }
