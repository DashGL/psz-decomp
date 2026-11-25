// FUN_02049f40 @ 0x02049f40 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch09-manifest.json; original draft retained for referenced provenance.
// FUN_02049f40 @ 0x02049f40 (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04.
 * Initialize base, install dispatch table and initialize derived fields; returns self.
 * Object/field identities remain provisional.
 * Evidence: extracted/arm9/arm9.bin at the named address; PC-relative
 * literal values read directly from that image.
 */
extern void FUN_0204772c(void *);
void *FUN_02049f40(char *self) {
    FUN_0204772c(self);
    *(unsigned int *)self=0x020f9014;
    *(unsigned int *)(self+0x16c)=0;
    *(unsigned short *)(self+0x170)=0;
    return self;
}
