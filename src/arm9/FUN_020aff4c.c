// FUN_020aff4c @ 0x020aff4c (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_020aff4c @ 0x020aff4c (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve signed modulo index into records of stride772.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020aff4c.txt.
 */
void *FUN_020aff4c(int *self,int index) { int n=self[1]; int slot=(index+n)%n; return (char *)self[3]+772*slot; }
