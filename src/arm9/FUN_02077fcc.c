// FUN_02077fcc @ 0x02077fcc (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch02-manifest.json; original draft retained for referenced provenance.
// FUN_02077fcc @ 0x02077fcc (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04.
 * Release valid handle by address through singleton, then store -1.
 * Object/field identities remain provisional.
 * Evidence: extracted/arm9/arm9.bin at the named address; PC-relative
 * literal values read directly from that image.
 */
extern void *FUN_020c1fc8(void);
extern void FUN_020c2624(void *,void *);
void FUN_02077fcc(unsigned int *self) {
    if(self[0]!=~0u) { FUN_020c2624(FUN_020c1fc8(),self+0); self[0]=~0u; }
}
