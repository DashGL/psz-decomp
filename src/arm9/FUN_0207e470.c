// FUN_0207e470 @ 0x0207e470 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch02-manifest.json; original draft retained for referenced provenance.
// FUN_0207e470 @ 0x0207e470 (inventory code 0x24, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04.
 * Base initializer followed by dispatch-table install and derived-field initialization; returns self.
 * Object/field identities remain provisional.
 * Evidence: extracted/arm9/arm9.bin at the named address; PC-relative
 * literal values read directly from that image.
 */
extern void FUN_0204734c(void *);
void *FUN_0207e470(unsigned int *self) {
    FUN_0204734c(self);
    self[0]=0x020fa4c0;
    self[65]=31;
    self[66]=0;
    self[67]=0;
    return self;
}
