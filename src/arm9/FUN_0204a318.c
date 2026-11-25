// FUN_0204a318 @ 0x0204a318 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch09-manifest.json; original draft retained for referenced provenance.
// FUN_0204a318 @ 0x0204a318 (inventory code 0x10, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04.
 * Initialize base, install dispatch table and initialize derived fields; returns self.
 * Object/field identities remain provisional.
 * Evidence: extracted/arm9/arm9.bin at the named address; PC-relative
 * literal values read directly from that image.
 */
extern void FUN_0204734c(void *);
void *FUN_0204a318(char *self) {
    FUN_0204734c(self);
    *(unsigned int *)self=0x020f90d4;
    return self;
}
