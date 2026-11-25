// Helper classes scoped to this function; machine code and relocations rechecked 2026-11-12.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x40, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
//cpp
// FUN_overlay_17__02123e28 @ 0x02123e28 (code 0x3c, full extent 0x40, thumb)
// flags: -O4,s
extern "C" const char D_021269e0[];
struct O_FUN_overlay_17__02123e28 { virtual void v0(); virtual void v1(); virtual void v2(int,const char *); };
extern "C" void FUN_overlay_17__02123e28(O_FUN_overlay_17__02123e28 *o,int value) { int *self=(int *)o; o->v2(self[34]>=16,D_021269e0);if(self[34]<16){(self+self[34])[18]=value;self[34]++;} }
