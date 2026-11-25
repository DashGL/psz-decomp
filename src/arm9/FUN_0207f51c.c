// FUN_0207f51c @ 0x0207f51c (0xc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch26-manifest.json; original draft retained for referenced provenance.
// FUN_0207f51c @ 0x0207f51c (inventory code 0x6, thumb)
// check: 2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reset embedded record at +4 via tail helper.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207f51c.txt.
 */
extern void *FUN_0207f4d4(void *);
void *FUN_0207f51c(char *self) { return FUN_0207f4d4(self+4); }
