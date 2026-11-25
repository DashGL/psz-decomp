// Helper classes scoped to this function; machine code and relocations rechecked 2026-11-12.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1c, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
//cpp
// flags: -O4,s
extern "C" int FUN_020c2e14(int);
struct O_FUN_overlay_12__02131e48 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); };
extern "C" void FUN_overlay_12__02131e48(O_FUN_overlay_12__02131e48 *o)
{
    int *self=(int *)o;
    if(FUN_020c2e14(self[12])){
        o->v14();self[11]=3;
    }
}
