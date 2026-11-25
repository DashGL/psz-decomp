// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x14, exact bytes and relocation targets.
// check: 2.0/sp2p3 full_extent=0x14 exact_bytes=0 bad_relocs=0
// Corrected stale port against actual ROM: notes/sessions/matching-overlays-2026-11-12-corrected-ports.json
extern unsigned char DAT_0213df70[];
void *FUN_overlay_12__02128304(unsigned int *self,const unsigned int *pair){self[0]=(unsigned int)DAT_0213df70;self[1]=pair[0];self[2]=pair[1];return self;}
