// FUN_020b77a4 @ 0x020b77a4 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_020b77a4 @ 0x020b77a4 (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Lazily allocate412-byte global object.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b77a4.txt.
 */
extern void *FUN_020ba894(unsigned int),*FUN_020b74f0(void *); void FUN_020b77a4(void) { if(!*(void **)0x0211b278) { void *p=FUN_020ba894(412); if(p) p=FUN_020b74f0(p); *(void **)0x0211b278=p; } }
