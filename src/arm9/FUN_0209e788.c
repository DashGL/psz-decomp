// FUN_0209e788 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_0209e788 @ 0x0209e788 (inventory code 0x7a, thumb)
// check: 2.0/sp2p3 target=0x8c candidate=0x8c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Release object components and conditional manager reference.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209e788.txt.
 */
extern char UNK_020fb6cc[],UNK_020fb6fc[];extern int UNK_020fb624[],UNK_020fb604[];extern char *FUN_02090c20(void);extern void FUN_020306fc(void *),FUN_02099f10(void *),FUN_0209a458(void *),FUN_020303bc(void *),FUN_020ba8ac(void *);void *FUN_0209e788(char *s){int value;*(void **)s=UNK_020fb6cc;*(void **)(s+48)=UNK_020fb6fc;value=UNK_020fb624[*(signed char *)(*(char **)(s+288)+32)];if(value==UNK_020fb604[1] || value==UNK_020fb604[4])*(int *)(FUN_02090c20()+44)=0;FUN_020306fc(s+316);FUN_020306fc(s+308);FUN_020306fc(s+300);FUN_020306fc(s+292);FUN_02099f10(s+72);FUN_0209a458(s+48);FUN_020303bc(s);FUN_020ba8ac(s); return s;}
