// FUN_020aff2c @ 0x020aff2c (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_020aff2c @ 0x020aff2c (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reset table and release optional buffer.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020aff2c.txt.
 */
extern void FUN_020ba8b4(void *),FUN_020ba8ac(void *); void *FUN_020aff2c(unsigned int *self) { self[0]=0x020fc5d8; if(self[3]) FUN_020ba8b4((void *)self[3]); FUN_020ba8ac(self); return self; }
