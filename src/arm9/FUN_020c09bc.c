// FUN_020c09bc @ 0x020c09bc (0x4c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch34-manifest.json; original draft retained for referenced provenance.
// FUN_020c09bc @ 0x020c09bc
// check: 2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Validate pair through three-argument helper, then remove for mode0/1 or insert for mode2. Others fail.
 * Evidence: scratch/coverage-root/batch11/020c09bc.txt.
 */
extern int FUN_020dd3fc(void *,unsigned int,unsigned int);
extern int FUN_020c0a7c(unsigned int,unsigned int,void *,int);
extern int FUN_020c0abc(unsigned int,unsigned int,void *,int);
int FUN_020c09bc(int mode,unsigned int a,unsigned int b){if(FUN_020dd3fc((void *)0x0211b404,a,b)==1){switch(mode){case 0:case 1:FUN_020c0a7c(a,b,(void *)0x0211c444,64);return 1;case 2:FUN_020c0abc(a,b,(void *)0x0211c444,64);return 1;}}return 0;}
