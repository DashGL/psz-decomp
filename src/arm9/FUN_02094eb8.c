// FUN_02094eb8 @ 0x02094eb8 (0x26, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_02094eb8 @ 0x02094eb8 (inventory code 0x26, thumb)
// check: 2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Release embedded state and optional child.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02094eb8.txt.
 */
extern void FUN_02094a64(void *),FUN_0203c824(void *); void FUN_02094eb8(char *self) { void *p; FUN_02094a64(self+596); p=*(void **)(self+592); if(p) { FUN_0203c824(p); *(void **)(self+592)=0; } }
