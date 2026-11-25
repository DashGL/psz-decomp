// FUN_020bc750 @ 0x020bc750 (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_020bc750 @ 0x020bc750 (inventory code 0x12, thumb)
// check: 2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy two word pairs into receiver.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bc750.txt.
 */
void *FUN_020bc750(unsigned int *self,unsigned int *a,unsigned int *b) { self[0]=a[0]; self[1]=a[1]; self[2]=b[0]; self[3]=b[1]; return self; }
