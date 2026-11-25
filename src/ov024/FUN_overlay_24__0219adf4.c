// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xc, exact bytes and relocation targets.
// FUN_overlay_24__0219adf4 @ 0x0219adf4, verified extent 0xc.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_02037911[];
// FUN_overlay_24__0219adf4 @ 0x0219adf4 (code 0x6, full extent 0xc, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete typed tail veneer.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch524.md.
 */
typedef void (*Call)(int *,int);
void FUN_overlay_24__0219adf4(int *self) { ((Call)((unsigned int)DAT_02037911 + 0u))(self,self[15]); }
