// FUN_0206f250 @ 0x0206f250 (0x58, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch07-manifest.json; original draft retained for referenced provenance.
// FUN_0206f250 @ 0x0206f250
// check: 2.0/sp2p3 target=0x58 candidate=0x58 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Start action18; if successful and unlocked, populate state13 parameters and callback token.
 * Evidence: scratch/coverage-root/batch13/0206f250.txt.
 */
extern int FUN_02039108(void *,int,unsigned int,int);
extern int FUN_020390f4(void *);
extern void FUN_02039050(void *,unsigned int);
void FUN_0206f250(unsigned char *self,unsigned int value,unsigned int a,unsigned int b,unsigned int c,unsigned int d){*(unsigned short *)(self+0xc2)=value;if(FUN_02039108(self,18,*(unsigned int *)(self+0xd4),0) && !FUN_020390f4(self)){self[0x141]=b;*(unsigned int *)(self+0x240)=13;self[0x140]=a;*(unsigned int *)(self+0x144)=c;self[0x142]=d;FUN_02039050(self,0x0206f2a9);}}
