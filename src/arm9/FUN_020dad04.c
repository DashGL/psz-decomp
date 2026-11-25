// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x14, exact bytes and relocation targets.
// Actual constants, arguments and globals: notes/sessions/matching-continue-2026-11-12-global-objects.md
extern unsigned char *DAT_0211dbb4[];
// flags: -O4,s
// USA instruction-derived protocol/runtime leaf.
unsigned int FUN_020dad04(void){unsigned char *p=DAT_0211dbb4[3];return p?p[9]:0;}
