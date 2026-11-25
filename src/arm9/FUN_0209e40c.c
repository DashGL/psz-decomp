// FUN_0209e40c @ 0x0209e40c (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_0209e40c @ 0x0209e40c (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Allocate and construct object with forwarded input.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209e40c.txt.
 */
extern void *FUN_020ba894(unsigned int),*FUN_0209e424(void *,void *); void *FUN_0209e40c(void *arg) { void *p=FUN_020ba894(424); if(p) p=FUN_0209e424(p,arg); return p; }
