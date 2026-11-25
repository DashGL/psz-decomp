// FUN_020a59ac - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_020a59ac @ 0x020a59ac (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Release optional global buffer then clear field.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a59ac.txt.
 */
extern char G_0211A984[];
extern void FUN_020ba8ac(void *); void FUN_020a59ac(void) { void *p=((void **)G_0211A984)[2]; if(p) { FUN_020ba8ac(p); ((void **)G_0211A984)[2]=0; } }
