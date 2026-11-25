// FUN_020728c4 @ 0x020728c4 (0xe, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch06-manifest.json; original draft retained for referenced provenance.
// FUN_020728c4 @ 0x020728c4 (inventory code 0xe, thumb)
// check: 2.0/sp2p3 target=0xe candidate=0xe words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Release word +4 allocation; return receiver.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020728c4.txt.
 */
extern void FUN_020ba8c4(void *);
void *FUN_020728c4(void **self) { FUN_020ba8c4(self[1]); return self; }
