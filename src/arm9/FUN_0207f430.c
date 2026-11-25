// FUN_0207f430 @ 0x0207f430 (0x2a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch02-manifest.json; original draft retained for referenced provenance.
// FUN_0207f430 @ 0x0207f430 (inventory code 0x2a, thumb)
// check: 2.0/sp2p3 target=0x2a candidate=0x2a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Validate first triple, then compare its first two signed bytes with second triple.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207f430.txt.
 */
extern int FUN_0207f4b4(void *);
int FUN_0207f430(signed char *a,signed char *b) {
    if(!FUN_0207f4b4(a)) return 0;
    if(b[0]!=a[0] || b[1]!=a[1]) return 0;
    return 1;
}
