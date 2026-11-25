// FUN_020b4414 @ 0x020b4414 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_020b4414 @ 0x020b4414 (inventory code 0x2c, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Allocate, construct and initialize object with three incoming arguments.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b4414.txt.
 */
extern void *FUN_020ba894(unsigned int),*FUN_020b4450(void *); extern void FUN_020b44a0(void *,void *,void *,unsigned int); void *FUN_020b4414(void *a,void *b,unsigned int c) { void *p=FUN_020ba894(32); if(p) p=FUN_020b4450(p); if(p) FUN_020b44a0(p,a,b,c); return p; }
