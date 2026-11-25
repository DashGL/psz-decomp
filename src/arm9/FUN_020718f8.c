// FUN_020718f8 @ 0x020718f8 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch06-manifest.json; original draft retained for referenced provenance.
// FUN_020718f8 @ 0x020718f8 (inventory code 0x28, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Lazily allocate648-byte global object then reset it.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020718f8.txt.
 */
extern void *FUN_020ba894(unsigned int),*FUN_020718ac(void *); extern void FUN_02071924(void *); void FUN_020718f8(void) { if(!*(void **)0x0211a1fc) { void *p=FUN_020ba894(648); if(p) p=FUN_020718ac(p); *(void **)0x0211a1fc=p; } FUN_02071924(*(void **)0x0211a1fc); }
