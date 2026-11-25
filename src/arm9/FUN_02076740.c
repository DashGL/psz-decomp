// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x4c, exact bytes and relocation targets.
// ROM pool-base externs retain address materialization and register scheduling.
extern unsigned char DAT_020fa0c8[];
extern unsigned char DAT_020fa0f0[];
// FUN_02076740 @ 0x02076740 (inventory code 0x42, thumb)
// check: 2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Install destructor tables and release four embedded components.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02076740.txt.
 */
extern void FUN_02076a18(void *),FUN_020306fc(void *),FUN_02076f90(void *),FUN_020303bc(void *);void *FUN_02076740(char *self){*(unsigned int *)self=((unsigned int)DAT_020fa0c8 + 0u);*(unsigned int *)(self+48)=((unsigned int)DAT_020fa0f0 + 0u);FUN_02076a18(self);FUN_020306fc(self+108);FUN_020306fc(self+100);FUN_020306fc(self+92);FUN_020306fc(self+84);FUN_02076f90(self+48);FUN_020303bc(self);return self;}
