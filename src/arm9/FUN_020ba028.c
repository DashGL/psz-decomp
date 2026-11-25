// FUN_020ba028 @ 0x020ba028 (0xe, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_020ba028 @ 0x020ba028 (inventory code 0xe, thumb)
// check: 2.0/sp2p3 target=0xe candidate=0xe words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Compare receiver word +c with argument.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020ba028.txt.
 */
int FUN_020ba028(unsigned int *self,unsigned int value) { if(self[3]==value) return 1; return 0; }
