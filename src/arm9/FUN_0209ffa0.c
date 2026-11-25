// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1c, exact bytes and relocation targets.
// FUN_0209ffa0 @ 0x0209ffa0
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Register nonnull receiver if global slot empty and clear bit one.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209ffa0.txt.
 */
extern void * data_0211a630[];
void FUN_0209ffa0(unsigned int *self) { if(!*data_0211a630 && self) { *data_0211a630=self; self[24]&=~2u; } }
