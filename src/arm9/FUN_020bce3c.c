// FUN_020bce3c @ 0x020bce3c (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch18.json; original draft retained for referenced provenance.
// FUN_020bce3c @ 0x020bce3c (inventory code 0x10, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04.
 * Forward argument through global receiver dispatch slot +10.
 * Object/field identities remain provisional.
 * Evidence: extracted/arm9/arm9.bin at the named address; PC-relative
 * literal values read directly from that image.
 */
void FUN_020bce3c(void *arg) {
    void *receiver=*(void **)0x0211b3b8;
    void (**table)(void *,void *)=*(void (***)(void *,void *))receiver;
    table[4](receiver,arg);
}
