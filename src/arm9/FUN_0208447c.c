// Helper classes scoped to this function; machine code and relocations rechecked 2026-11-12.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
//cpp
// FUN_0208447c @ 0x0208447c (inventory code 0x30, thumb)
// flags: -O4,s
extern "C" void FUN_020848b4(void *);
extern "C" char *D_0211a500[];
struct O_FUN_0208447c { virtual void v0(); virtual void v1(); };
extern "C" void FUN_0208447c(void) { int i; O_FUN_0208447c *q; char *p; p=D_0211a500[3]; if(p) { for(i=0;i<4;i++) FUN_020848b4(p+8*(i+4)); q=*(O_FUN_0208447c **)(p+64); if(q) { if(q) q->v1(); *(void **)(p+64)=0; } } }
