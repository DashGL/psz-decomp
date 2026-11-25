// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0xe4, exact bytes and relocation targets.
//cpp
struct Archive_020415f8 { virtual ~Archive_020415f8(); unsigned char data[128]; };
extern "C" {
// Verified pinned2.0/sp2p3 full228-byte extent and relocation targets.
// Scope: notes/reference/cache-family-20261113/ownership-proof.json
// flags: -O4,s
extern void *DAT_02108c84;
extern void FUN_020418c8(void *,void *),FUN_02041510(void *),FUN_020ba8c4(void *),FUN_02033fcc(void *,unsigned int);extern int FUN_02037c5c(void *,unsigned int),FUN_02037d20(void *,unsigned int),FUN_02037b88(void *,unsigned int);void FUN_020415f8(char *s){void *m,*p;*(int *)(s+4)=0;*(int *)(s+28)=0;*(int *)(s+12)=0;m=DAT_02108c84;FUN_020418c8(s,s+54);FUN_020418c8(s,s+40);if(m&&FUN_02037c5c(m,*(unsigned short *)(s+42))){*(unsigned short *)(s+42)=65535;*(unsigned short *)(s+56)=65535;}FUN_02041510(s+40);FUN_02041510(s+54);p=*(void **)(s+36);if(p){FUN_020ba8c4(p);*(void **)(s+36)=0;}p=*(void **)(s+32);if(p){delete (Archive_020415f8*)p;*(void **)(s+32)=0;}if(m){if(FUN_02037d20(m,*(unsigned short *)(s+18)))*(unsigned short *)(s+18)=65535;FUN_02033fcc(m,*(unsigned short *)(s+16));if(FUN_02037b88(m,*(unsigned short *)(s+16)))*(unsigned short *)(s+16)=65535;if(FUN_02037c5c(m,*(unsigned short *)(s+20)))*(unsigned short *)(s+20)=65535;}*(unsigned short *)(s+16)=65535;*(unsigned short *)(s+18)=65535;*(unsigned short *)(s+20)=65535;p=*(void **)(s+24);if(p){FUN_020ba8c4(p);*(void **)(s+24)=0;}p=*(void **)s;if(p){delete (Archive_020415f8*)p;*(void **)s=0;}p=*(void **)(s+8);if(p){FUN_020ba8c4(p);*(void **)(s+8)=0;}}

}
