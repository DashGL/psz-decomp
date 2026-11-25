// FUN_0208b14c @ 0x0208b14c (0x92, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch02.json; original draft retained for referenced provenance.
// FUN_0208b14c @ 0x0208b14c (inventory code 0x92, thumb)
// check: 2.0/sp2p3 target=0x92 candidate=0x92 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Cycle menu selection and reset displayed components on change.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208b14c.txt.
 */
extern int FUN_0208b514(void *),FUN_020bbf94(int),FUN_020bbfa8(int);extern void FUN_020c193c(int,int,int,int,int),FUN_020c38f0(void *,int);void FUN_0208b14c(int *s){int count=FUN_0208b514(s),old=s[9];if(FUN_020bbf94(256) && !FUN_020bbfa8(512)){++s[9];if(s[9]>count-1)s[9]=0;}if(FUN_020bbf94(512) && !FUN_020bbfa8(256)){--s[9];if(s[9]<0)s[9]=count-1;}if(s[9]>=count)s[9]=0;if(s[9]!=old){FUN_020c193c(0,2,0,0,-1);s[14]=0;FUN_020c38f0((void *)s[12],0);FUN_020c38f0((void *)s[13],0);}}
