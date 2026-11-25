// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1c, exact bytes and relocation targets.
// FUN_0209ffbc @ 0x0209ffbc
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Set registered receiver bit one and clear global slot.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209ffbc.txt.
 */
extern void * data_0211a630[];
void FUN_0209ffbc(void) { unsigned int *p=*data_0211a630; if(p) { p[24]|=2; *data_0211a630=0; } }
