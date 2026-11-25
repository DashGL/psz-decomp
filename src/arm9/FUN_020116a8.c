// flags: -O4,p -noThumb
// USA instruction-derived resource and list helper.
extern unsigned char DAT_02011728[];
extern unsigned char DAT_0201179c[];
extern unsigned char DAT_020117ac[];
extern unsigned char DAT_020117e4[];
extern unsigned char DAT_020117f4[];
extern unsigned char DAT_0201181c[];
extern unsigned char DAT_02011820[];
extern unsigned char DAT_0201183c[];
extern unsigned int FUN_0200efe0(unsigned int);
void FUN_020116a8(char *self,unsigned int id){if(FUN_0200efe0(id)==0){*(unsigned int *)(self+0x164)=((unsigned int)DAT_02011728);*(unsigned int *)(self+0x168)=((unsigned int)DAT_0201179c);*(unsigned int *)(self+0x16c)=((unsigned int)DAT_020117ac);*(unsigned int *)(self+0x170)=((unsigned int)DAT_020117e4);}else{*(unsigned int *)(self+0x164)=((unsigned int)DAT_020117f4);*(unsigned int *)(self+0x168)=((unsigned int)DAT_0201181c);*(unsigned int *)(self+0x16c)=((unsigned int)DAT_02011820);*(unsigned int *)(self+0x170)=((unsigned int)DAT_0201183c);}}
