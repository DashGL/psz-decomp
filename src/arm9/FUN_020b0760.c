// FUN_020b0760 @ 0x020b0760 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch01-manifest.json; original draft retained for referenced provenance.
// FUN_020b0760 @ 0x020b0760 (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04.
 * Query bits 3 through 6 of first word; out-of-range unsigned index returns false.
 * Object/field identities remain provisional.
 * Evidence: extracted/arm9/arm9.bin at the named address; inventory code
 * extent above, literal pools resolved directly from PC-relative loads.
 */
int FUN_020b0760(unsigned int *self, unsigned int index) {
    if(index<4) { if(*self & (1u<<(index+3))) return 1; return 0; }
    return 0;
}
