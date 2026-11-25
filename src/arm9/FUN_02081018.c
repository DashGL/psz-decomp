// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x58, exact bytes and relocation targets.
// ROM pool-base externs retain address materialization and register scheduling.
extern unsigned char DAT_020fa718[];
extern unsigned char DAT_020fa740[];
// FUN_02081018 @ 0x02081018 (inventory code 0x4e, thumb)
// check: 2.0/sp2p3 target=0x58 candidate=0x58 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Destroy owned buffers, embedded base and owner.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02081018.txt.
 */
extern void FUN_020819d8(void *),FUN_020ba8b4(void *),FUN_020306fc(void *),FUN_020ba8ac(void *),FUN_02076f90(void *),FUN_020303bc(void *);void *FUN_02081018(char *s){void *p;*(unsigned int *)s=((unsigned int)DAT_020fa718 + 0u);*(unsigned int *)(s+48)=((unsigned int)DAT_020fa740 + 0u);FUN_020819d8(s);if(*(void **)(s+96)){FUN_020ba8b4(*(void **)(s+96));*(void **)(s+96)=0;}p=*(void **)(s+76);if(p){if(p){FUN_020306fc(p);FUN_020ba8ac(p);}*(void **)(s+76)=0;}FUN_02076f90(s+48);FUN_020303bc(s);FUN_020ba8ac(s);return s;}
