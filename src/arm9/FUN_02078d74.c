// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1c, exact bytes and relocation targets.
// ROM pool-base externs retain address materialization and register scheduling.
extern unsigned char DAT_0211a418[];
// FUN_02078d74 @ 0x02078d74 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Install pointer only into an empty global slot with valid signed index.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02078d74.txt.
 */
void FUN_02078d74(void *self,int index) { if(index>=0 && index<4 && !((void **)((unsigned int)DAT_0211a418 + 0u))[index]) ((void **)((unsigned int)DAT_0211a418 + 0u))[index]=self; }
