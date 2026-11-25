// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x18, exact bytes and relocation targets.
// FUN_02096424 @ 0x02096424
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern unsigned int D_020fb1b8[]; unsigned int FUN_02096424(int index) { if(index>=0 && index<7) return D_020fb1b8[index]; return 0; }
