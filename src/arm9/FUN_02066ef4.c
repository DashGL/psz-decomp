// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x18, exact bytes and relocation targets.
// Actual constants, arguments and globals: notes/sessions/matching-continue-2026-11-12-runtime-returns.md
// flags: -O4,s -noThumb
// Actual callers 020675d0 and 02067748 consume return low bits; this is not a void initializer.
unsigned int FUN_02066ef4(void){*(unsigned int *)0x020f9728=0x82000001u;return 0x82000001u;}
