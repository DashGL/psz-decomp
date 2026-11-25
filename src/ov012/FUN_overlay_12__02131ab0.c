// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa, exact bytes and relocation targets.
// check: 2.0/sp2p3 full_extent=0xa exact_bytes=0 bad_relocs=0
// Corrected stale port against actual ROM: notes/sessions/matching-overlays-2026-11-12-corrected-ports.json
// flags: -O4,s
void FUN_overlay_12__02131ab0(unsigned int *self){self[123]=1;}
