// FUN_020bf0d8 @ 0x020bf0d8 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_020bf0d8 @ 0x020bf0d8 (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Allocate16708-byte global subsystem and construct, return true.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bf0d8.txt.
 */
extern void *FUN_020ba894(unsigned int),*FUN_020bf138(void *); int FUN_020bf0d8(void) { void *p=FUN_020ba894(16708); if(p) p=FUN_020bf138(p); *(void **)0x0211b3d4=p; return 1; }
