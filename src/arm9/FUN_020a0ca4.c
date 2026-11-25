// FUN_020a0ca4 @ 0x020a0ca4 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_020a0ca4 @ 0x020a0ca4 (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reset table and release optional buffer before returning receiver.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a0ca4.txt.
 */
extern void FUN_020ba8b4(void *),FUN_020ba8ac(void *); void *FUN_020a0ca4(unsigned int *self) { self[0]=0x020fbb94; if(self[5]) { FUN_020ba8b4((void *)self[5]); self[5]=0; } FUN_020ba8ac(self); return self; }
