// FUN_020303bc @ 0x020303bc (0x60, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch01-manifest.json; original draft retained for referenced provenance.
// FUN_020303bc @ 0x020303bc (inventory code 0x5a, thumb)
// check: 2.0/sp2p3 target=0x60 candidate=0x60 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04.
 * Reset dispatch table, destroy owned words at +14/+10/+0c in reverse order, then clean base; returns self.
 * Object/field identities remain provisional.
 * Evidence: extracted/arm9/arm9.bin at the named address; inventory code
 * extent above, literal pools resolved directly from PC-relative loads.
 */
extern void FUN_02044864(void *), FUN_02044920(void *), FUN_02034714(void *), FUN_020ba8ac(void *), FUN_02030d94(void *);
void *FUN_020303bc(void **self) {
    void *child;
    self[0]=(void *)0x020f6bfc;
    child=self[5];
    if(child) { if(child) { FUN_02044864(child); FUN_020ba8ac(child); } self[5]=0; }
    child=self[4];
    if(child) { if(child) { FUN_02044920(child); FUN_020ba8ac(child); } self[4]=0; }
    child=self[3];
    if(child) { if(child) { FUN_02034714(child); FUN_020ba8ac(child); } self[3]=0; }
    FUN_02030d94(self);
    return self;
}
