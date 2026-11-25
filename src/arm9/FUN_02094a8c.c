// FUN_02094a8c @ 0x02094a8c (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_02094a8c @ 0x02094a8c (inventory code 0x24, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Allocate 796-byte object and forward four constructor arguments.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02094a8c.txt.
 */
extern void *FUN_020ba918(unsigned int),*FUN_02094ab8(void *,unsigned int,unsigned int,unsigned int,unsigned int); void *FUN_02094a8c(unsigned int a,unsigned int b,unsigned int c,unsigned int d) { void *p=FUN_020ba918(796); if(p) p=FUN_02094ab8(p,a,b,c,d); return p; }
