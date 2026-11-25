// Aligned communication-state initialization; opaque callback is stored only.
// check: 2.0/sp2p3 target=0x1e4 candidate=0x1e4 words=74 exact_bytes=201 bad_relocs=0
// near: ndiff=74/121 size=0x1e4 vers=2.0/sp2p3 next="ARM saved-register allocation and global-base lifetimes; equal-size instruction schedule with clean relocs"
// flags: -O4,s -noThumb
typedef unsigned int U;
typedef unsigned short H;
typedef unsigned char B;
#define W(p,o) (*(U *)((B *)(p)+(o)))
#define S(p,o) (*(H *)((B *)(p)+(o)))
extern B DAT_021180a0[],DAT_020f96f4[];
extern H FUN_02053b6c(void);
extern U FUN_020683d4(void),FUN_020683e8(U),FUN_02063aa8(void);
extern void FUN_02065510(U,void *,U),FUN_020654b4(U,void *,U),FUN_02065774(const void *,void *,U);
int FUN_02063b10(U buffer,const B *descriptor,U callback,U identifier,H option)
{
 B *a,*b;H *dest,*cursor;U saved;int i;H value;
 if(W(DAT_021180a0,12)&&S((void *)W(DAT_021180a0,12),0x1316))return 2;
 a=(B *)((buffer+31)&~31u);b=(B *)(((U)a+0x1e1f)&~31u);
 if(identifier==0x10000)identifier=FUN_02053b6c();
 saved=FUN_020683d4();
 S(DAT_020f96f4,6)=65535;S(DAT_020f96f4,0)=5;S(DAT_020f96f4,2)=40;S(DAT_020f96f4,4)=40;W(DAT_020f96f4,12)=1;
 S(DAT_021180a0,0)=option;W(DAT_021180a0,8)=(U)a;W(DAT_021180a0,12)=(U)b;
 FUN_02065510(0,a,0x1e00);FUN_020654b4(0,b,0x1340);
 dest=(H *)(a+0x530);
 for(i=0;i<descriptor[1];i++)*dest++=S(descriptor,2+i*2);
 dest=(H *)(a+0x538);cursor=(H *)W(DAT_020f96f4,8);i=0;
 while((value=*cursor)!=0){cursor++;i++;W(DAT_020f96f4,8)=(U)cursor;*dest++=value;if(i>=16)break;}
 FUN_02065774(descriptor,b+0x1300,22);
 if(descriptor[1]<10)S(b,0x1302+descriptor[1]*2)=0;
 S(a,0x500)=256;S(a,0x502)=8;S(a,0x518)=0;S(a,0x51a)=0;S(a,0x52c)=1;
 W(a,0x504)=(U)(b+0x400);S(a,14)=0;S(a,18)=0;S(a,22)=1;S(a,20)=0;
 W(a,8)=callback;S(a,12)=(H)identifier;S(a,24)=(H)(FUN_02063aa8()+200);
 S(a,16)=15;a[0x50c]=0;a[0x50d]=0;S(b,0x1316)=1;W(b,0x131c)=0;
 FUN_020683e8(saved);return 0;
}
