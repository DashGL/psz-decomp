// FUN_02037a84 @ 0x02037a84 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch15-manifest.json; original draft retained for referenced provenance.
// FUN_02037a84 @ 0x02037a84 (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04.
 * If global manager exists, release stored object and clear it; absent manager leaves self untouched.
 * Object/field identities remain provisional.
 * Evidence: extracted/arm9/arm9.bin at the named address; PC-relative
 * literal values read directly from that image.
 */
extern void FUN_02033db0(void *,void *);
void FUN_02037a84(void **self) {
    void *manager=*(void **)0x02108c84;
    if(manager) { FUN_02033db0(manager,*self); *self=0; }
}
