// FUN_020781fc @ 0x020781fc (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch02-manifest.json; original draft retained for referenced provenance.
// FUN_020781fc @ 0x020781fc (inventory code 0x10, thumb)
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04.
 * Return embedded +4 when halfword +14 bit zero is set.
 * Object/field identities remain provisional.
 * Evidence: extracted/arm9/arm9.bin at the named address; PC-relative
 * literal values read directly from that image.
 */
void *FUN_020781fc(char *self) {
    if(*(unsigned short *)(self+20)&1) return self+4;
    return 0;
}
