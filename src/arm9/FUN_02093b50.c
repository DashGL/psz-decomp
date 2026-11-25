// FUN_02093b50 @ 0x02093b50 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_02093b50 @ 0x02093b50 (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Lazily allocate eight-byte global object.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02093b50.txt.
 */
extern void *FUN_020ba894(unsigned int), *FUN_02093b9c(void *); void FUN_02093b50(void) { if(!*(void **)0x0211a5c0) { void *p=FUN_020ba894(8); if(p) p=FUN_02093b9c(p); *(void **)0x0211a5c0=p; } }
