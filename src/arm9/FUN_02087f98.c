// flags: -O4,s
// check: 2.0/sp2p3 target=0x15c candidate=0x158 words=999 exact_bytes=999 bad_relocs=1
// near: ndiff=999/87 size=0x15c vers=2.0/sp2p3 next="inspect register coloring, boolean materialization and instruction scheduling; semantics reconstructed"
/* USA ROM reconstruction, 2026-11-04. Render transformed geometry or update the smoothed camera.
 * Evidence: scratch/coverage-high-game/inspect222.txt and 02087f98.txt. */
#pragma thumb off
extern void FUN_0205e6b0(void),FUN_0205aaa4(void *,void *),FUN_0205e550(void *);
#pragma thumb reset
extern void FUN_02088134(int,int,int,int,int,int),FUN_02088174(void *);extern int UNK_0211a534[];
#define IO(a) (*(volatile unsigned int *)(a))
void FUN_02087f98(char *s){int matrix[12],n,a,b;if(*(int *)(s+272)!=1)return;FUN_0205e6b0();IO(0x04000444)=0;FUN_0205aaa4(s+112,matrix);matrix[9]=*(int *)(s+92);matrix[10]=*(int *)(s+96);matrix[11]=*(int *)(s+100);FUN_0205e550(matrix);n=*(int *)(s+340);a=(-2730*n)/128;b=(1365*n)/128;IO(0x04000470)=a + (unsigned)(-2 * b) + (unsigned)(-2 * ((1365*(128-*(int *)(s+344)))/128));IO(0x04000470)=0;IO(0x04000470)=0;IO(0x04000440)=3;IO(0x04000454)=0;IO(0x04000440)=2;IO(0x040004c0)=32768;IO(0x040004c4)=0;IO(0x040004a8)=((unsigned short)*(int *)(s+268)&0x1fffffff)|0x69c00000;FUN_02088134(1,0,1,UNK_0211a534[1],31,0);IO(0x04000500)=3;IO(0x04000488)=0x480000;IO(0x0400048c)=0x021efa40;IO(0x0400048c)=16;IO(0x04000488)=0x00480800;IO(0x0400048c)=0x021e05c0;IO(0x0400048c)=16;IO(0x04000488)=0x03440000;IO(0x0400048c)=0xfdcefa40;IO(0x0400048c)=16;IO(0x04000488)=0x03440800;IO(0x0400048c)=0xfdce05c0;IO(0x0400048c)=16;IO(0x04000504)=0;IO(0x04000448)=1;if(*(int *)(s+368)&&!*(int *)(s+376))FUN_02088174(s);}
