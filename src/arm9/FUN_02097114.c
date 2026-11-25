// FUN_02097114 @ 0x02097114 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_02097114 @ 0x02097114 (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Report false for active descriptor, else test nonpositive count.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02097114.txt.
 */
extern int FUN_02097134(void *); int FUN_02097114(char *self) { if(FUN_02097134(self+36)) return 0; if(*(int *)(self+44)<=0) return 1; return 0; }
