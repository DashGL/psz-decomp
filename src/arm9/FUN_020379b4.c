// FUN_020379b4 @ 0x020379b4 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch15-manifest.json; original draft retained for referenced provenance.
// FUN_020379b4 @ 0x020379b4 (inventory code 0x24, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04.
 * Decrement wrapping reference byte for active record; at zero clear words +c/+8, invalidate halfword +4, return true.
 * Object/field identities remain provisional.
 * Evidence: extracted/arm9/arm9.bin at the named address; PC-relative
 * literal values read directly from that image.
 */
int FUN_020379b4(unsigned char *self) {
    if(*(void **)(self+12)) {
        self[16]--;
        if(!self[16]) {
            *(void **)(self+12)=0; *(void **)(self+8)=0;
            *(unsigned short *)(self+4)=0xffff; return 1;
        }
    }
    return 0;
}
