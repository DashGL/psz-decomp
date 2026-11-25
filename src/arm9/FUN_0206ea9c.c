// FUN_0206ea9c @ 0x0206ea9c (0x48, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch07-manifest.json; original draft retained for referenced provenance.
// FUN_0206ea9c @ 0x0206ea9c
// check: 2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Start action17, set bit8/state12/byte parameter and store callback token without invoking it.
 * Evidence: scratch/coverage-root/batch13/0206ea9c.txt.
 */
extern int FUN_02039108(void *,int,unsigned int,int);
extern void FUN_02039050(void *,unsigned int);
void FUN_0206ea9c(unsigned char *self,unsigned int value,unsigned int arg){*(unsigned short *)(self+0xc0)=value;FUN_02039108(self,17,*(unsigned int *)(self+0xd4),0);*(unsigned int *)(self+0xf8)|=0x100;*(unsigned int *)(self+0x240)=12;self[0x141]=arg;FUN_02039050(self,0x0206eae5);}
