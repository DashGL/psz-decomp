// FUN_020aaa4c @ 0x020aaa4c (inventory code 0x94, thumb)
// check: 2.0/sp2p3 target=0x94 candidate=0x8e words=999 exact_bytes=999 bad_relocs=0
// near: ndiff=999/37 size=0x94 vers=2.0/sp2p3 next="inspect register coloring, boolean materialization and instruction scheduling; semantics reconstructed"
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Accumulate equipment flags and dispatch mode-specific statistics.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020aaa4c.txt.
 */
extern int FUN_020b6d7c(void *,int),FUN_020b6da4(void *),FUN_020b6db0(void *);extern void FUN_020aaae0(void *,void *,int),FUN_020aac88(void *,void *,int);void FUN_020aaa4c(char *s,int *out,int extra){int i;for(i=0;i<6;i++)if(FUN_020b6d7c(s+32,i))out[12]|=1<<i;if(((signed char *)s)[68]==2)out[12]|=16;if(FUN_020b6da4(s+32))out[13]|=3;if(FUN_020b6db0(s+32))out[14]|=1;switch(out[0]){case 0:case 1:FUN_020aaae0(s,out,extra);break;case 2:FUN_020aac88(s,out,extra);break;}}
