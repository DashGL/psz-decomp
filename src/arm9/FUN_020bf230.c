// FUN_020bf230 @ 0x020bf230 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch01-manifest.json; original draft retained for referenced provenance.
// FUN_020bf230 @ 0x020bf230 (inventory code 0x14, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04.
 * Clear allocation byte indexed by signed division of record offset by 52.
 * Object/field identities remain provisional.
 * Evidence: extracted/arm9/arm9.bin at the named address; PC-relative
 * literal values read directly from that image.
 */
extern int FUN_0200a5ac(int, int);
void FUN_020bf230(char *self, char *record) {
    int index=FUN_0200a5ac(record-(self+0x60),52);
    self[index]=0;
}
