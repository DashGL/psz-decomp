// Helper classes scoped to this function; machine code and relocations rechecked 2026-11-12.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x48, exact bytes and relocation targets.
// FUN_020343b4 @ 0x020343b4 (inventory code 0x48, thumb)
// check: 2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
//cpp
struct O_FUN_020343b4{virtual void v0();virtual void v1();virtual void v2();};
extern "C" void FUN_0205e6b0(void),FUN_0205e7dc(void),FUN_02034478(void *,int);
extern "C" void FUN_020343b4(char *s){int i;char *p;FUN_0205e6b0();FUN_0205e7dc();FUN_02034478(s,1);if(*(unsigned int *)(s+36)&1){for(i=0;i<13;i++){p=*(char **)(s+128+4*i);while(p){((O_FUN_020343b4*)p)->v2();p=*(char **)(p+12);}}}p=*(char **)(s+32);if(p)FUN_020343b4(p);}
