// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1e, exact bytes and relocation targets.
// FUN_020957f0 @ 0x020957f0
// check: 2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern void FUN_02039534(void *,void *); int FUN_020957f0(unsigned char *self,void *dest) { if(self[704]==1) { FUN_02039534(dest,self+704); return 1; } return 0; }
