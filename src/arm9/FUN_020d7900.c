// flags: -O4,p
// check: 2.0/sp2p3 target=0x92 candidate=0x90 words=999 exact_bytes=999 bad_relocs=0
// near: ndiff=999/37 size=0x92 vers=2.0/sp2p3 next="Thumb byte permutation and keystream register allocation"
// USA record and vector operations; alias-sensitive load/store order retained.
unsigned int FUN_020d7900(unsigned char *s,unsigned int input){unsigned int old=s[256],a,b,c,t,v,extra,result;s[256]=(unsigned char)(old+1);s[257]=(unsigned char)(s[257]+s[old]);t=s[s[260]];a=s[260];b=s[257];s[a]=s[b];a=s[259];v=s[a];b=s[257];s[b]=(unsigned char)v;a=s[256];v=s[a];b=s[259];s[b]=(unsigned char)v;a=s[256];s[a]=(unsigned char)t;s[258]=(unsigned char)(s[258]+s[t]);a=s[258];b=s[259];v=s[a];c=s[256];extra=s[b];v=(v+s[c])&255;result=input^s[v];a=s[257];v=s[a];b=s[260];v=(v+(s[b]+extra))&255;v=s[v];result^=s[v];s[259]=(unsigned char)result;s[260]=(unsigned char)input;return s[259];}
