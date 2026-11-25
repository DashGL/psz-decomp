// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
// FUN_0209ce58 @ 0x0209ce58
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Search 21-entry table when active, returning sentinel when inactive.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209ce58.txt.
 */
extern unsigned int data_020f495c[];
extern int FUN_02084bf8(void *); int FUN_0209ce58(unsigned int value) { if(FUN_02084bf8((void *)0x0211a51c)) { int i; for(i=0;i<21;i++) if((data_020f495c)[i]==value) return i; return 0; } return -1; }
