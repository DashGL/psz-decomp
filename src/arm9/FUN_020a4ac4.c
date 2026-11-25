// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x54, exact bytes and relocation targets.
// ROM pool-base externs retain address materialization and register scheduling.
extern unsigned char DAT_020fc018[];
extern unsigned char DAT_020fc034[];
extern unsigned char DAT_0211a664[];
// FUN_020a4ac4 @ 0x020a4ac4 (inventory code 0x46, thumb)
// check: 2.0/sp2p3 target=0x54 candidate=0x54 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Release resource handle and destroy panel bases and owner.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a4ac4.txt.
 */
extern void *FUN_020c1fc8(void);extern void FUN_020c2624(void *,void *),FUN_020a4fc8(void *),FUN_020a4988(void *),FUN_020b9e28(void *),FUN_020ba940(void *);void *FUN_020a4ac4(char *s){*(unsigned int *)s=((unsigned int)DAT_020fc018 + 0u);*(unsigned int *)(s+32)=((unsigned int)DAT_020fc034 + 0u);if(*(int *)(s+56)!=-1)FUN_020c2624(FUN_020c1fc8(),s+56);FUN_020a4fc8(s);*(int *)((unsigned int)DAT_0211a664 + 20u)=0;FUN_020a4988(s+32);FUN_020b9e28(s);FUN_020ba940(s);return s;}
