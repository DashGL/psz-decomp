// FUN_020bf29c @ 0x020bf29c (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch01-manifest.json; original draft retained for referenced provenance.
// FUN_020bf29c @ 0x020bf29c (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04.
 * Pop free-list head at +24c0, unlink it and set its active byte.
 * Object/field identities remain provisional.
 * Evidence: extracted/arm9/arm9.bin at the named address; PC-relative
 * literal values read directly from that image.
 */
void *FUN_020bf29c(char *self) {
    char *head=*(char **)(self+0x24c0);
    char *result=0;
    if(head) { char *next=*(char **)(head+4); result=head; *(void **)(head+4)=0; head[0]=1; *(char **)(self+0x24c0)=next; }
    return result;
}
