// flags: -O4,p
typedef unsigned int U;typedef unsigned char B;typedef unsigned short H;
extern const char DAT_02100344[],DAT_0210034c[],DAT_02100354[],DAT_0210035c[],DAT_02100368[],DAT_02100384[];
extern B DAT_027ffe0c[],DAT_027ffe10[];
#pragma thumb off
extern void FUN_020656b8(void *,U,U),FUN_02065774(const void *,void *,U);
extern int FUN_020662b4(void *,int,const char *,...),FUN_02066274(void *,const char *,...);
extern void FUN_02068728(void),FUN_020684f4(void *),FUN_02068510(void *);
extern int FUN_02068c9c(void *,void *);
extern U FUN_020683d4(void),FUN_020683e8(U);
extern B *FUN_0202fe58(void),*FUN_0202fe9c(H *);
extern void FUN_020673d4(const void *,U);
#pragma thumb reset
extern U FUN_020da9f4(void);extern int FUN_020daa14(void *);
int FUN_020de318(B *out, const unsigned long long *identity)
{
 B mac[6],profile[84],*p;int date[4],time[3],i;U saved,kind;H length;
 FUN_020656b8(out,0,148);
 if(identity[0]!=0) FUN_020662b4(out,14,DAT_02100344,identity[0]);
 else FUN_020662b4(out,14,DAT_02100344,identity[1]);
 FUN_020662b4(out+14,7,DAT_0210034c,*(const H *)((const B*)identity+16));
 if(!DAT_027ffe0c[0])FUN_02068728();FUN_02065774(DAT_027ffe0c,out+21,4);
 if(!DAT_027ffe10[0])FUN_02068728();FUN_02065774(DAT_027ffe10,out+26,2);
 out[29]='0';FUN_020684f4(mac);
 { B *src,*dst; for(i=0,src=mac,dst=out+31;i<6;i++){FUN_02066274(dst,DAT_02100354,*src);src++;dst+=2;} }
 FUN_02068510(profile);if(profile[0]>=8)profile[0]=1;
 FUN_020662b4(out+44,3,DAT_02100354,profile[0]);
 FUN_02065774(profile+4,out+126,20);
 FUN_020662b4(out+47,5,DAT_0210035c,profile[2],profile[3]);
 if(FUN_02068c9c(date,time)!=0)return 0;
 FUN_020662b4(out+52,13,DAT_02100368,date[0],date[1],date[2],time[0],time[1],time[2]);
 saved=FUN_020683d4();p=FUN_0202fe58();FUN_020673d4(p,6);
 if(!p){FUN_020683e8(saved);return 0;}
 { B *dst; for(i=0,dst=out+65;i<6;i++,dst+=2)FUN_02066274(dst,DAT_02100354,p[i]); }
 kind=FUN_020da9f4();if(kind==255||kind>99)kind=99;
 FUN_020662b4(out+111,14,DAT_02100384,kind);
 p=FUN_0202fe9c(&length);FUN_020673d4(p,32);
 if(!p){FUN_020683e8(saved);return 0;}
 FUN_02065774(p,out+78,32);FUN_020daa14(out+114);
 FUN_020683e8(saved);return 1;
}
