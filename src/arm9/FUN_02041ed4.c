// FUN_02041ed4 @ 0x02041ed4 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch01-manifest.json; original draft retained for referenced provenance.
// FUN_02041ed4 @ 0x02041ed4 (inventory code 0x32, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04.
 * Reset dispatch table, cleanup, release optional +f8/+f4 buffers, then base cleanup.
 * Object/field identities remain provisional.
 * Evidence: extracted/arm9/arm9.bin at the named address; inventory code
 * extent above, literal pools resolved directly from PC-relative loads.
 */
extern void FUN_02042388(void *), FUN_020ba8c4(void *), FUN_0206e5bc(void *);
void *FUN_02041ed4(void **self) {
    self[0]=(void *)0x020f8e08;
    FUN_02042388(self);
    if(self[62]) FUN_020ba8c4(self[62]);
    if(self[61]) FUN_020ba8c4(self[61]);
    FUN_0206e5bc(self);
    return self;
}
