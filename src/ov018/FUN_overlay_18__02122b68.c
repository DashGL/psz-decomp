// flags: -O4,s
extern void FUN_020c2b84(void *,void *,int,int,int);
extern void *FUN_020c1fc8(void);
extern int FUN_020c2438(void *,void *,void *,int);
extern void * const DAT_02123958[];
extern void * const DAT_02123980[];
void FUN_overlay_18__02122b68(int *p) {int i;unsigned int bits=(*(volatile unsigned int *)0x04001000&0x1f00)>>8;*(volatile unsigned int *)0x04001000=(*(volatile unsigned int *)0x04001000&0xffffe0ff)|((bits|8)<<8);*(volatile unsigned short *)0x0400100e=(*(volatile unsigned short *)0x0400100e&0x43)|0x490;FUN_020c2b84(p+4,DAT_02123958[0],7,4,4);for(i=0;i<4;i++){if(p[5+i]==-1)p[5+i]=FUN_020c2438(FUN_020c1fc8(),DAT_02123980[i],*(void **)0x021243b8,2);}}
