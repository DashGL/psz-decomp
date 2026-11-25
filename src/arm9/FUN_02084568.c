// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x40, exact bytes and relocation targets.
// ROM pool-base externs retain address materialization and register scheduling.
extern unsigned char DAT_0211a500[];
// FUN_02084568 @ 0x02084568 (inventory code 0x3a, thumb)
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Validate descriptor and resolve twelve-byte record.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02084568.txt.
 */
extern int FUN_0203a820(void *,int),FUN_02084534(void *,void *);void *FUN_02084568(void *desc){char *g=*(char **)((unsigned int)DAT_0211a500 + 12u);if(g){char *table=*(char **)(g+28);if(table){if(FUN_0203a820(desc,0)){int i=FUN_02084534(table,desc);if(i>=0)return *(char **)table+12*i;}return 0;}}return 0;}
