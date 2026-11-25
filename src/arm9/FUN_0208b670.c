// FUN_0208b670 @ 0x0208b670 (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_0208b670 @ 0x0208b670 (inventory code 0x40, thumb)
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Classify descriptor into contiguous item groups.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208b670.txt.
 */
extern int FUN_0204db98(void *,int);int FUN_0208b670(void *unused,unsigned char *desc){if(FUN_0204db98(desc,0)){int kind=desc[1];if(kind<=7)return 56;if(kind<=13)return 57;if(kind<=16)return 58;}if(FUN_0204db98(desc,1))return 59;return -1;}
