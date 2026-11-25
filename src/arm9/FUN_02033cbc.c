// FUN_02033cbc @ 0x02033cbc (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch01-manifest.json; original draft retained for referenced provenance.
// FUN_02033cbc @ 0x02033cbc (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04.
 * Bounds-checked 20-byte record lookup; rejects null storage and index ffff.
 * Object/field identities remain provisional.
 * Evidence: extracted/arm9/arm9.bin at the named address; inventory code
 * extent above, literal pools resolved directly from PC-relative loads.
 */
void *FUN_02033cbc(char *self, unsigned int index) {
    char *base=*(char **)(self+8);
    if(base && index!=0xffff && index<*(unsigned short *)(self+18)) return base+20*index;
    return 0;
}
