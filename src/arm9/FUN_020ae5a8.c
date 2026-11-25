// FUN_020ae5a8 @ 0x020ae5a8 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch01-manifest.json; original draft retained for referenced provenance.
// FUN_020ae5a8 @ 0x020ae5a8 (inventory code 0x26, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04.
 * Count newline bytes in bounded text length and add one; null text gives zero.
 * Object/field identities remain provisional.
 * Evidence: extracted/arm9/arm9.bin at the named address; PC-relative
 * literal values read directly from that image.
 */
extern unsigned int FUN_020c3f6c(const char *,unsigned int);
unsigned int FUN_020ae5a8(const signed char *text) {
    unsigned int lines=0;
    if(text) { unsigned int length=FUN_020c3f6c((const char *)text,350); unsigned int i;
        for(i=0;i<length;i++) if(text[i]==10) lines++;
        lines++;
    }
    return lines;
}
