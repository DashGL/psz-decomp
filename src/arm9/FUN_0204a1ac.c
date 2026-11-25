// FUN_0204a1ac - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_0204a1ac @ 0x0204a1ac
// check: 2.0/sp2p3 target=0x144 candidate=0x144 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 86.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b86/0204a1ac.txt.
 */
extern short data_020ed83c[];
typedef struct{int x,y,z;} Vec;extern int FUN_02047440(void *);extern int FUN_0204770c(void *);extern void FUN_02035408(void *,int,int,int);extern void FUN_0204bf88(void *);extern void FUN_0204a8c4(int,int,void *,int);
int FUN_0204a1ac(char *s){int result=FUN_02047440(s);if(!result&&FUN_0204770c(s)&&*(int *)(s+260)==1){int current=*(int *)(s+268),duration=*(int *)(s+264);if(duration>current){Vec scale;int angle=(int)((unsigned int)((int)((unsigned int)current<<14)/duration)<<16)>>20;int wave=data_020ed83c[angle*2];int x=(int)(((long long)*(int *)(s+272)*wave+2048)>>12),y=(int)(((long long)*(int *)(s+276)*wave+2048)>>12),z=(int)(((long long)*(int *)(s+280)*wave+2048)>>12);FUN_02035408(&scale,x,y,z);*(Vec *)(s+80)=scale;*(unsigned short *)(s+106)=80u*(unsigned int)wave;FUN_0204bf88(s);++*(unsigned int *)(s+268);*(unsigned int *)(s+228)&=0xfffeffff;}else *(unsigned int *)(s+228)|=65536;if((*(int *)(s+148)/ *(int *)(s+76))%40==0)FUN_0204a8c4(1,4,s+92,-1);}return result;}
