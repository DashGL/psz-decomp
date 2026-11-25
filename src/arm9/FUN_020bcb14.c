// FUN_020bcb14 @ 0x020bcb14 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_020bcb14 @ 0x020bcb14 (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reset table, clear word and release optional buffer.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bcb14.txt.
 */
extern void FUN_020ba8b4(void *); void *FUN_020bcb14(unsigned int *self) { self[0]=0x020fc9a0; self[1]=0; if(self[2]) { FUN_020ba8b4((void *)self[2]); self[2]=0; } return self; }
