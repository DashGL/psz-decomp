// FUN_0209c588 @ 0x0209c588 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_0209c588 @ 0x0209c588 (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear first eight bytes then following 112 bytes.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209c588.txt.
 */
extern void FUN_020656b8(void *,unsigned int,unsigned int); void FUN_0209c588(char *self) { FUN_020656b8(self,0,8); FUN_020656b8(self+8,0,112); }
