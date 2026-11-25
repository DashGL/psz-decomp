// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x14, exact bytes and relocation targets.
// FUN_overlay_26__0219b06c @ 0x0219b06c, verified extent 0x14.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_02042961[];
extern unsigned char DAT_0219b49c[];
// FUN_overlay_26__0219b06c @ 0x0219b06c (code 0xa, full extent 0x14, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete shifted-constant initializer veneer.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch527.md.
 */
typedef void (*Call)(unsigned *,unsigned);
void FUN_overlay_26__0219b06c(void) { ((Call)((unsigned int)DAT_02042961 + 0u))((unsigned *)((unsigned int)DAT_0219b49c + 0u),0x00019000); }
