// FUN_02096598 @ 0x02096598 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch02-manifest.json; original draft retained for referenced provenance.
// FUN_02096598 @ 0x02096598 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04.
 * Zero six bytes through fill helper, then explicitly clear trailing two bytes.
 * Object/field identities remain provisional.
 * Evidence: extracted/arm9/arm9.bin at the named address; PC-relative
 * literal values read directly from that image.
 */
extern void FUN_020654b4(int,void *,unsigned int);
void FUN_02096598(char *self) {
    FUN_020654b4(0,self,6); self[6]=0; self[7]=0;
}
