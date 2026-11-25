// FUN_020be204 @ 0x020be204 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_020be204 @ 0x020be204 (inventory code 0x12, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear first four bytes then embedded20-byte field.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020be204.txt.
 */
extern void FUN_020656b8(void *,unsigned int,unsigned int); void FUN_020be204(char *self) { self[0]=0; self[1]=0; self[2]=0; self[3]=0; FUN_020656b8(self+4,0,20); }
