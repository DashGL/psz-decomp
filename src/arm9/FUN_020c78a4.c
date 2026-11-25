// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x14, exact bytes and relocation targets.
// Actual constants, arguments and globals: notes/sessions/matching-continue-2026-11-12-global-objects.md
extern unsigned int DAT_020fcc6c[];
// flags: -O4,s
// USA profile, random-range, and state helpers; scalar returns retained.
extern unsigned int FUN_020c786c(unsigned int);
unsigned int FUN_020c78a4(void){unsigned int next=FUN_020c786c(DAT_020fcc6c[1]);DAT_020fcc6c[1]=next;return next;}
