// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x18, exact bytes and relocation targets.
// Actual constants, arguments and globals: notes/sessions/matching-continue-2026-11-12-port-semantics.md
// twin of FUN_02078d5c
/* USA ROM reconstruction, 2026-11-04.
 * Read global slot for valid signed index [0,19), else null.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02078d5c.txt.
 */
extern void * data_02120c24[];
void *FUN_overlay_9__0211e690(int index) { if(index>=0 && index<19) return data_02120c24[index]; return 0; }
