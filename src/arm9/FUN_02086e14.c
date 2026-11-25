// FUN_02086e14 @ 0x02086e14 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_02086e14 @ 0x02086e14 (inventory code 0x24, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Destroy global object then shut down subsystem.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02086e14.txt.
 */
extern void FUN_0208747c(void *),FUN_020ba8ac(void *),FUN_020c4830(void); void FUN_02086e14(void) { void *p=*(void **)0x0211a530; if(p) { if(p) { FUN_0208747c(p); FUN_020ba8ac(p); } *(void **)0x0211a530=0; } FUN_020c4830(); }
