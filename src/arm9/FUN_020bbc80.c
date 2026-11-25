// FUN_020bbc80 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_020bbc80 @ 0x020bbc80 (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Register callback with incoming argument and require status two.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bbc80.txt.
 */
extern char G_0211B2C0[];
extern int FUN_02055870(void *,void *); extern void FUN_020bbca4(void); int FUN_020bbc80(void *arg) { if(FUN_02055870((void *)FUN_020bbca4,arg)!=2) { ((unsigned int *)G_0211B2C0)[20]=1; return 0; } return 1; }
