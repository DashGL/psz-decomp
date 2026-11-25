// FUN_020ba9a4 @ 0x020ba9a4 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_020ba9a4 @ 0x020ba9a4 (inventory code 0x22, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Destroy optional and mandatory buffers then free self.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020ba9a4.txt.
 */
extern void FUN_020ba8c4(void *),FUN_020ba8ac(void *); void *FUN_020ba9a4(char *self) { *(unsigned int *)self=0x020fc8e4; if(*(void **)(self+24)) FUN_020ba8c4(*(void **)(self+24)); FUN_020ba8c4(*(void **)(self+4)); FUN_020ba8ac(self); return self; }
