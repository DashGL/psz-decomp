// Helper classes scoped to this function; machine code and relocations rechecked 2026-11-12.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x4c, exact bytes and relocation targets.
// FUN_overlay_17__02123f20 @ 0x02123f20
// check: 2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
//cpp
struct O_FUN_overlay_17__02123f20 { virtual void v0(); virtual void v1(); virtual void check(int,const char *); int a[16]; int b; int stack[16]; int count; };
extern "C" int FUN_overlay_17__02123f20(O_FUN_overlay_17__02123f20 *self) { self->check(self->count<=0,(const char *)0x02126a58);if(self->count<=0)return 0;self->count--;return self->stack[self->count]; }
