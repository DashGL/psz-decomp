// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x24, exact bytes and relocation targets.
// Verified 2026-11-12: full extent 0x24, exact bytes and relocation targets.
// Evidence: notes/sessions/matching-upper-small-diffs-2026-11-12.md
// FUN_02072a98 @ 0x02072a98 (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Lazily allocate and initialize 36-byte global object at 0211a204.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02072a98.txt.
 */
extern void *DAT_0211a200[];extern void *FUN_020ba894(unsigned int), *FUN_02072b08(void *);
void FUN_02072a98(void) {
    if(!DAT_0211a200[1]) {
        void *object=FUN_020ba894(36); if(object) object=FUN_02072b08(object);
        DAT_0211a200[1]=object;
    }
}
