// FUN_02080d10 @ 0x02080d10 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch20.json; original draft retained for referenced provenance.
// FUN_02080d10 @ 0x02080d10 (inventory code 0xa, thumb)
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Zero 772-byte object using fill helper.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02080d10.txt.
 */
extern void FUN_020656b8(void *,int,unsigned int);
void FUN_02080d10(void *self) { FUN_020656b8(self,0,772); }
