// FUN_02050bc4 @ 0x02050bc4 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch32-manifest.json; original draft retained for referenced provenance.
// FUN_02050bc4 @ 0x02050bc4 (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04.
 * When word +4 exists, decrement wrapping byte +c and call helper at zero; returns whether active.
 * Object/field identities remain provisional.
 * Evidence: extracted/arm9/arm9.bin at the named address; PC-relative
 * literal values read directly from that image.
 */
extern void FUN_02050be4(void *);
int FUN_02050bc4(unsigned char *self) {
    if(*(void **)(self+4)) {
        self[12]--; if(self[12]==0) FUN_02050be4(self);
        return 1;
    }
    return 0;
}
