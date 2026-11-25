// FUN_0208e63c @ 0x0208e63c (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_0208e63c @ 0x0208e63c (inventory code 0x2c, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Allocate and initialize owned list after successful preparation.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208e63c.txt.
 */
extern int FUN_0208e334(void *); extern void *FUN_020ba894(unsigned int),*FUN_02030ae4(void *); extern void FUN_02030b6c(void *,void *,int,int); void FUN_0208e63c(char *self) { if(FUN_0208e334(self)) { void *p=FUN_020ba894(8); if(p) p=FUN_02030ae4(p); *(void **)self=p; if(p) FUN_02030b6c(p,self+4,0,0); } }
