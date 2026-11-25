// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x4c, exact bytes and relocation targets.
// ROM pool-base externs retain address materialization and register scheduling.
extern unsigned char DAT_020fb814[];
extern unsigned char DAT_020fb838[];
// FUN_0209f6fc @ 0x0209f6fc (inventory code 0x44, thumb)
// check: 2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Release owned effect and destroy embedded members.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209f6fc.txt.
 */
extern void FUN_020472bc(void *),FUN_020306fc(void *),FUN_020765f8(void *),FUN_020303bc(void *),FUN_020ba8ac(void *);void *FUN_0209f6fc(char *s){*(unsigned int *)s=((unsigned int)DAT_020fb814 + 0u);*(unsigned int *)(s+48)=((unsigned int)DAT_020fb838 + 0u);if(*(void **)(s+100)){FUN_020472bc(*(void **)(s+100));*(void **)(s+100)=0;}FUN_020306fc(s+92);FUN_020306fc(s+84);FUN_020306fc(s+76);FUN_020765f8(s+48);FUN_020303bc(s);return s;}
