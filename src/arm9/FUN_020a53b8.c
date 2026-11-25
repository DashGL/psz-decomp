// FUN_020a53b8 @ 0x020a53b8 (0xe, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_020a53b8 @ 0x020a53b8 (inventory code 0xe, thumb)
// check: 2.0/sp2p3 target=0xe candidate=0xe words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Update indexed halfword flag.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a53b8.txt.
 */
void FUN_020a53b8(char *self,unsigned int index) { ((unsigned short *)(self+84))[index]|=16; }
