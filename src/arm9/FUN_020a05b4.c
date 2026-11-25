// FUN_020a05b4 @ 0x020a05b4 (inventory code 0x7a, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize object with three components and mode-dependent descriptor.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a05b4.txt.
 */
extern char UNK_020fb92c[];extern void FUN_0203020c(void *,void *,int),FUN_020306e4(void *,void *,int,int),FUN_02076c4c(void *,int),FUN_020a05a8(void *,int,int),FUN_020304b8(void *,void *);void *FUN_020a05b4(char *s,void *source){int b[3],a[3];int *d;FUN_0203020c(s,source,23);*(void **)s=UNK_020fb92c;*(void **)(s+48)=**(void ***)(s+4);FUN_020306e4(s+52,*(char **)(s+48)+24,1,1);FUN_020306e4(s+60,*(char **)(s+48)+32,1,0);FUN_020306e4(s+68,*(char **)(s+48)+16,1,1);*(int *)(s+76)=0;d=*(int **)(s+48);if(d[0]==0){FUN_02076c4c(b,d[1]);FUN_020304b8(s,b);}else{FUN_020a05a8(a,d[2],d[3]);FUN_020304b8(s,a);}return s;}
