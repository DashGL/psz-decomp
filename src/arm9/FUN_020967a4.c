// FUN_020967a4 @ 0x020967a4 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_020967a4 @ 0x020967a4 (inventory code 0x28, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Count records satisfying predicate using live count.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020967a4.txt.
 */
extern int FUN_020967cc(void *,int); int FUN_020967a4(char *self) { int count=0,i; for(i=0;i<*(int *)(self+4);i++) if(FUN_020967cc(self,*(int *)(self+12+8*i))) count++; return count; }
