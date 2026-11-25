// FUN_02079958 @ 0x02079958 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch02-manifest.json; original draft retained for referenced provenance.
// FUN_02079958 @ 0x02079958 (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04.
 * Resolve word +8 into +c, clear halfword +10, and initialize resolved object.
 * Object/field identities remain provisional.
 * Evidence: extracted/arm9/arm9.bin at the named address; PC-relative
 * literal values read directly from that image.
 */
extern void *FUN_020ba440(unsigned int);
extern void FUN_0209cc0c(void *);
void FUN_02079958(char *self) {
    *(void **)(self+12)=FUN_020ba440(*(unsigned int *)(self+8));
    *(unsigned short *)(self+16)=0;
    FUN_0209cc0c(*(void **)(self+12));
}
