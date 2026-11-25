// FUN_0206f090 @ 0x0206f090 (0x4a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch07-manifest.json; original draft retained for referenced provenance.
// FUN_0206f090 @ 0x0206f090
// check: 2.0/sp2p3 target=0x4a candidate=0x4a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear counter and set halfword; transition to state0 only from nonzero unlocked state after successful action.
 * Evidence: scratch/coverage-root/batch13/0206f090.txt.
 */
extern int FUN_020390f4(void *);
extern int FUN_020391cc(void *,int);
extern int FUN_02039140(void *,int,unsigned int,int);
void FUN_0206f090(unsigned char *self,unsigned int value){*(unsigned int *)(self+0x100)=0;*(unsigned short *)(self+0xc0)=value;if(*(unsigned int *)(self+0x240)!=0 && !FUN_020390f4(self)){FUN_020391cc(self,0);if(FUN_02039140(self,0,*(unsigned int *)(self+0xd4),4))*(unsigned int *)(self+0x240)=0;}}
