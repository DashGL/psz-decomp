// FUN_020be428 @ 0x020be428 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_020be428 @ 0x020be428 (inventory code 0x24, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Destroy global manager and shut down its pool.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020be428.txt.
 */
extern void FUN_020bedf0(void *),FUN_020ba8ac(void *),FUN_020bf0f8(void); void FUN_020be428(void) { void *p=*(void **)0x0211b3d0; if(p) { if(p) { FUN_020bedf0(p); FUN_020ba8ac(p); } *(void **)0x0211b3d0=0; } FUN_020bf0f8(); }
