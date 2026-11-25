// FUN_020bceb4 @ 0x020bceb4 (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_020bceb4 @ 0x020bceb4 (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize embedded record, clear20 bytes and initialize receiver.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bceb4.txt.
 */
extern void FUN_020c4434(void *),FUN_020656b8(void *,unsigned int,unsigned int),FUN_020be204(void *); void *FUN_020bceb4(char *self) { FUN_020c4434(self+4); FUN_020656b8(self+4,0,20); FUN_020be204(self); return self; }
