// FUN_02048ed4 @ 0x02048ed4 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch10-manifest.json; original draft retained for referenced provenance.
// FUN_02048ed4 @ 0x02048ed4 (inventory code 0x28, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04.
 * Initialize base, resolve supplied object, retain result only when source flag bit 1 is set.
 * Object/field identities remain provisional.
 * Evidence: extracted/arm9/arm9.bin at the named address; PC-relative
 * literal values read directly from that image.
 */
extern void FUN_020473e8(void *,void *,int);
extern void *FUN_02047314(void *,int);
void FUN_02048ed4(char *self,void *arg,unsigned int *source) {
    FUN_020473e8(self,arg,0);
    *(void **)(self+0x104)=FUN_02047314(source,0);
    if(!(source[7]&2)) *(void **)(self+0x104)=0;
}
