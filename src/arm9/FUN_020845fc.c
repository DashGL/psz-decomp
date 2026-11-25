// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets.
// ROM pool-base externs retain address materialization and register scheduling.
extern unsigned char DAT_0211a500[];
// FUN_020845fc @ 0x020845fc (inventory code 0x36, thumb)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Validate category and resolve nine-byte record.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020845fc.txt.
 */
extern int FUN_0203a820(void *,int);void *FUN_020845fc(unsigned char *desc){char *g=*(char **)((unsigned int)DAT_0211a500 + 12u);if(g){char *table=*(char **)(g+20);if(table){if(FUN_0203a820(desc,2)){int i=desc[2];if(i<*(int *)(table+4))return *(char **)table+9*i;}return 0;}}return 0;}
