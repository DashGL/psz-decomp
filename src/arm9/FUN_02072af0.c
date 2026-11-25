// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x18, exact bytes and relocation targets.
// FUN_02072af0 @ 0x02072af0
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Lazily return global object at 0211a204.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02072af0.txt.
 */
extern void * data_0211a200[];
extern void FUN_02072a98(void);
void *FUN_02072af0(void) {
    if(!data_0211a200[1]) FUN_02072a98(); return data_0211a200[1];
}
