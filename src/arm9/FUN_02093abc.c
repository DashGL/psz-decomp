// FUN_02093abc @ 0x02093abc (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_02093abc @ 0x02093abc (inventory code 0x28, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Install table, initialize sentinel and register with singleton.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02093abc.txt.
 */
extern void *FUN_0208f068(void); extern int FUN_0208ef48(void *,void *,unsigned int); void *FUN_02093abc(unsigned int *self,void *arg,unsigned int value) { void *p; self[0]=0x020fb040; self[1]=-1; p=FUN_0208f068(); if(p) self[1]=FUN_0208ef48(p,arg,value); return self; }
