// FUN_020360a4 @ 0x020360a4 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch16-manifest.json; original draft retained for referenced provenance.
// FUN_020360a4 @ 0x020360a4 (inventory code 0x10, thumb)
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04.
 * Store bytes +2/+3 and signed fourth argument divided by four into byte zero; returns self.
 * Object/field identities remain provisional.
 * Evidence: extracted/arm9/arm9.bin at the named address; PC-relative
 * literal values read directly from that image.
 */
void *FUN_020360a4(unsigned char *self,int a,int b,int value) {
    self[2]=a; self[3]=b; self[0]=value/4; return self;
}
