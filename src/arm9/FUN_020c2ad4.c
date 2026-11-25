// FUN_020c2ad4 @ 0x020c2ad4 (0x5a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch34-manifest.json; original draft retained for referenced provenance.
// FUN_020c2ad4 @ 0x020c2ad4
// check: 2.0/sp2p3 target=0x5a candidate=0x5a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Build56-byte resource bundle, invoke8-argument renderer setup, record child lengths, then release bundle.
 * Evidence: scratch/coverage-root/batch16/020c2ad4.txt.
 */
extern void FUN_020c2b30(void *),FUN_020c26a0(void *,void *,const void *),FUN_020c2974(void *,void *);
extern void *FUN_020c1fc8(void);
extern void FUN_02015c1c(unsigned int,void *,void *,void *,unsigned int,unsigned int,unsigned int,unsigned int);
void FUN_020c2ad4(unsigned int *self,const void *path,unsigned int target,unsigned int a,unsigned int b){unsigned int bundle[14];FUN_020c2b30(bundle);FUN_020c26a0(FUN_020c1fc8(),bundle,path);self[2]=a;self[3]=b;FUN_02015c1c(target,(void *)bundle[5],(void *)bundle[4],(void *)bundle[3],bundle[6],bundle[7],self[2],self[3]);self[4]=((unsigned int *)bundle[5])[2];self[5]=((unsigned int *)bundle[4])[4];FUN_020c2974(FUN_020c1fc8(),bundle);}
