// FUN_02093c00 @ 0x02093c00 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch02-manifest.json; original draft retained for referenced provenance.
// FUN_02093c00 @ 0x02093c00 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04.
 * Read global slot if signed index is below 2 and storage exists; target has no negative-index guard.
 * Object/field identities remain provisional.
 * Evidence: extracted/arm9/arm9.bin at the named address; PC-relative
 * literal values read directly from that image.
 */
void *FUN_02093c00(int index) {
    if(index<2) { void **slots=*(void ***)0x0211a5c0; if(slots) return slots[index]; }
    return 0;
}
