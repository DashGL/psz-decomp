// flags: -O4,s
enum { E0 = 0, E1 = 1 };
extern void FUN_overlay_12__02131fd0(void *,int);extern void FUN_020c193c(int,int,int,int,int);
int FUN_overlay_12__0212de94(int *p) {int index;if(p[16]!=1)return 0;index=p[17];if(index>=0&&index<7&&((int *)((char *)p+0x48))[index]){p[16]=2;FUN_overlay_12__02131fd0(p,p[17]==2?E0:E1);return 1;}FUN_020c193c(0,5,0,0,-1);return 0;}
