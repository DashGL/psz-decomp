// FUN_02078ccc @ 0x02078ccc (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch25-manifest.json; original draft retained for referenced provenance.
// FUN_02078ccc @ 0x02078ccc (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Test decimal quotient digit: signed value divided by 100000 then remainder by ten equals one.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02078ccc.txt.
 */
int FUN_02078ccc(int value) { if((value/100000)%10==1) return 1; return 0; }
