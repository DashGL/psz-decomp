// FUN_020a76e8 @ 0x020a76e8 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch16.json; original draft retained for referenced provenance.
// FUN_020a76e8 @ 0x020a76e8 (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Check signed coordinates in x [8,120), y [0,48).
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a76e8.txt.
 */
int FUN_020a76e8(int x,int y) { if(x<8 || x>=120) return 0; if(y<0 || y>=48) return 0; return 1; }
