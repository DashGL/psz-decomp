// FUN_020c2bfc @ 0x020c2bfc (0x4e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch34-manifest.json; original draft retained for referenced provenance.
// FUN_020c2bfc @ 0x020c2bfc
// check: 2.0/sp2p3 target=0x4e candidate=0x4e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reset child, set three parameters, then submit three resource loads with child as callback context.
 * Evidence: scratch/coverage-root/batch14/020c2bfc.txt.
 */
extern void FUN_020c2cd0(void *);
extern void *FUN_020c1fc8(void);
extern void FUN_020c2730(void *,void *,const void *,void *),FUN_020c27b4(void *,void *,const void *,void *),FUN_020c2774(void *,void *,const void *,void *);
void FUN_020c2bfc(unsigned char **self,const void *path,unsigned int a,unsigned int b,unsigned int c){void *manager;FUN_020c2cd0(*self);*(unsigned int *)(*self+0x58)=a;*(unsigned int *)(*self+0x48)=b;*(unsigned int *)(*self+0x4c)=c;manager=FUN_020c1fc8();FUN_020c2730(manager,*self+12,path,*self);FUN_020c27b4(manager,*self+12,path,*self);FUN_020c2774(manager,*self+12,path,*self);}
