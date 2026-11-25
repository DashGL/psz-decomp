// Helper classes scoped to this function; machine code and relocations rechecked 2026-11-12.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1c, exact bytes and relocation targets.
// FUN_020ba26c @ 0x020ba26c
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
//cpp
struct O_FUN_020ba26c { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual int v4(); };
extern "C" O_FUN_020ba26c *FUN_020ba26c(O_FUN_020ba26c **self) { O_FUN_020ba26c *p=self[7]; if(p) { if(p->v4()==1) return p; } return 0; }
