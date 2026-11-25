// FUN_0206ed98 @ 0x0206ed98 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch07-manifest.json; original draft retained for referenced provenance.
// FUN_0206ed98 @ 0x0206ed98
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Store halfword and dispatch only in required unlocked state.
 * Evidence: scratch/coverage-root/batch12/0206ed98.txt.
 */
extern int FUN_020390f4(void *);
extern void FUN_0206edc4(void *,unsigned int,unsigned int);
void FUN_0206ed98(unsigned char *self,unsigned int value,unsigned int arg){*(unsigned short *)(self+0xc0)=value;if(*(unsigned int *)(self+0x240)==10 && !FUN_020390f4(self))FUN_0206edc4(self,value,arg);}
