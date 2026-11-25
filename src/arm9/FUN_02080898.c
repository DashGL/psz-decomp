// FUN_02080898 @ 0x02080898 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_02080898 @ 0x02080898 (inventory code 0x26, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve one of four 28-byte global records.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02080898.txt.
 */
void *FUN_02080898(int index) { int valid; char *p; if(index>=0 && index<4) valid=1; else valid=0; if(valid) { p=*(char **)0x0211a4e8; if(p) return p+28*index; } return 0; }
