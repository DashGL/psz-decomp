// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x14, exact bytes and relocation targets.
// check: 2.0/sp2p3 full_extent=0x14 exact_bytes=0 bad_relocs=0
// Corrected stale port against actual ROM: notes/sessions/matching-overlays-2026-11-12-corrected-ports.json
// flags: -O4,p
extern unsigned int FUN_overlay_22__0219a110(void *);
extern void FUN_overlay_22__0219d440(void *);
void FUN_overlay_22__0219d42c(void *self){if(FUN_overlay_22__0219a110(self)!=14)FUN_overlay_22__0219d440(self);}
