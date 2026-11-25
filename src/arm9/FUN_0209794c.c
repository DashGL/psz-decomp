// FUN_0209794c @ 0x0209794c (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_0209794c @ 0x0209794c (inventory code 0xe, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Store selection then update linked receiver with key and selection.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209794c.txt.
 */
extern void FUN_020980b8(void *,int,int); void FUN_0209794c(int *self,int value) { self[3]=value; FUN_020980b8((void *)self[1],self[0],self[3]); }
