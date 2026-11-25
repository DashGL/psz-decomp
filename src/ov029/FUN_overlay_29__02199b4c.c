// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x14, exact bytes and relocation targets.
// FUN_overlay_29__02199b4c @ 0x02199b4c
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
int FUN_overlay_29__02199b4c(unsigned int *p) { unsigned int current=p[24]+1; p[24]=current; return p[23]>=current; }
