// FUN_020bd7e0 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_020bd7e0 @ 0x020bd7e0 (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Forward three incoming inputs to optional global receiver.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bd7e0.txt.
 */
extern char G_0211B3BC[];
extern void FUN_020bdb00(void *,unsigned int,unsigned int,unsigned int); void FUN_020bd7e0(unsigned int a,unsigned int b,unsigned int c) { void *p=((void **)G_0211B3BC)[2]; if(p) FUN_020bdb00(p,a,b,c); }
