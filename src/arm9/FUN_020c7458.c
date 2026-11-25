// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x10, exact bytes and relocation targets.
// Actual constants, arguments and globals: notes/sessions/matching-continue-2026-11-12-global-objects.md
extern int DAT_0211cef4[];
// flags: -O4,s
// USA instruction-derived network/container leaf.
int FUN_020c7458(int result,int fallback){if(result<0){DAT_0211cef4[1]=result;return fallback;}return result;}
