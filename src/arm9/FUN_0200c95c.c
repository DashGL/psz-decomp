// USA startup orchestration reconstructed from full 0x1c4-byte Thumb ROM extent.
extern void FUN_02067484(void),FUN_02067d1c(void),FUN_0205cb8c(void),FUN_02056a88(void),FUN_02068a60(void),FUN_02067f48(void);
extern unsigned int FUN_02055bcc(unsigned int);
extern void FUN_0205ce08(void),FUN_0200ccc4(void),FUN_020c2d5c(void),FUN_0205ce44(void);
extern unsigned long long FUN_020c3e90(void);
extern void FUN_020c1450(unsigned int,unsigned int),FUN_020ba784(void);
extern void *FUN_020ba088(void);
extern unsigned int FUN_0205a45c(unsigned int);
extern void FUN_020bbe44(void),FUN_020bc0bc(void);
extern void *FUN_020c1624(unsigned int);
extern void FUN_020c1bb4(unsigned int,unsigned int),FUN_020c16e8(int,const unsigned int *),FUN_020c19b0(const void *),FUN_020c1a08(const void *,unsigned int);
extern unsigned int FUN_020c1a78(unsigned int,int),FUN_020c1828(void);
extern void *FUN_020c3a28(void),*FUN_020c3a1c(void);
extern int FUN_020c3968(void *,const void *);
extern void FUN_0208f044(void);
extern void *FUN_020ba918(unsigned int),*FUN_020b9cf4(void *,void *);
extern void FUN_0207820c(void),FUN_02031a2c(void),FUN_020780b4(void),FUN_020334a8(void),FUN_0200d124(void),FUN_02072e10(void),FUN_020c3b04(void);
extern void *FUN_020c1fc8(void);
extern void FUN_020c1fe0(void),FUN_02084370(void),FUN_02086db4(void),FUN_02032468(void),FUN_02077958(void);
extern int FUN_0203522c(void);
extern void *FUN_0206e9ac(void),*FUN_02084d48(void);
extern void FUN_0209c9b0(void),FUN_0209debc(void),FUN_0209643c(void),FUN_020b77a4(void);
extern int FUN_02042744(void),FUN_020bbf60(void);
extern int *FUN_0200d16c(void);
extern int FUN_0200d3a4(void *,int,int);
extern unsigned int FUN_020c4eb4(void);
extern void FUN_02095f90(void);
extern unsigned int DAT_020ebba4[];
extern char DAT_020f65d4[],DAT_020f65f0[],DAT_020f6610[],DAT_020f6630[],DAT_020f6650[],DAT_020f6670[],DAT_020f6690[],DAT_020f66ac[];
extern void *DAT_02101dd4;
int FUN_0200c95c(void){
 unsigned long long seed;void *object;int field;
 FUN_02067484();FUN_02067d1c();FUN_0205cb8c();FUN_02056a88();FUN_02068a60();FUN_02067f48();FUN_02055bcc(16);FUN_0205ce08();
 *(volatile unsigned int *)0x04001000 &= 0xfffeffff;
 FUN_0200ccc4();FUN_020c2d5c();FUN_0205ce44();
 *(volatile unsigned int *)0x04001000 |= 0x10000;
 seed=FUN_020c3e90();FUN_020c1450((unsigned int)seed,(unsigned int)(seed>>32));
 FUN_020ba784();FUN_020ba088();FUN_0205a45c(~0u);FUN_020bbe44();FUN_020bc0bc();
 FUN_020c1624(0x2a000);FUN_020c1bb4(0x6d,0);FUN_020c16e8(6,DAT_020ebba4);FUN_020c19b0(DAT_020f65d4);
 FUN_020c1a08(DAT_020f65f0,0);FUN_020c1a08(DAT_020f6610,1);FUN_020c1a08(DAT_020f6630,2);FUN_020c1a08(DAT_020f6650,3);FUN_020c1a08(DAT_020f6670,4);FUN_020c1a08(DAT_020f6690,5);
 FUN_020c1a78(0,-1);FUN_020c1828();FUN_020c3a28();FUN_020c3968(FUN_020c3a1c(),DAT_020f66ac);FUN_0208f044();
 object=FUN_020ba918(32);if(object)object=FUN_020b9cf4(object,0);DAT_02101dd4=object;
 FUN_0207820c();FUN_02031a2c();FUN_020780b4();FUN_020334a8();FUN_0200d124();FUN_02072e10();FUN_020c3b04();FUN_020c1fc8();FUN_020c1fe0();FUN_02084370();FUN_02086db4();FUN_0203522c();FUN_02032468();FUN_02077958();FUN_0206e9ac();FUN_02084d48();FUN_0209c9b0();FUN_0209debc();FUN_0209643c();FUN_02042744();FUN_020b77a4();
 if((FUN_020bbf60()&0xf03)==0xf03){FUN_0200d3a4(FUN_0200d16c(),16,0);}
 else{int other;field=FUN_0200d16c()[2];other=FUN_0200d16c()[3];if(other==field){if(!FUN_020c4eb4()){FUN_02095f90();FUN_0200d3a4(FUN_0200d16c(),14,0);}else FUN_0200d3a4(FUN_0200d16c(),14,0);}}
 return 1;
}
