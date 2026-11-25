// FUN_020a96d0 @ 0x020a96d0 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_020a96d0 @ 0x020a96d0 (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Apply thirty times incoming duration to optional global receiver identifier.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a96d0.txt.
 */
extern void FUN_0204e6c8(unsigned int,unsigned int); void FUN_020a96d0(unsigned int duration) { char *p=*(char **)0x02108d04; if(p) FUN_0204e6c8(*(unsigned int *)(p+252),30*duration); }
