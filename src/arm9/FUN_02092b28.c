// FUN_02092b28 @ 0x02092b28 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_02092b28 @ 0x02092b28 (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Allocate and construct with forwarded argument.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02092b28.txt.
 */
extern void *FUN_020ba894(unsigned int),*FUN_02092b40(void *,void *); void *FUN_02092b28(void *arg) { void *p=FUN_020ba894(416); if(p) p=FUN_02092b40(p,arg); return p; }
