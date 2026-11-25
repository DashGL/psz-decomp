// Append ordered identity fields and headers; stop on the first append failure.
// flags: -O4,p
typedef unsigned int U;typedef unsigned char B;
extern const char DAT_02100394[],DAT_021003a0[],DAT_021003a8[],DAT_021003b0[],DAT_021003b8[],DAT_021003c0[],DAT_021003c8[],DAT_021003d0[],DAT_021003d8[],DAT_021003e0[],DAT_021003e8[],DAT_021003f0[],DAT_021003f8[],DAT_02100400[],DAT_02100408[],DAT_02100410[],DAT_02100428[],DAT_02100434[];
#pragma thumb off
extern int FUN_020662b4(void *,int,const char *,...);
extern U FUN_02003c70(const void *),FUN_02005920(const unsigned short *);
#pragma thumb reset
extern int FUN_020dee90(void *,const char *,const void *,U),FUN_020dedf8(void *,const char *,const void *);
#define FIELD(key,offset) if(FUN_020dee90(owner,key,record+(offset),FUN_02003c70(record+(offset))))return 0
int FUN_020de4e8(void *owner,const B *record,int mode)
{
 char text[33];
 FUN_020662b4(text,33,DAT_02100394,3,1);
 if(FUN_020dee90(owner,DAT_021003a0,text,FUN_02003c70(text)))return 0;
 FIELD(DAT_021003a8,0);FIELD(DAT_021003b0,14);FIELD(DAT_021003b8,65);
 FIELD(DAT_021003c0,111);FIELD(DAT_021003c8,21);FIELD(DAT_021003d0,26);
 FIELD(DAT_021003d8,29);FIELD(DAT_021003e0,31);FIELD(DAT_021003e8,44);
 FIELD(DAT_021003f0,47);FIELD(DAT_021003f8,52);
 if(FUN_020dee90(owner,DAT_02100400,record+126,FUN_02005920((const unsigned short *)(record+126))*2))return 0;
 if(mode==1){FIELD(DAT_02100408,78);}
 FUN_020662b4(text,33,DAT_02100410,3,1);
 if(FUN_020dedf8(owner,DAT_02100428,text))return 0;
 return FUN_020dedf8(owner,DAT_02100434,record+21)==0;
}
