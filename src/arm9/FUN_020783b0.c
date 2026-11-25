// FUN_020783b0 @ 0x020783b0 (0xe, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch26-manifest.json; original draft retained for referenced provenance.
// FUN_020783b0 @ 0x020783b0 (inventory code 0xe, thumb)
// check: 2.0/sp2p3 target=0xe candidate=0xe words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear halfword/bytes, invalidate word +8, preserve other fields; receiver retained.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020783b0.txt.
 */
void *FUN_020783b0(char *self) { *(unsigned short *)self=0; *(int *)(self+8)=-1; self[12]=0; self[13]=0; return self; }
