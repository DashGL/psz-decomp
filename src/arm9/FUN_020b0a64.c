// FUN_020b0a64 @ 0x020b0a64 (0x22, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_020b0a64 @ 0x020b0a64 (inventory code 0x22, thumb)
// check: 2.0/sp2p3 target=0x22 candidate=0x22 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Store duplicate vector fields and forward to optional child.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b0a64.txt.
 */
extern void FUN_0203807c(void *,unsigned int,unsigned int,unsigned int); void FUN_020b0a64(unsigned int *self,unsigned int a,unsigned int b,unsigned int c) { self[13]=a; self[16]=a; self[14]=b; self[17]=b; self[15]=c; self[18]=c; if(self[8]) FUN_0203807c((void *)self[8],self[13],self[14],self[15]); }
