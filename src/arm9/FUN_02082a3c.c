// FUN_02082a3c @ 0x02082a3c (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_02082a3c @ 0x02082a3c (inventory code 0x12, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear array/count at +4ec/+4f0 and invalidate index +4f4; receiver retained.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02082a3c.txt.
 */
void *FUN_02082a3c(char *self) { *(void **)(self+0x4ec)=0; *(int *)(self+0x4f0)=0; *(int *)(self+0x4f4)=-1; return self; }
