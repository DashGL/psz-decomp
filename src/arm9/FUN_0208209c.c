// flags: -O4,s
// check: 2.0/sp2p3 target=0x134 candidate=0x120 words=999 exact_bytes=999 bad_relocs=0
// near: target=0x134 candidate=0x120 exact_bytes=999 vers=2.0/sp2p3; see notes/sessions/matching-resume2-upper-2026-11-12.md
/* USA ROM reconstruction, 2026-11-04. Link an available neighboring grid cell and expand the occupied bounds.
 * Evidence: scratch/coverage-high-game/inspect225.txt and 0208209c.txt. */
extern int FUN_02083484(int *,int *,int),FUN_020834c0(int);extern char *FUN_02083350(void *,int,int);extern void FUN_020832f8(void *,int,int),FUN_02083504(void *,void *);
#define W(n) (*(int *)(s+(n)))
int FUN_0208209c(char *s,char *from,int direction){int dx,dy,x,y,opposite,v;char *cell;if(*(signed char *)(from+12)<0||*(signed char *)(from+13)<0)return 0;dx=0;dy=0;if(!FUN_02083484(&dx,&dy,direction))return 0;x=*(signed char *)(from+12)+dx;y=*(signed char *)(from+13)+dy;cell=FUN_02083350(s+180,x,y);if((((unsigned char)cell[0]&1)?1:0)!=0)return 0;if((((unsigned char)cell[0]&2)?1:0)!=0)return 0;opposite=FUN_020834c0(direction);*(unsigned char *)cell|=2;cell[2]=1;*(int *)(cell+8)=opposite;cell[3]=*(signed char *)(from+3)+1;cell[1]=W(2168);FUN_020832f8(cell,opposite,*(signed char *)(from+1));++W(2168);++((unsigned char *)from)[2];FUN_020832f8(from,direction,*(signed char *)(cell+1));cell[12]=x;cell[13]=y;FUN_02083504(s+12,cell);FUN_02083504(s+96,cell);v=W(2192);if(v>x)v=x;W(2192)=v;v=W(2196);if(v<x)v=x;W(2196)=v;v=W(2200);if(v>y)v=y;W(2200)=v;v=W(2204);if(v<y)v=y;W(2204)=v;return 1;}
