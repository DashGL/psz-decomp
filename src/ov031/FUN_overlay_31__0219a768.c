// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xc, exact bytes and relocation targets.
// check: 2.0/sp2p3 full_extent=0xc exact_bytes=0 bad_relocs=0
// Actual ROM ABI: notes/sessions/matching-overlays-2026-11-12-twin-abi.json
// flags: -O4,s
extern unsigned DAT_0219d0a0;
void *FUN_overlay_31__0219a768(void *self){DAT_0219d0a0=0;return self;}
