// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1c, exact bytes and relocation targets.
// Actual constants, arguments and globals: notes/sessions/matching-continue-2026-11-12-global-objects.md
extern unsigned int DAT_020fcc6c[];
// flags: -O4,s
// USA instruction-derived network/container leaf.
void FUN_020c78b8(unsigned int seed){DAT_020fcc6c[1]=seed ? seed&0x7fffffff : 1;}
