// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x10, exact bytes and relocation targets.
// FUN_0203786c @ 0x0203786c, full 0x10-byte extent, canonical bytes+relocs.
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// Per-function language/ABI proof: notes/sessions/matching-low-2026-11-12.md
// Table020f6fe8 slot3 is0203787c, returning allocated child pointer at+16.
// ROM table load uses incoming r0, not saved r4; native member call is exact.
//cpp
// flags: -O4,s
struct Receiver_0203786c { virtual void v0(); virtual void v1(); virtual void v2(); virtual void *v3(); void *owner, *active, *pending, *child; };
extern "C" void FUN_0203786c(Receiver_0203786c *self,void *value) { self->owner=value; self->pending=self->v3(); }
