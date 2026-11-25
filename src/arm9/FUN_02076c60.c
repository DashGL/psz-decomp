typedef struct {unsigned char bytes[10];} Copy_02076c60;
// FUN_02076c60 @ 0x02076c60 (inventory code 0x76, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize object component and optional indexed animation.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address. Aggregate copy recovered2026-11-12; remaining codegen
 * residual parked. See notes/sessions/matching-upper-resume-2026-11-12.md.
 */
extern char UNK_020fa108[],UNK_020fa130[];extern signed char UNK_020f2870[];extern void FUN_0203020c(void *,void *,int),FUN_02076574(void *,int,int),FUN_02076c4c(void *,int),FUN_020304b8(void *,void *),FUN_02076c58(void *,int,int);extern int FUN_0203068c(void *);void *FUN_02076c60(char *s,void *source){signed char table[10];int v[3],index,i;FUN_0203020c(s,source,5);FUN_02076574(s+48,FUN_0203068c(s),0);*(void **)s=UNK_020fa108;*(void **)(s+48)=UNK_020fa130;*(void **)(s+68)=**(void ***)(s+4);*(int *)(s+72)=0;FUN_02076c4c(v,**(int **)(s+68));FUN_020304b8(s,v);index=*(signed char *)(*(char **)(s+68)+4);if(index>=0 && index<10){*(Copy_02076c60 *)table=*(const Copy_02076c60 *)UNK_020f2870;FUN_02076c58(s+48,0,table[index]);}return s;}
