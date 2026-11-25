// flags: -O4,p
typedef unsigned int u32;
typedef unsigned char u8;
#define W(p,o) (*(u32 *)((u8 *)(p)+(o)))
extern void FUN_020e546c(int,int,u32,u32);
extern u8 *FUN_020e961c(void);
extern void FUN_020e9628(int);
extern u32 FUN_020d88d8(u32,u32,u32,int,int,int,int,void *,int);
extern void FUN_020e8ae4(void);
extern u8 DAT_02101748[];
extern int FUN_020e88f8(int), FUN_020e88a4(int), FUN_020e6b74(int);
extern int FUN_020e2ab8(int,void *,int), FUN_020e38f0(u32), FUN_020e6b94(u32,int);

void FUN_020e3bfc(u32 arg0,u32 arg1,u32 arg2,u32 arg3,u32 arg4)
{
    u8 *a,*b,*c,*d;
    FUN_020e546c(3,0,arg1,arg2);
    W(FUN_020e961c(),0x46c)=arg3;
    W(FUN_020e961c(),0x470)=arg4;
    FUN_020e961c()[0x17]=1;
    a=FUN_020e961c(); b=FUN_020e961c();
    W(a,0x20)=W(b,0x200);
    W(FUN_020e961c(),0xf4)=arg0;
    FUN_020e9628(4);
    if (!W(FUN_020e961c(),0xe4)) {
        a=FUN_020e961c(); b=FUN_020e961c();
        c=FUN_020e961c(); d=FUN_020e961c();
        W(a,0xe4)=FUN_020d88d8(W(b,0x2f4),W(c,0x2f4),W(d,0x2f8),0,20,1,0,(void *)FUN_020e8ae4,0);
    }
    if (!W(FUN_020e961c(),0xe4)) {
        if (FUN_020e88f8(5)) return;
    }
    if (FUN_020e88a4(FUN_020e2ab8(5,DAT_02101748,0))) return;
    if (!W(FUN_020e961c(),0x10)) {
        if (FUN_020e38f0(W(FUN_020e961c(),0x200))) return;
    }
    if (FUN_020e6b74(FUN_020e6b94(W(FUN_020e961c(),0xf4),0))) return;
}
