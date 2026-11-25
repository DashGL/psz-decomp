// FUN_020a3b50 @ 0x020a3b50 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_020a3b50 @ 0x020a3b50 (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Allocate and construct with incoming argument.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a3b50.txt.
 */
extern void *FUN_020ba894(unsigned int),*FUN_020a3b68(void *,void *); void *FUN_020a3b50(void *arg) { void *p=FUN_020ba894(380); if(p) p=FUN_020a3b68(p,arg); return p; }
