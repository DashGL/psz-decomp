// FUN_020a0590 @ 0x020a0590 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_020a0590 @ 0x020a0590 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Allocate and construct object with incoming argument.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a0590.txt.
 */
extern void *FUN_020ba894(unsigned int),*FUN_020a05b4(void *,void *); void *FUN_020a0590(void *arg) { void *p=FUN_020ba894(80); if(p) p=FUN_020a05b4(p,arg); return p; }
