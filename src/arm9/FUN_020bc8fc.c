// FUN_020bc8fc @ 0x020bc8fc (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_020bc8fc @ 0x020bc8fc (inventory code 0x14, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Subtract two word pairs into destination.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bc8fc.txt.
 */
void FUN_020bc8fc(unsigned int *dest,unsigned int *a,unsigned int *b) { unsigned int y=a[1]-b[1]; unsigned int x=a[0]-b[0]; dest[0]=x; dest[1]=y; }
