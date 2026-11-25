// FUN_02047690 @ 0x02047690 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch10-manifest.json; original draft retained for referenced provenance.
// FUN_02047690 @ 0x02047690 (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04.
 * Initialize base with zero option, clear +104 and store third argument at +108.
 * Object/field identities remain provisional.
 * Evidence: extracted/arm9/arm9.bin at the named address; PC-relative
 * literal values read directly from that image.
 */
extern void FUN_020473e8(void *,void *,int);
void FUN_02047690(char *self,void *arg,void *value) {
    FUN_020473e8(self,arg,0);
    *(void **)(self+0x104)=0; *(void **)(self+0x108)=value;
}
