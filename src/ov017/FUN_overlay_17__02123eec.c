// Helper classes scoped to this function; machine code and relocations rechecked 2026-11-12.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
// FUN_overlay_17__02123eec @ 0x02123eec
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
//cpp
struct O_FUN_overlay_17__02123eec { virtual void v0(); virtual void v1(); virtual void check(int,const char *); int stack[16]; int count; };
extern "C" int FUN_overlay_17__02123eec(O_FUN_overlay_17__02123eec *self) { self->check(self->count<=0,(const char *)0x02126a30);if(self->count<=0)return 0;self->count--;return self->stack[self->count]; }
