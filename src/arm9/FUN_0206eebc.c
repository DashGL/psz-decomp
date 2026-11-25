// FUN_0206eebc @ 0x0206eebc (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch07-manifest.json; original draft retained for referenced provenance.
// FUN_0206eebc @ 0x0206eebc
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Set halfword field; if state differs from9 and not locked, reset and dispatch state transition.
 * Evidence: scratch/coverage-root/batch12/0206eebc.txt.
 */
extern int FUN_020390f4(void *);
extern int FUN_020391cc(void *,int);
extern void FUN_0206eef0(void *,unsigned int,unsigned int);
void FUN_0206eebc(unsigned char *self,unsigned int value,unsigned int arg){*(unsigned short *)(self+0xc0)=value;if(*(unsigned int *)(self+0x240)!=9 && !FUN_020390f4(self)){FUN_020391cc(self,0);FUN_0206eef0(self,value,arg);}}
