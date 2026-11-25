// FUN_02050210 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_02050210 @ 0x02050210 (inventory code 0x40, thumb)
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 2.
 * Cleanup helper, clear slot two, free buffer slot three and destroy optional slots one then zero.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b2/02050210.txt.
 */
extern void FUN_02050364(void *),FUN_020ba8c4(void *);
void FUN_02050210(void **self) {
    void *child;
    FUN_02050364(self); self[2]=0;
    if(self[3]) { FUN_020ba8c4(self[3]); self[3]=0; }
    child=self[1]; if(child) { if(child) { void (**table)(void *)=*(void (***)(void *))child; table[1](child); } self[1]=0; }
    child=self[0]; if(child) { if(child) { void (**table)(void *)=*(void (***)(void *))child; table[1](child); } self[0]=0; }
}
