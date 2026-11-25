// FUN_02072a14 @ 0x02072a14 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch06-manifest.json; original draft retained for referenced provenance.
// FUN_02072a14 @ 0x02072a14 (inventory code 0x2c, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Return first record matching two word keys, otherwise null.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02072a14.txt.
 */
extern unsigned int *FUN_020728d4(void *,int); void *FUN_02072a14(int *self,unsigned int a,unsigned int b) { int i; for(i=0;i<self[0];i++) { unsigned int *p=FUN_020728d4(self,i); if(p[0]==a && p[1]==b) return p; } return 0; }
