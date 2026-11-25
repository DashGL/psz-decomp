// FUN_0209f404 @ 0x0209f404 (0xc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_0209f404 @ 0x0209f404 (inventory code 0xc, thumb)
// check: 2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Set optional child word +a8.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209f404.txt.
 */
void FUN_0209f404(void **self,unsigned int value) { char *p=self[20]; if(p) *(unsigned int *)(p+168)=value; }
