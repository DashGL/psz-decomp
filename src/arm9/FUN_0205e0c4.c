// FUN_0205e0c4 @ 0x0205e0c4 (0x20, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch32-manifest.json; original draft retained for referenced provenance.
// FUN_0205e0c4 @ 0x0205e0c4 (inventory code 0x1c, arm)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 145.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b145/0205e0c4.txt.
 */
void *FUN_0205e0c4(void){return (void *)(0x06200000+(((*(volatile unsigned short *)0x0400100a&0x1f00)>>8)<<11));}
