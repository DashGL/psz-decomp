// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x50, exact bytes and relocation targets.
// FUN_0208c048 @ 0x0208c048 (inventory code 0x48, thumb)
// check: 2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Allocate indexed object only when current record references it.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208c048.txt.
 */
extern int D_0211a570;
extern char * D_02108c64;
extern char *FUN_02032ca0(void *,int);extern void *FUN_020ba894(unsigned int),*FUN_0208c098(void *,void *,int);void *FUN_0208c048(void *owner){int index=(D_0211a570)++;char *m=D_02108c64,*p=FUN_02032ca0(m,((signed char *)m)[22]);int i;if(p)for(i=0;i<2;i++)if(((signed char *)p)[32+i]==index){void *out=FUN_020ba894(92);if(out)out=FUN_0208c098(out,owner,index);return out;}return 0;}
