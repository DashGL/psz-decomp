// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x48, exact bytes and relocation targets.
// ROM pool-base externs retain address materialization and register scheduling.
extern unsigned char DAT_020fb890[];
extern unsigned char DAT_020fb8b4[];
// FUN_0209fe60 @ 0x0209fe60 (inventory code 0x40, thumb)
// check: 2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Destroy components and free owner.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209fe60.txt.
 */
extern void FUN_0209ffbc(void),FUN_020306fc(void *),FUN_020765f8(void *),FUN_020303bc(void *),FUN_020ba8ac(void *);void *FUN_0209fe60(char *self){*(unsigned int *)self=((unsigned int)DAT_020fb890 + 0u);*(unsigned int *)(self+48)=((unsigned int)DAT_020fb8b4 + 0u);FUN_0209ffbc();FUN_020306fc(self+88);FUN_020306fc(self+80);FUN_020306fc(self+72);FUN_020765f8(self+48);FUN_020303bc(self);FUN_020ba8ac(self);return self;}
