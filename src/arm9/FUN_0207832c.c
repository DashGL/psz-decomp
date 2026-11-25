// FUN_0207832c @ 0x0207832c (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch26-manifest.json; original draft retained for referenced provenance.
// FUN_0207832c @ 0x0207832c (inventory code 0x14, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Return 100000 when global feature predicate is true, otherwise zero.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207832c.txt.
 */
extern int FUN_02084bf8(void *);
int FUN_0207832c(void) { if(FUN_02084bf8((void *)0x0211a51c)) return 100000; return 0; }
