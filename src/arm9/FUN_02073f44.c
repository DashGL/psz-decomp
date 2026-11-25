// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1a, exact bytes and relocation targets.
// FUN_02073f44 @ 0x02073f44
// check: 2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Return mode-3 object state only for states 8 and 9, else -1.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02073f44.txt.
 */
extern char *FUN_0207381c(void);
int FUN_02073f44(void) {
    char *object=FUN_0207381c(); if(object) { int state=*(int *)(object+48); if(state==8) return state; if(state==9) return state; }
    return -1;
}
