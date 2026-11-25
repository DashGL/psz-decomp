// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x50, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// FUN_0209680c @ 0x0209680c (inventory code 0x4a, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Count eligible entries at or below selected priority.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209680c.txt.
 */
extern int D_020f44fc[];
extern int FUN_020967cc(void *,int);int FUN_0209680c(char *s,int type){int result=-1;if(FUN_020967cc(s,type)){int i;for(i=0;i<*(int *)(s+4);i++){char *r=s+8*i;if(FUN_020967cc(s,*(int *)(r+12)) && D_020f44fc[*(int *)(r+12)]<=D_020f44fc[type])result++;}}return result;}
