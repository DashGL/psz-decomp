// FUN_0209945c @ 0x0209945c (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_0209945c @ 0x0209945c (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Allocate from optional global allocator with two caller inputs.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209945c.txt.
 */
extern void *FUN_020c13c8(void *,unsigned int,int); void *FUN_0209945c(unsigned int size,int alignment) { void **p=*(void ***)0x0211a618; if(p && *p) return FUN_020c13c8(*p,size,alignment); return 0; }
