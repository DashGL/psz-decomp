// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x54, exact bytes and relocation targets.
//cpp
// FUN_overlay_19__02199c28 @ 0x02199c28
// check: 2.0/sp2p3 target=0x54 candidate=0x54 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern "C" {
extern int FUN_02074e9c(void *,int,int,int);
extern void FUN_overlay_19__02199d20(void *,void *),FUN_overlay_19__0219a2f0(void *,void *);
struct Obj_02199c28 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(void *); };
void FUN_overlay_19__02199c28(Obj_02199c28 *o,void *owner) { int *self=(int *)o; if(self[12]==-1)self[12]=FUN_02074e9c(owner,11,1,0);if(self[13]==-1)self[13]=FUN_02074e9c(owner,self[10]+12,1,0);FUN_overlay_19__02199d20(self,owner);o->v7(owner);FUN_overlay_19__0219a2f0(self,owner); }
}
