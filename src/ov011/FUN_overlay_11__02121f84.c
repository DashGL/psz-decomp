// flags: -O4,s
extern void FUN_020c2b84(void *,void *,int,int,int);
extern void *FUN_020c1fc8(void);
extern int FUN_020c2438(void *,void *,void *,int);
extern void * const DAT_02123924[];
extern void * const DAT_0212394c[];
void FUN_overlay_11__02121f84(int *p) {int i;unsigned int bits=(*(volatile unsigned int *)0x04001000&0x1f00)>>8;*(volatile unsigned int *)0x04001000=(*(volatile unsigned int *)0x04001000&0xffffe0ff)|((bits|8)<<8);*(volatile unsigned short *)0x0400100e=(*(volatile unsigned short *)0x0400100e&0x43)|0x490;FUN_020c2b84(p+4,DAT_02123924[0],7,4,4);for(i=0;i<4;i++){if(p[5+i]==-1)p[5+i]=FUN_020c2438(FUN_020c1fc8(),DAT_0212394c[i],*(void **)0x0212464c,2);}}
