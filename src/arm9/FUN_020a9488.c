// FUN_020a9488 @ 0x020a9488 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_020a9488 @ 0x020a9488 (inventory code 0x24, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy global five-word descriptor and invert predicate with zero mode.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a9488.txt.
 */
extern void FUN_02032dfc(void *,void *); extern int FUN_0206d36c(void *,int); int FUN_020a9488(void) { unsigned int local[5]; int result=0; FUN_02032dfc(local,*(void **)0x02108c64); if(!FUN_0206d36c(local,0)) result=1; return result; }
