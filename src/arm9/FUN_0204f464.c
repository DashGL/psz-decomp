// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x14, exact bytes and relocation targets.
// FUN_0204f464 @ 0x0204f464
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM: return whether global object selector byte is below ff. */
extern unsigned char *FUN_020b3d04(void);
int FUN_0204f464(void) { unsigned char *o=FUN_020b3d04(); int valid=0; int s=o[12]; if(s<255) valid=1; return valid; }
