// FUN_020765f8 @ 0x020765f8 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch01-manifest.json; original draft retained for referenced provenance.
// FUN_020765f8 @ 0x020765f8 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04.
 * Reset dispatch table and release word +8 through global manager; returns self.
 * Object/field identities remain provisional.
 * Evidence: extracted/arm9/arm9.bin at the named address; inventory code
 * extent above, literal pools resolved directly from PC-relative loads.
 */
extern void FUN_0203528c(void *, void *);
void *FUN_020765f8(void **self) {
    self[0]=(void *)0x020fa0b0;
    FUN_0203528c(*(void **)0x02108cf4,self[2]);
    return self;
}
