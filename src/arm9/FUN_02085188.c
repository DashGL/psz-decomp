// FUN_02085188 @ 0x02085188 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_02085188 @ 0x02085188 (inventory code 0x10, thumb)
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve slot by first argument and store supplied halfword if valid.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02085188.txt.
 */
extern unsigned short *FUN_02086558(int);
void FUN_02085188(int slot,unsigned int value) { unsigned short *record=FUN_02086558(slot); if(record) *record=value; }
