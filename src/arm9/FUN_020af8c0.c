// FUN_020af8c0 @ 0x020af8c0 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_020af8c0 @ 0x020af8c0 (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Apply mapped halfword value to optional owned object.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020af8c0.txt.
 */
extern unsigned int FUN_020af5bc(int); extern void FUN_020487c8(void *,unsigned int); void FUN_020af8c0(char *self) { if(self && *(void **)(self+48)) { unsigned int value=FUN_020af5bc(*(int *)(self+264)); FUN_020487c8(*(void **)(self+48),value); } }
