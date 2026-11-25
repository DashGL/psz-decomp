// FUN_02034afc @ 0x02034afc (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch16-manifest.json; original draft retained for referenced provenance.
// FUN_02034afc @ 0x02034afc (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04.
 * Test mask against optional child halfword +20.
 * Object/field identities remain provisional.
 * Evidence: extracted/arm9/arm9.bin at the named address; PC-relative
 * literal values read directly from that image.
 */
int FUN_02034afc(char *self,unsigned int mask) {
    char *child=*(char **)(self+16);
    if(child) { if(*(unsigned short *)(child+32)&mask) return 1; return 0; }
    return 0;
}
