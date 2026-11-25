// FUN_0207f308 @ 0x0207f308 (0x2a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch25-manifest.json; original draft retained for referenced provenance.
// FUN_0207f308 @ 0x0207f308 (inventory code 0x2a, thumb)
// check: 2.0/sp2p3 target=0x2a candidate=0x2a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Guard operation by selector then forward remaining arguments including stack values.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207f308.txt.
 */
extern int FUN_0207f334(void *,int); extern void FUN_0207f34c(void *,int,int,unsigned int,unsigned int,unsigned int); void FUN_0207f308(void *self,int selector,int a,int b,unsigned int c,unsigned int d,unsigned int e) { if(FUN_0207f334(self,selector)) FUN_0207f34c(self,a,b,c,d,e); }
