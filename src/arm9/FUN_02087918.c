// FUN_02087918 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_02087918 @ 0x02087918 (inventory code 0x42, thumb)
// check: 2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Release owned allocation, unregister owner and delete base.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02087918.txt.
 */
extern char G_0211A540[];
extern void FUN_020ba8c4(void *),FUN_02047434(void *),FUN_020ba8ac(void *);void *FUN_02087918(char *s){*(unsigned int *)s=0x020fa9a4;if(*(void **)(s+380))FUN_020ba8c4(*(void **)(s+380));if(((void **)G_0211A540)[*(int *)(s+232)]==s)((void **)G_0211A540)[*(int *)(s+232)]=0;*(int *)(s+268)=0;FUN_02047434(s);FUN_020ba8ac(s);return s;}
