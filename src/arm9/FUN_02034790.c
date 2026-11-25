// FUN_02034790 @ 0x02034790 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch16-manifest.json; original draft retained for referenced provenance.
// FUN_02034790 @ 0x02034790 (inventory code 0x24, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04.
 * If global manager exists, release and clear both owner slots; manager captured once.
 * Object/field identities remain provisional.
 * Evidence: extracted/arm9/arm9.bin at the named address; PC-relative
 * literal values read directly from that image.
 */
extern void FUN_02033db0(void *,void *);
void FUN_02034790(void **self) {
    void *manager=*(void **)0x02108c84;
    if(manager) { int i; for(i=0;i<2;i++) { FUN_02033db0(manager,self[i]); self[i]=0; } }
}
