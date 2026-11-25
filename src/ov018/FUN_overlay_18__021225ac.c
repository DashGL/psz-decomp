// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x30, exact bytes and relocation targets; argument/return contract corrected.
// FUN_overlay_18__021225ac @ 0x021225ac (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch46.json; original draft retained for referenced provenance.
// FUN_overlay_18__021225ac @ 0x021225ac (code 0x28, pool extent 0x30, thumb)
// check: vers=2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 18 reconstruction from extracted module bytes, 2026-11-04.
 * Clear priority bits and enable display layer with separate volatile reads.
 * Field identities remain provisional.
 */
void FUN_overlay_18__021225ac(void *unused_receiver) {volatile unsigned short *priority=(volatile unsigned short *)0x04000008;volatile unsigned int *display=(volatile unsigned int *)0x04000000;unsigned int layers;*priority&=~3U;layers=(*display&0x1f00)>>8;*display=(*display&0xffffe0ff)|((layers|1)<<8);}

// Caller/callee ABI evidence: Same-module caller explicitly prepares receiver or embedded receiver immediately before call; complete callee ignores that input. Retain prepared positional argument without inventing input consumption.
