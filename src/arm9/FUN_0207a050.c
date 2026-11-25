// FUN_0207a050 @ 0x0207a050 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch25-manifest.json; original draft retained for referenced provenance.
// FUN_0207a050 @ 0x0207a050 (inventory code 0x12, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve global manager record using signed context byte +16 and selector zero.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207a050.txt.
 */
extern void *FUN_0205136c(void *,int,int);
void *FUN_0207a050(void) { signed char *context=*(signed char **)0x02108c64; return FUN_0205136c(*(void **)0x0210e24c,context[22],0); }
