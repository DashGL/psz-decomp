// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x24, exact bytes and relocation targets.
// FUN_overlay_31__021998ec @ 0x021998ec
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern void FUN_02037214(void *,unsigned int,unsigned int,void *,unsigned int); extern unsigned int D_0219c5a8[];
void FUN_overlay_31__021998ec(unsigned int *p) { FUN_02037214(p,28,D_0219c5a8[p[54]],p+14,1); }
