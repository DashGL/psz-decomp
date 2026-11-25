// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x10, exact bytes and relocation targets.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// USA instruction-derived runtime/container leaf.
extern unsigned int D_0211d084;
void *FUN_020d1ec4(unsigned int value){D_0211d084=value;return (void *)0x0211d084;}
