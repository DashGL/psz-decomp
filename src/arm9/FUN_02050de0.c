// FUN_02050de0 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_02050de0 @ 0x02050de0 (inventory code 0x2a, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 2.
 * Release optional slots zero, two, one through configured callbacks; slots are not cleared.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b2/02050de0.txt.
 */
void FUN_02050de0(void **self) {
    if(self[0]) (*(void (**)(void *))0x020f6940)(self[0]);
    if(self[2]) (*(void (**)(void *))0x020f6938)(self[2]);
    if(self[1]) (*(void (**)(void *))0x020f6938)(self[1]);
}
