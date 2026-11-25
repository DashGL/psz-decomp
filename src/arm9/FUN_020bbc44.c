// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets.
// ROM pool-base externs retain address materialization and register scheduling.
extern unsigned char DAT_0211b2c0[];
// FUN_020bbc44 @ 0x020bbc44 (inventory code 0x30, thumb)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Submit request and restore pending flag on failure.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bbc44.txt.
 */
extern void FUN_020bb9a4(void *); extern int FUN_02054680(void (*)(void *),int,void *,unsigned int,int,int,int); int FUN_020bbc44(void *arg,unsigned int size) { if(FUN_02054680(FUN_020bb9a4,0,arg,size,65535,12,2)!=2) { *(int *)((unsigned int)DAT_0211b2c0 + 52u)=1; return 0; } return 1; }
