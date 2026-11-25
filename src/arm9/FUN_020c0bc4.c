// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x20, exact bytes and relocation targets.
// FUN_020c0bc4 @ 0x020c0bc4
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* Initialize 64 global records of stride 12. */
extern void FUN_020dd31c(void *);
typedef struct{char b[12];}R; extern R G_0211B444[]; void FUN_020c0bc4(void){int i;for(i=0;i<64;i++)FUN_020dd31c(&G_0211B444[i]);}
