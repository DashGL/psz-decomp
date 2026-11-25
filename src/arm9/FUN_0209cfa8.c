// FUN_0209cfa8 @ 0x0209cfa8 (0x2e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_0209cfa8 @ 0x0209cfa8 (inventory code 0x2e, thumb)
// check: 2.0/sp2p3 target=0x2e candidate=0x2e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Set bit indexed by validated twenty-by-four-by-two coordinates.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209cfa8.txt.
 */
extern void FUN_0207f0b4(void *,unsigned int); void FUN_0209cfa8(void **self,int a,int b,int c) { void *p=self[0]; if(p && a>=0 && a<20 && b>=0 && b<4 && c>=0 && c<2) FUN_0207f0b4(p,8*a+2*b+c); }
