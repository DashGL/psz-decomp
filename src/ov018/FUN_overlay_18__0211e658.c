// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x14, exact bytes and relocation targets.
// FUN_overlay_18__0211e658 @ 0x0211e658
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
unsigned int FUN_overlay_18__0211e658(unsigned int *p) {if(p[0]<p[1])p[0]=p[0]+1;else p[0]=0;return p[0];}
