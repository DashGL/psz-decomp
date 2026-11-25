// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x40, exact bytes and relocation targets.
// FUN_020bf7d8 @ 0x020bf7d8
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Sum separately rounded fixed-point squares of two signed words.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bf7d8.txt.
 */
unsigned int FUN_020bf7d8(int *pair) {
    long long y=pair[1],x=pair[0];
    return (unsigned int)((x*x+2048)>>12)+(unsigned int)((y*y+2048)>>12);
}
