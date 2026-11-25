// FUN_0208bf7c @ 0x0208bf7c (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_0208bf7c @ 0x0208bf7c (inventory code 0x26, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Submit owned text or emit missing-resource diagnostic.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208bf7c.txt.
 */
extern void FUN_020c3788(void *,void *,int,int,int),FUN_02074c44(int,int,const char *,...); void FUN_0208bf7c(char *self) { void *p=*(void **)self; if(p) FUN_020c3788(p,self+4,0,0,2); else FUN_02074c44(2,2,(char *)0x020faa4c); }
