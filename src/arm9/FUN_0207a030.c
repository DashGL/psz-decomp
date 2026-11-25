// FUN_0207a030 @ 0x0207a030 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch25-manifest.json; original draft retained for referenced provenance.
// FUN_0207a030 @ 0x0207a030 (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear flags +38 then set bit two when global feature predicate is true.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207a030.txt.
 */
extern int FUN_02084bf8(void *);
void FUN_0207a030(unsigned int *self) { self[14]=0; if(FUN_02084bf8((void *)0x0211a51c)) self[14]|=4; }
