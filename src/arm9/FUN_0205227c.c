// FUN_0205227c @ 0x0205227c (0x94, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch28-manifest.json; original draft retained for referenced provenance.
// FUN_0205227c @ 0x0205227c (inventory code 0x8a, thumb)
// check: 2.0/sp2p3 target=0x94 candidate=0x94 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 121.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b121/0205227c.txt.
 */
extern void FUN_02051c70(void),FUN_0205dac0(unsigned int),FUN_0206557c(unsigned int,void *,unsigned int),FUN_0205dfa0(void),FUN_0205d620(unsigned int),FUN_0205d7f8(unsigned int),FUN_0205d324(unsigned int),FUN_0205db88(unsigned int),FUN_0205dae0(unsigned int),FUN_0205dbf8(unsigned int),FUN_0205d094(unsigned int),FUN_0205d474(unsigned int);extern void *FUN_0205e0c4(void);void FUN_0205227c(void){volatile unsigned short *a=(volatile unsigned short *)0x04000008,*b=(volatile unsigned short *)0x04001008;FUN_02051c70();FUN_0206557c(0,(void *)0x06000000,0x80000);FUN_0206557c(0,(void *)0x05000000,512);FUN_0205d094(1);FUN_0205dae0(4);FUN_0205d324(2);FUN_0205db88(8);FUN_0205dbf8(128);a[0]=(a[0]&~3)|1;a[1]=(a[1]&~3);a[2]=(a[2]&~3)|2;a[3]=(a[3]&~3)|3;b[0]=(b[0]&~3)|1;b[1]=(b[1]&~3);b[2]=(b[2]&~3)|2;b[3]=(b[3]&~3)|3;}
