// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x30, exact bytes and relocation targets.
// FUN_0207fde4 @ 0x0207fde4
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern unsigned int D_0211a3c4[];
/* USA ROM reconstruction, 2026-11-04.
 * Initialize message, set global value and dispatch.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207fde4.txt.
 */
extern void FUN_02036094(void *),FUN_020360a4(void *,int,int,int),FUN_020bce3c(void *); void FUN_0207fde4(void) { unsigned int message[2]; FUN_02036094(message); message[1]=-1; FUN_020360a4(message,7,5,8); message[1]=D_0211a3c4[2]; FUN_020bce3c(message); }
