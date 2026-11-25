// FUN_020848e0 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_020848e0 @ 0x020848e0 (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * For valid selector, conditionally truncate value to unsigned byte using lookup flag; invalid selector returns zero.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020848e0.txt.
 */
extern char G_020F2FE0[];
unsigned int FUN_020848e0(int selector,unsigned int value) { if(selector>=0 && selector<47) { if(((unsigned char *)G_020F2FE0)[selector]) value=(unsigned char)value; return value; } return 0; }
