// FUN_02051f94 @ 0x02051f94 (0x98, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch27-manifest.json; original draft retained for referenced provenance.
// FUN_02051f94 @ 0x02051f94 (inventory code 0x90, thumb)
// check: 2.0/sp2p3 target=0x98 candidate=0x98 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 123.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b123/02051f94.txt.
 */
extern void FUN_02051c70(void),FUN_0206557c(unsigned int,void *,unsigned int),FUN_0205d094(unsigned int),FUN_0205d620(unsigned int),FUN_0205d7f8(unsigned int),FUN_0205dae0(unsigned int),FUN_0205db88(unsigned int),FUN_0205dbf8(unsigned int);void FUN_02051f94(void){volatile unsigned short *a=(volatile unsigned short *)0x04000008,*b=(volatile unsigned short *)0x04001008;FUN_02051c70();FUN_0206557c(0,(void *)0x06000000,0x80000);FUN_0206557c(0,(void *)0x05000000,512);FUN_0205d094(48);FUN_0205d620(3);FUN_0205d7f8(64);FUN_0205dae0(4);FUN_0205db88(8);FUN_0205dbf8(128);a[0]=(a[0]&~3)|1;a[1]=(a[1]&~3);a[2]=(a[2]&~3)|2;a[3]=(a[3]&~3)|3;b[0]=(b[0]&~3)|2;b[1]=(b[1]&~3)|1;b[2]=(b[2]&~3);b[3]=(b[3]&~3)|3;}
