// FUN_02082bbc @ 0x02082bbc (0x26, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_02082bbc @ 0x02082bbc (inventory code 0x26, thumb)
// check: 2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Build five-word local descriptor and initialize object from it.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02082bbc.txt.
 */
extern void FUN_0206d188(void *,unsigned int,int,int,int,unsigned int),FUN_02082be4(void *,void *,int); void FUN_02082bbc(void *self,unsigned int arg,unsigned int third) { unsigned int local[5]; FUN_0206d188(local,arg,3,4,0,third); FUN_02082be4(self,local,-1); }
