// FUN_020348e4 @ 0x020348e4 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch16-manifest.json; original draft retained for referenced provenance.
// FUN_020348e4 @ 0x020348e4 (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04.
 * Copy three words to +6c/+70/+74 of each of two nonnull objects.
 * Object/field identities remain provisional.
 * Evidence: extracted/arm9/arm9.bin at the named address; PC-relative
 * literal values read directly from that image.
 */
void FUN_020348e4(unsigned int **objects,const unsigned int *value) {
    int i;
    for(i=0;i<2;i++) { unsigned int *object=objects[i]; if(object) {
        object[27]=value[0]; object[28]=value[1]; object[29]=value[2];
    } }
}
