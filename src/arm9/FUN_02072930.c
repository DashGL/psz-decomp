// FUN_02072930 @ 0x02072930 (0x32, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch06-manifest.json; original draft retained for referenced provenance.
// FUN_02072930 @ 0x02072930 (inventory code 0x32, thumb)
// check: 2.0/sp2p3 target=0x32 candidate=0x32 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reset records matching both keys.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02072930.txt.
 */
extern int *FUN_020728d4(void *,int); extern void FUN_02072910(void *,void *); void FUN_02072930(int *self,int a,int b) { int i; for(i=0;i<self[0];i++) { int *p=FUN_020728d4(self,i); if(p[0]==a && p[1]==b) FUN_02072910(self,p); } }
