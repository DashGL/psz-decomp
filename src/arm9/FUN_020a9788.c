// FUN_020a9788 @ 0x020a9788 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch16.json; original draft retained for referenced provenance.
// FUN_020a9788 @ 0x020a9788 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reset table and release optional buffer without clearing field.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a9788.txt.
 */
extern void FUN_020ba8b4(void *),FUN_020ba8ac(void *); void *FUN_020a9788(unsigned int *self) { self[0]=0x020fc3f8; if(self[3]) FUN_020ba8b4((void *)self[3]); return self; }
