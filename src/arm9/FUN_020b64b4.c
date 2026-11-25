// FUN_020b64b4 @ 0x020b64b4 (inventory code 0xb0, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve an item base value with optional current-state adjustment.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b64b4.txt.
 */
typedef struct {unsigned char v[4];} Key;typedef int (*Read)(void *,void *);extern char *FUN_02084568(void *);extern int FUN_02084684(int,void *,void *),FUN_02089928(void *,int);int FUN_020b64b4(char *s,Key *item,int direct){Key a,b,c;int equipped[4],state[6],result=0;char *p;if(item->v[0]==0){if(item->v[1]==17){if((*(Read **)s)[2](s,equipped)==1){a=*(Key *)equipped;p=FUN_02084568(&a);if(p)result+=*(unsigned short *)(p+10)&2047;}}else if(direct){b=*item;p=FUN_02084568(&b);if(p){result+=*(unsigned short *)(p+10)&2047;result+=FUN_02089928(item,5);}}else{c=*item;if(FUN_02084684(*(int *)(s+104),&c,state)==1){result+=*(unsigned short *)((char *)state+4);result+=FUN_02089928(item,5);}}}return result;}
