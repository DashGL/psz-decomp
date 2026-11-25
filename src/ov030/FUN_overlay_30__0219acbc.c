// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x2c, exact bytes and relocation targets.
// FUN_overlay_30__0219acbc @ 0x0219acbc
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern void FUN_02042960(void *,unsigned int),FUN_020bc5cc(void *,void *,void *); extern char D_0219b11c[],D_0219b118[],D_0219b114[];
void FUN_overlay_30__0219acbc(void) { FUN_02042960(D_0219b11c,0x66); FUN_02042960(D_0219b118,0x2400); FUN_020bc5cc(D_0219b114,D_0219b118,D_0219b118); }
