// FUN_020b2ed4 @ 0x020b2ed4 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_020b2ed4 @ 0x020b2ed4 (inventory code 0x12, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Call global manager with signed global selector and trailing zero.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b2ed4.txt.
 */
extern unsigned int FUN_0205136c(void *,int,int); unsigned int FUN_020b2ed4(void) { signed char *p=*(signed char **)0x02108c64; return FUN_0205136c(*(void **)0x0210e24c,p[22],0); }
