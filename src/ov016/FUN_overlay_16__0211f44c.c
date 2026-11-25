// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x10, exact bytes and relocation targets.
// FUN_overlay_16__0211f44c @ 0x0211f44c
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
typedef struct{unsigned int pad[34];unsigned int t[2];unsigned int sel;}S; unsigned int FUN_overlay_16__0211f44c(S *p) {return p->t[p->sel];}
