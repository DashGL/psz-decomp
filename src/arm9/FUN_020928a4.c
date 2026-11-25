// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x50, exact bytes and relocation targets.
// ROM pool-base externs retain address materialization and register scheduling.
extern unsigned char DAT_020faf68[];
extern unsigned char DAT_020faf98[];
extern unsigned char DAT_02108cf4[];
// FUN_020928a4 @ 0x020928a4 (inventory code 0x42, thumb)
// check: 2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Unregister handle and destroy embedded state and owner.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020928a4.txt.
 */
extern int FUN_0203068c(void *);extern void FUN_0203528c(void *,int),FUN_02099f10(void *),FUN_0209a458(void *),FUN_020303bc(void *),FUN_020ba8ac(void *);void *FUN_020928a4(char *s){int id;*(unsigned int *)s=((unsigned int)DAT_020faf68 + 0u);*(unsigned int *)(s+48)=((unsigned int)DAT_020faf98 + 0u);id=FUN_0203068c(s);if(id!=-1)FUN_0203528c(*(void **)((unsigned int)DAT_02108cf4 + 0u),id);FUN_02099f10(s+72);FUN_0209a458(s+48);FUN_020303bc(s);FUN_020ba8ac(s);return s;}
