// FUN_02081c3c @ 0x02081c3c (inventory code 0x96, thumb)
// check: 2.0/sp2p3 target=0x96 candidate=0x8c words=999 exact_bytes=999 bad_relocs=0
// near: ndiff=999/38 size=0x96 vers=2.0/sp2p3 next="inspect register coloring, boolean materialization and instruction scheduling; semantics reconstructed"
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Send threshold notification and mark descriptor completed.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02081c3c.txt.
 */
extern void FUN_02030da8(void *,void *),FUN_020bce3c(void *),FUN_02030808(void *,int,int);enum { E0 = 0, E1 = 1 };
void FUN_02081c3c(char *s){signed char p[16];int limit;if(!((**(unsigned char **)(s+72)&2)?E1:E0) && !(*(int *)(s+80)&1)){++((signed char *)s)[85];limit=(*(signed char **)(s+68))[8];if(limit && ((signed char *)s)[85]>=limit){FUN_02030da8(p,s);p[4]=1;p[5]=0;p[6]=0;p[7]=0;p[8]=p[0];p[9]=p[1];p[10]=p[2];p[11]=((unsigned char *)p)[3];p[12]=0;p[13]=0;p[14]=0;p[15]=0;p[6]=5;p[7]=3;p[4]=3;FUN_020bce3c(p+4);*(int *)(s+80)|=1;if(*(void **)(s+76))FUN_02030808(*(void **)(s+76),1,0);}}}
