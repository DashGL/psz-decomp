// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x18, exact bytes and relocation targets.
// Actual constants, arguments and globals: notes/sessions/matching-continue-2026-11-12-global-objects.md
extern unsigned int DAT_020fe694[];
// flags: -O4,s
// USA instruction-derived runtime/container leaf.
int FUN_020d1ff8(void){return DAT_020fe694[2]!=0xffffffff;}
