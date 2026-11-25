// FUN_02047b3c @ 0x02047b3c (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch10-manifest.json; original draft retained for referenced provenance.
// FUN_02047b3c @ 0x02047b3c (inventory code 0x24, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04.
 * Initialize base, install dispatch table and initialize derived fields; returns self.
 * Object/field identities remain provisional.
 * Evidence: extracted/arm9/arm9.bin at the named address; PC-relative
 * literal values read directly from that image.
 */
extern void FUN_0204734c(void *);
void *FUN_02047b3c(char *self) {
    FUN_0204734c(self);
    *(unsigned int *)self=0x020f9194;
    *(unsigned int *)(self+0x104)=149;
    *(unsigned int *)(self+0x108)=0;
    *(unsigned int *)(self+0x10c)=0;
    return self;
}
