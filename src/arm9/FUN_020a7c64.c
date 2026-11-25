// FUN_020a7c64 @ 0x020a7c64 (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_020a7c64 @ 0x020a7c64 (inventory code 0x40, thumb)
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Map signed ordinal into bounded tier ranges.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a7c64.txt.
 */
int FUN_020a7c64(int value){int tier=5;if(value>=0 && value<1)tier=1;else if(value>=1 && value<5)tier=2;else if(value>=5 && value<13)tier=3;else if(value>=13 && value<25)tier=4;else if(value>=25 && value<33)tier=5;return tier;}
