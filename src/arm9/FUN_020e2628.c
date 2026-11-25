// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x20, exact bytes and relocation targets.
// Actual constants, arguments and globals: notes/sessions/matching-continue-2026-11-12-global-objects.md
extern unsigned char *DAT_0211de50[];
// flags: -O4,s
// USA instruction-derived runtime/protocol leaf.
int FUN_020e2628(void){unsigned char *p=DAT_0211de50[3];if(p && (unsigned char)(p[30]+255)<=1)return 0;return 1;}
