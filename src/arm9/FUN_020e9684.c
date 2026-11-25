// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x18, exact bytes and relocation targets.
// Actual constants, arguments and globals: notes/sessions/matching-continue-2026-11-12-global-objects.md
extern int DAT_0211e5dc[];
// flags: -O4,s
// USA instruction-derived runtime/protocol leaf.
int FUN_020e9684(void){return DAT_0211e5dc[1]<0x6000;}
