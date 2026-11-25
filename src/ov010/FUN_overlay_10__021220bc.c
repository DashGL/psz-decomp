// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x18, exact bytes and relocation targets.
// FUN_overlay_10__021220bc @ 0x021220bc
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern void (*D_021223c8[])(void); void FUN_overlay_10__021220bc(int selector) { if(selector<7) { void (*callback)(void)=D_021223c8[selector]; if(callback) callback(); } }
