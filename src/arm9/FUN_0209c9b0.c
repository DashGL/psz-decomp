// FUN_0209c9b0 @ 0x0209c9b0 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_0209c9b0 @ 0x0209c9b0 (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Lazily allocate sixteen-byte global object with resource.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209c9b0.txt.
 */
extern void *FUN_020ba894(unsigned int),*FUN_0209e1d4(void *,void *); void FUN_0209c9b0(void) { if(!*(void **)0x0211a620) { void *p=FUN_020ba894(16); if(p) p=FUN_0209e1d4(p,(void *)0x020fb4c0); *(void **)0x0211a620=p; } }
