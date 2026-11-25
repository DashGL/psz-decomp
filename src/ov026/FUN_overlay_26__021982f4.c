// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xc, exact bytes and relocation targets.
// FUN_overlay_26__021982f4 @ 0x021982f4, verified extent 0xc.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_020866b5[];
// FUN_overlay_26__021982f4 @ 0x021982f4 (code 0x6, full extent 0xc, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch523.md.
 */
typedef int (*Position)(int,void *);
int FUN_overlay_26__021982f4(int *self,void *output) { return ((Position)((unsigned int)DAT_020866b5 + 0u))(self[20],output); }
