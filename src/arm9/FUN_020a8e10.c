// FUN_020a8e10 @ 0x020a8e10 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch16.json; original draft retained for referenced provenance.
// FUN_020a8e10 @ 0x020a8e10 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Invoke helper using optional global receiver identifier, always return zero.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a8e10.txt.
 */
extern void FUN_020a8e2c(unsigned int); int FUN_020a8e10(void) { char *p=*(char **)0x02108d04; if(p) FUN_020a8e2c(*(unsigned int *)(p+252)); return 0; }
