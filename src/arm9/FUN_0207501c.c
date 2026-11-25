// FUN_0207501c @ 0x0207501c (0x22, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch04-manifest.json; original draft retained for referenced provenance.
// FUN_0207501c @ 0x0207501c (inventory code 0x22, thumb)
// check: 2.0/sp2p3 target=0x22 candidate=0x22 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04.
 * Decode packed handle: low 16 bits index 8-byte records, high 16 bits must match generation at +6; rejects -1.
 * Object/field identities remain provisional.
 * Evidence: extracted/arm9/arm9.bin at the named address; PC-relative
 * literal values read directly from that image.
 */
void *FUN_0207501c(char *self,int handle) {
    if(handle!=-1) {
        char *record=*(char **)(self+0xb0)+8*(unsigned short)handle;
        if(*(unsigned short *)(record+6)==(unsigned short)(handle>>16)) return record;
    }
    return 0;
}
