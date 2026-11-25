// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete bounded name conversion; successful extractors initialize full buffers. */
typedef struct {unsigned short word[8];} Name;
extern int FUN_overlay_18__021214f0(void *,unsigned short *,int),FUN_overlay_18__02121574(void *,char *,int);extern void *FUN_020c44a8(Name *,const unsigned short *),*FUN_020c4470(Name *,const char *);extern void FUN_020c44e4(void *,const void *);
int FUN_overlay_18__021215f4(unsigned *s,Name *out){int n;unsigned short wide[6];char bytes[12];Name a,b;int wideMode=0;if(s[0]<=3 && ((1u<<s[0])&11))wideMode=1;if(wideMode){n=FUN_overlay_18__021214f0(s,wide,6);if(n>0){FUN_020c44a8(&a,wide);FUN_020c44e4(out,&a);}}else{n=FUN_overlay_18__02121574(s,bytes,12);if(n>0){FUN_020c4470(&b,bytes);FUN_020c44e4(out,&b);}}return n;}
