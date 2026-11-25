// FUN_0208546c @ 0x0208546c (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch02-manifest.json; original draft retained for referenced provenance.
// FUN_0208546c @ 0x0208546c (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04.
 * Return global manager word +254, or all-ones sentinel when absent.
 * Object/field identities remain provisional.
 * Evidence: extracted/arm9/arm9.bin at the named address; PC-relative
 * literal values read directly from that image.
 */
unsigned int FUN_0208546c(void) {
    char *manager=*(char **)0x0211a52c;
    if(manager) return *(unsigned int *)(manager+0x254);
    return ~0u;
}
