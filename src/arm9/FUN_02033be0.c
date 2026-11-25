// Helper classes scoped to this function; machine code and relocations rechecked 2026-11-12.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x30, exact bytes and relocation targets.
// FUN_02033be0 @ 0x02033be0
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
//cpp
struct O_FUN_02033be0 { virtual void v0(); virtual void v1(); };
extern "C" void FUN_02033ff4(void *,void *);
extern "C" void FUN_02033be0(O_FUN_02033be0 *p) { if(p) { void **base=(void **)0x02108c74; O_FUN_02033be0 *head=(O_FUN_02033be0 *)base[4]; if(head==p) base[4]=*(void **)((char *)head+0x20); else FUN_02033ff4(head,p); if(p) { if(p) p->v1(); } } }
