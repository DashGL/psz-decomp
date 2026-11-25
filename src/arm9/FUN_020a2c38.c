// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x48, exact bytes and relocation targets.
// ROM pool-base externs retain address materialization and register scheduling.
extern unsigned char DAT_020fbe6c[];
extern unsigned char DAT_020fbe9c[];
// FUN_020a2c38 @ 0x020a2c38 (inventory code 0x40, thumb)
// check: 2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Destroy components then free owner.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a2c38.txt.
 */
extern void FUN_020a3218(void *),FUN_02099f10(void *),FUN_020306fc(void *),FUN_0209a458(void *),FUN_020303bc(void *),FUN_020ba8ac(void *);void *FUN_020a2c38(char *self){*(unsigned int *)self=((unsigned int)DAT_020fbe6c + 0u);*(unsigned int *)(self+48)=((unsigned int)DAT_020fbe9c + 0u);FUN_020a3218(self);FUN_02099f10(self+96);FUN_020306fc(self+88);FUN_020306fc(self+80);FUN_0209a458(self+48);FUN_020303bc(self);FUN_020ba8ac(self);return self;}
