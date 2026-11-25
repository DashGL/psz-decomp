// FUN_020bc658 @ 0x020bc658 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch16.json; original draft retained for referenced provenance.
// FUN_020bc658 @ 0x020bc658 (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy absolute signed source value using local temporary for negative input.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bc658.txt.
 */
void FUN_020bc658(unsigned int *dest,unsigned int *source) { unsigned int local; int value=(int)*source; if(value<0) { local=0u-value; source=&local; } *dest=*source; }
