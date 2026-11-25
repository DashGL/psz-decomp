// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
// FUN_020a5000 @ 0x020a5000
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern unsigned int D_0211a664[];
/* USA ROM reconstruction, 2026-11-04.
 * Store pending value when network available and transition manager state.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a5000.txt.
 */
extern int FUN_020c4848(void); extern char *FUN_0200d16c(void); extern void *FUN_02072af0(void); extern void FUN_02072c20(void *,int,int); void FUN_020a5000(unsigned int value) { if(!D_0211a664[2] && FUN_020c4848()) { *D_0211a664=value; if(*(int *)(FUN_0200d16c()+12)==1) FUN_02072c20(FUN_02072af0(),2,1); } }
