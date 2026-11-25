// FUN_02085438 @ 0x02085438 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch02-manifest.json; original draft retained for referenced provenance.
// FUN_02085438 @ 0x02085438 (inventory code 0x14, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04.
 * Return signed halfword +25c from global manager, or zero when absent.
 * Object/field identities remain provisional.
 * Evidence: extracted/arm9/arm9.bin at the named address; PC-relative
 * literal values read directly from that image.
 */
int FUN_02085438(void) {
    char *manager=*(char **)0x0211a52c;
    if(manager) return *(short *)(manager+0x25c);
    return 0;
}
