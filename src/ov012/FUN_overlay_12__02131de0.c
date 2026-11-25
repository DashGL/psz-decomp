// Helper classes scoped to this function; machine code and relocations rechecked 2026-11-12.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x66, exact bytes and relocation targets.
// FUN_overlay_12__02131de0 @ 0x02131de0
// check: 2.0/sp2p3 target=0x66 candidate=0x66 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
//cpp
struct O_FUN_overlay_12__02131de0 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); int f[15]; };
extern "C" void FUN_overlay_12__02131e48(void *),FUN_overlay_12__02131e64(void *),FUN_overlay_12__02131e78(void *);
extern "C" O_FUN_overlay_12__02131de0 *FUN_overlay_12__02132020(int,void *);
extern "C" void FUN_overlay_12__02131de0(O_FUN_overlay_12__02131de0 *o)
{
    int *self=(int *)o; O_FUN_overlay_12__02131de0 *child;
    switch((unsigned)self[11]){
    case 1:FUN_overlay_12__02131e48(self);break;
    case 2:FUN_overlay_12__02131e64(self);break;
    case 3:FUN_overlay_12__02131e78(self);break;
    case 0:self[11]=3;break;
    }
    if(self[13]!=-1){
        child=FUN_overlay_12__02132020(self[13],self);
        if(child)child->v6();else self[13]=-1;
    }
    if(!self[14])o->v6();
}
