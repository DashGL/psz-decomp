// Helper classes scoped to this function; machine code and relocations rechecked 2026-11-12.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x40, exact bytes and relocation targets.
// FUN_020bae04 @ 0x020bae04
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
//cpp
struct O_FUN_020bae04 { virtual void v0(); virtual void v1(); virtual void v2(); };
extern "C" unsigned char *FUN_020bab0c(void *);extern "C" void FUN_020bb098(void *,void *),FUN_020bce24(void *,void *);
extern "C" void FUN_020bae04(O_FUN_020bae04 *self){char *queue=*(char **)((char *)self+64);for(;;){unsigned char *p=FUN_020bab0c(queue);if(*(int *)(queue+32)){self->v2();return;}if(!p)return;if(p[2]==0 && p[3]==1)FUN_020bb098(self,p);else FUN_020bce24(self,p);}}
