// FUN_0209dfb8 @ 0x0209dfb8 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_0209dfb8 @ 0x0209dfb8 (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Lazily allocate and construct owned child using fixed resource.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209dfb8.txt.
 */
extern void *FUN_020ba894(unsigned int),*FUN_0209e1d4(void *,void *); void FUN_0209dfb8(void **self) { if(!self[1]) { void *p=FUN_020ba894(16); if(p) p=FUN_0209e1d4(p,(void *)0x020fb5d8); self[1]=p; } }
