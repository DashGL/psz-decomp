// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x14, exact bytes and relocation targets.
// Actual constants, arguments and globals: notes/sessions/matching-continue-2026-11-12-global-objects.md
extern unsigned int *DAT_0211de44[];
// flags: -O4,s
// USA instruction-derived state/runtime leaf.
unsigned int FUN_020e1ea8(void){unsigned int *p=DAT_0211de44[1];if(p)return p[7];return 0;}
