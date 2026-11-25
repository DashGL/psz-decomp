// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x14, exact bytes and relocation targets.
// FUN_overlay_15__02125430 @ 0x02125430
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern unsigned int FUN_overlay_15__02127e40(void); extern unsigned int D_02139dbc[]; unsigned int FUN_overlay_15__02125430(void) { return D_02139dbc[FUN_overlay_15__02127e40()]; }
