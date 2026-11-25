// FUN_020b7774 @ 0x020b7774 (0x22, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_020b7774 @ 0x020b7774 (inventory code 0x22, thumb)
// check: 2.0/sp2p3 target=0x22 candidate=0x22 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reset tag and twenty embedded records.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b7774.txt.
 */
extern void FUN_020b74cc(void *); void FUN_020b7774(char *self) { int i; self[0]=0; *(int *)(self+4)=-1; for(i=0;i<20;i++) FUN_020b74cc(self+12+20*i); }
