// FUN_0209a52c @ 0x0209a52c (thumb)
// check: 2.0/sp2p3 target=0x2bc candidate=0x2b8 words=999 exact_bytes=999 bad_relocs=0
// near: ndiff=999/175 size=0x2bc vers=2.0/sp2p3 next="register coloring, local aggregate layout and instruction scheduling; displaced reloc diagnostics require recheck after layout match"
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Populate attack/effect descriptor by action category. */
extern int FUN_0209a4f4(void *,int),FUN_0209a4d4(void *);
#define BASE360 out[0]=0;out[1]=2;out[9]|=1
#define DAMAGE360 BASE360;out[10]|=2
void FUN_0209a52c(int *s,int *out,unsigned kind){
 if(kind-9<=1){DAMAGE360;out[12]=s[4];return;}
 if(kind-11<=1){DAMAGE360;out[12]=s[4];return;}
 if(kind-17<=1){DAMAGE360;if(kind==17)out[12]=s[4];else out[12]=(int)(((long long)s[4]*410+2048)>>12);return;}
 if(kind-13<=1){DAMAGE360;if(kind==13)out[12]=s[4];else out[12]=164;return;}
 if(kind-15<=1){DAMAGE360;if(kind==15)out[12]=s[4];else out[12]=82;out[15]=FUN_0209a4f4(s,s[5]);out[16]=FUN_0209a4d4(s);out[19]=1;return;}
 if(kind-21<=1){DAMAGE360;if(kind==21)out[12]=s[4];else out[12]=(int)(((long long)s[4]*3072+2048)>>12);return;}
 if(kind==19){DAMAGE360;out[12]=s[4];return;}
 if(kind==20){DAMAGE360;out[12]=s[4];out[15]=FUN_0209a4f4(s,s[5]);out[16]=FUN_0209a4d4(s);out[19]=1;return;}
 if(kind==23){DAMAGE360;out[10]|=4;out[12]=s[4];return;}
 if(kind==24){BASE360;out[15]=FUN_0209a4f4(s,s[5]);out[16]=4;out[19]=1;return;}
 if(kind-1<=1){out[0]=1;out[45]|=2;out[42]=50;out[44]|=1;return;}
 if(kind-3<=1){BASE360;out[15]=FUN_0209a4f4(s,s[5]);if(kind==3)out[16]=FUN_0209a4d4(s);else out[16]=5;out[19]=1;return;}
 if(kind-5<=1){BASE360;out[15]=FUN_0209a4f4(s,s[5]);if(kind==5)out[16]=FUN_0209a4d4(s);else out[16]=5;out[19]=1;return;}
 if(kind-7<=1){BASE360;out[15]=FUN_0209a4f4(s,s[5]);if(kind==7)out[16]=FUN_0209a4d4(s);else out[16]=5;out[19]=1;}
}
