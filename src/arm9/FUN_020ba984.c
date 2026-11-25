// FUN_020ba984 @ 0x020ba984 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_020ba984 @ 0x020ba984 (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reset table, conditionally release field+18 and unconditionally field+4.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020ba984.txt.
 */
extern void FUN_020ba8c4(void *); void *FUN_020ba984(unsigned int *self) { self[0]=0x020fc8e4; if(self[6]) FUN_020ba8c4((void *)self[6]); FUN_020ba8c4((void *)self[1]); return self; }
