// FUN_020be404 @ 0x020be404 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_020be404 @ 0x020be404 (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize shared subsystem then allocate2480-byte global object; return true.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020be404.txt.
 */
extern int FUN_020bf0d8(void); extern void *FUN_020ba894(unsigned int),*FUN_020be45c(void *); int FUN_020be404(void) { void *p; FUN_020bf0d8(); p=FUN_020ba894(2480); if(p) p=FUN_020be45c(p); *(void **)0x0211b3d0=p; return 1; }
