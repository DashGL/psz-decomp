// FUN_0200efe0 @ 0x0200efe0 (0x28, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch44-manifest.json; original draft retained for referenced provenance.
// FUN_0200efe0 @ 0x0200efe0 (inventory code 0x24, arm)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04.
 * Bounds-checked lookup through global +84; records are 16 bytes, result at +14.
 * Object/field identities remain provisional.
 * Evidence: extracted/arm9/arm9.bin at the named address; inventory code
 * extent above, literal pools resolved directly from PC-relative loads.
 */
void *FUN_0200efe0(unsigned int index) {
    char *root=*(char **)0x02102874;
    char *table=*(char **)(root+0x84);
    if(index>=*(unsigned int *)(table+8)) return 0;
    return *(void **)(table+20+16*index);
}
