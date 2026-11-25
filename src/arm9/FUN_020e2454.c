// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1c, exact bytes and relocation targets.
// Actual constants, arguments and globals: notes/sessions/matching-continue-2026-11-12-global-objects.md
extern unsigned int *DAT_0211de44[];
// flags: -O4,s
// USA instruction-derived runtime/protocol leaf.
int FUN_020e2454(void){unsigned int *p=DAT_0211de44[1];if(p && p[1]==5)return 1;return 0;}
