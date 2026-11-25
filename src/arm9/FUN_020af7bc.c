// FUN_020af7bc @ 0x020af7bc (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch01-manifest.json; original draft retained for referenced provenance.
// FUN_020af7bc @ 0x020af7bc (inventory code 0x22, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04.
 * Base initializer followed by dispatch-table install and derived-field initialization; returns self.
 * Object/field identities remain provisional.
 * Evidence: extracted/arm9/arm9.bin at the named address; PC-relative
 * literal values read directly from that image.
 */
extern void FUN_0204734c(void *);
void *FUN_020af7bc(unsigned int *self) {
    FUN_0204734c(self);
    self[0]=0x020fc558;
    self[65]=0;
    self[66]=1;
    self[67]=1;
    return self;
}
