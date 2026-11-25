// FUN_02093908 @ 0x02093908 (inventory code 0x92, thumb)
// check: 2.0/sp2p3 target=0x92 candidate=0x88 words=999 exact_bytes=999 bad_relocs=0
// near: ndiff=999/37 size=0x92 vers=2.0/sp2p3 next="inspect register coloring, boolean materialization and instruction scheduling; semantics reconstructed"
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Notify after a signed-byte counter reaches its threshold.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02093908.txt.
 */
extern void FUN_02030da8(void *,void *),FUN_020bce3c(void *),FUN_02030808(void *,int,int);enum { E0 = 0, E1 = 1 };
void FUN_02093908(char *s){signed char p[16];if(!((**(unsigned char **)(s+76)&2)?E1:E0) && !(*(int *)(s+108)&1)){++((signed char *)s)[93];if(((signed char *)s)[93]>=((signed char *)s)[92]){FUN_02030da8(p,s);p[4]=1;p[5]=0;p[6]=0;p[7]=0;p[8]=p[0];p[9]=p[1];p[10]=p[2];p[11]=((unsigned char *)p)[3];p[12]=0;p[13]=0;p[14]=0;p[15]=0;p[6]=5;p[7]=6;p[4]=3;FUN_020bce3c(p+4);*(int *)(s+108)|=1;FUN_02030808(s+348,1,0);}}}
