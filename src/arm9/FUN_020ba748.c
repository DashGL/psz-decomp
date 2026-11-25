// FUN_020ba748 @ 0x020ba748 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch01-manifest.json; original draft retained for referenced provenance.
// FUN_020ba748 @ 0x020ba748 (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04.
 * For states 0/1 clean embedded +24 and set state 4; always set flag bit zero.
 * Object/field identities remain provisional.
 * Evidence: extracted/arm9/arm9.bin at the named address; PC-relative
 * literal values read directly from that image.
 */
extern void FUN_02059ffc(void *);
void FUN_020ba748(unsigned int *self) {
    if(self[8]<=1) { FUN_02059ffc(self+9); self[8]=4; }
    self[1]|=1;
}
