// Helper classes scoped to this function; machine code and relocations rechecked 2026-11-12.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
//cpp
// FUN_overlay_17__02123df4 @ 0x02123df4 (code 0x30, full extent 0x34, thumb)
// flags: -O4,s
extern "C" const char D_021269b8[];
struct O_FUN_overlay_17__02123df4 { virtual void v0(); virtual void v1(); virtual void v2(int,const char *); };
extern "C" void FUN_overlay_17__02123df4(O_FUN_overlay_17__02123df4 *o,int value) { int *self=(int *)o; o->v2(self[17]>=16,D_021269b8);if(self[17]<16){(self+self[17])[1]=value;self[17]++;} }
