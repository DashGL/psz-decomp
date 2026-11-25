// FUN_0206d0d8 @ 0x0206d0d8 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch07-manifest.json; original draft retained for referenced provenance.
// FUN_0206d0d8 @ 0x0206d0d8 (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04.
 * Validate signed coordinate pair in 9 by 12 bounds.
 * Object/field identities remain provisional.
 * Evidence: extracted/arm9/arm9.bin at the named address; PC-relative
 * literal values read directly from that image.
 */
int FUN_0206d0d8(int *pair) {
    if(pair[0]<0 || pair[0]>=9) return 0;
    if(pair[1]<0 || pair[1]>=12) return 0;
    return 1;
}
