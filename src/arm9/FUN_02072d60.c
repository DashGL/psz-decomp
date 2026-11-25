// FUN_02072d60 @ 0x02072d60 (0x4a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch06-manifest.json; original draft retained for referenced provenance.
// FUN_02072d60 @ 0x02072d60 (inventory code 0x4a, thumb)
// check: 2.0/sp2p3 target=0x4a candidate=0x4a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Finish pending mode and initialize idle enabled state.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02072d60.txt.
 */
extern int FUN_02072c20(void *,int,int);void FUN_02072d60(int *self){if(self[6]!=-1 && FUN_02072c20(self,self[6],self[7])==1){self[6]=-1;self[7]=0;}if(!self[5] && self[4] && self[2]==-1 && self[1]==-1)FUN_02072c20(self,0,1);}
