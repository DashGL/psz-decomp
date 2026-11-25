// FUN_020bc2ac - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_020bc2ac @ 0x020bc2ac (inventory code 0x2c, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Test global unsigned-halfword point strictly inside signed rectangle; edges excluded.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bc2ac.txt.
 */
extern char G_0211B360[];
int FUN_020bc2ac(int *rect) {
    int x=((unsigned short *)G_0211B360)[8];
    int y=((unsigned short *)G_0211B360)[9];
    if(x>rect[0] && x<rect[0]+rect[2] && y>rect[1] && y<rect[1]+rect[3]) return 1;
    return 0;
}
