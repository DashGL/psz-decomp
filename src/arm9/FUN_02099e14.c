// FUN_02099e14 @ 0x02099e14 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch02-manifest.json; original draft retained for referenced provenance.
// FUN_02099e14 @ 0x02099e14 (inventory code 0x26, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04.
 * Return 8-byte cell in 5x5 grid, or fallback record for null grid/invalid coordinates.
 * Object/field identities remain provisional.
 * Evidence: extracted/arm9/arm9.bin at the named address; PC-relative
 * literal values read directly from that image.
 */
void *FUN_02099e14(char *self,int x,int y) {
    char *grid=*(char **)(self+24);
    if(grid && x>=0 && x<5 && y>=0 && y<5) return grid+8*(x+5*y);
    return (void *)0x020f4658;
}
