// FUN_02070e50 @ 0x02070e50 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch07-manifest.json; original draft retained for referenced provenance.
// FUN_02070e50 @ 0x02070e50 (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04.
 * Reset selected state words, then call global reset helpers with 16 and zero.
 * ABI review: c1ec4 consumes r0/r1; r1 is the zero used for stores.
 * Object/field identities remain provisional.
 * Evidence: extracted/arm9/arm9.bin at the named address; PC-relative
 * literal values read directly from that image.
 */
extern void FUN_020c1ec4(int, unsigned int);
extern void FUN_020c1988(int);
void FUN_02070e50(unsigned int *self) {
    self[5]=0; self[2]=0; self[3]=0; self[4]=0; self[10]=0;
    FUN_020c1ec4(16,0); FUN_020c1988(0);
}
