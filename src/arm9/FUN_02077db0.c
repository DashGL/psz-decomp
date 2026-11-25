// FUN_02077db0 @ 0x02077db0 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch03-manifest.json; original draft retained for referenced provenance.
// FUN_02077db0 @ 0x02077db0 (inventory code 0x24, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Set two receiver fields and request global mode15 unless already selected.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02077db0.txt.
 */
extern unsigned int *FUN_02072af0(void); extern void FUN_02072c20(void *,int,int); void FUN_02077db0(char *self,unsigned int a,unsigned int b) { *(unsigned int *)(self+284)=a; *(unsigned int *)(self+288)=b; if(FUN_02072af0()[2]!=15) FUN_02072c20(FUN_02072af0(),15,1); }
