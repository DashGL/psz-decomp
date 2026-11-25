// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x4e, exact bytes and relocation targets.
// FUN_overlay_19__021987c4 @ 0x021987c4 (code 0x4e, full extent 0x4e, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Game turning, random decision or
 * resource cleanup; precise signed fixed-point/truncation behavior.
 * ABI/behavior: notes/sessions/coverage-overlays-2026-11-05-batch398.md.
 */
typedef struct {int x,y,z;} Vec;extern int FUN_02036f7c(void *,void *);extern int FUN_02037128(void *,void *,void *,void *,unsigned short);extern void FUN_02036fa8(void *,void *);
void FUN_overlay_19__021987c4(int *self,void *target) { Vec out,from;unsigned int product;out.x=0;out.y=0;out.z=0;FUN_02036f7c(self,&from);product=(unsigned int)self[102]*192u;FUN_02037128(self,&out,&from,target,(unsigned short)((int)product/4096));FUN_02036fa8(self,&out);self[103]=1; }
