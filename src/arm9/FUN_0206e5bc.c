// FUN_0206e5bc @ 0x0206e5bc (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch01-manifest.json; original draft retained for referenced provenance.
// FUN_0206e5bc @ 0x0206e5bc (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04.
 * Reset dispatch table and run two cleanup helpers; returns self.
 * Object/field identities remain provisional.
 * Evidence: extracted/arm9/arm9.bin at the named address; inventory code
 * extent above, literal pools resolved directly from PC-relative loads.
 */
extern void FUN_0206e670(void *), FUN_0206e6f4(void *);
void *FUN_0206e5bc(void **self) {
    self[0]=(void *)0x020f9818;
    FUN_0206e670(self); FUN_0206e6f4(self);
    return self;
}
