// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x10, exact bytes and relocation targets.
// check: 2.0/sp2p3 full_extent=0x10 exact_bytes=0 bad_relocs=0
// Corrected stale port against actual ROM: notes/sessions/matching-overlays-2026-11-12-corrected-ports.json
extern signed char *DAT_0213e8d8;
int FUN_overlay_15__02133030(void){return DAT_0213e8d8[27];}
