// FUN_0204b130 @ 0x0204b130 (0x5c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch03-manifest.json; original draft retained for referenced provenance.
// FUN_0204b130 @ 0x0204b130 (inventory code 0x58, thumb)
// check: 2.0/sp2p3 target=0x5c candidate=0x5c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04.
 * Cleanup invokes optional callback at +f0 with +f4/+f8, detaches +30 and unregisters self.
 * Object/field identities remain provisional.
 * Evidence: extracted/arm9/arm9.bin at the named address; inventory code
 * extent above, literal pools resolved directly from PC-relative loads.
 */
extern void FUN_0206e728(void *, int), FUN_0206e738(void *, int), FUN_0204b4ec(void *), FUN_02046474(void), FUN_0204a5d0(void *, void *);
extern void *FUN_020464bc(void), *FUN_0204a580(void);
extern void FUN_020464c8(void);
void *FUN_0204b130(void **self) {
    void (*callback)(void *,unsigned);
    self[0]=(void *)0x020f9208;
    callback=(void (*)(void *,unsigned))self[60];
    if(callback) callback(self[61],(unsigned)self[62]);
    if(self[12]) { FUN_0206e728(self[12],0); FUN_0206e738(self[12],0); }
    FUN_0204b4ec(self);
    if(FUN_020464bc()==self) { FUN_020464c8(); FUN_02046474(); }
    FUN_0204a5d0(FUN_0204a580(),self);
    return self;
}
