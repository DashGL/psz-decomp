// FUN_020350b0 @ 0x020350b0 (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch16-manifest.json; original draft retained for referenced provenance.
// FUN_020350b0 @ 0x020350b0 (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04.
 * Destroy optional owned child +c, free storage and clear slot.
 * Object/field identities remain provisional.
 * Evidence: extracted/arm9/arm9.bin at the named address; PC-relative
 * literal values read directly from that image.
 */
extern void FUN_020bc864(void *), FUN_020ba8ac(void *);
void FUN_020350b0(void **self) {
    void *child=self[3];
    if(child) { if(child) { FUN_020bc864(child); FUN_020ba8ac(child); } self[3]=0; }
}
