// flags: -O4,s

typedef struct {signed char x,y;} Direction;
#pragma thumb off
extern void FUN_02018444(void *,int,int,void *,unsigned int,unsigned int,Direction);
#pragma thumb on

void FUN_overlay_15__02136168(char *self,int x,int y,void *text,unsigned int flags,unsigned int count){
 char **font=*(char ***)(self+28);Direction direction;
 { signed char *p = (signed char *)&direction; p[0] = 0; p[1] = 0; }
 switch((unsigned char)(*(char **)(*font+8))[7]){
 case 0:case 7:direction.x=1;break;
 case 1:case 2:direction.y=1;break;
 case 3:case 4:direction.x=-1;break;
 case 5:case 6:direction.y=-1;break;
 }
 FUN_02018444(self+24,x,y,text,flags,count,direction);
}
