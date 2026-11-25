// FUN_02087718 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// FUN_02087718 @ 0x02087718 (inventory code 0x10, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Return global handle for signed index below four; target has no negative-index guard.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02087718.txt.
 */
extern unsigned int D_0211a550[];
unsigned int FUN_02087718(int index) { unsigned int value=0; if(index<4) value=D_0211a550[index]; return value; }
