enum { E0 = 0, E1 = 1 };
extern char DAT_020f71ec[];
// FUN_0203c8f0 @ 0x0203c8f0 (inventory code 0x19a, thumb)
// check: 2.0/sp2p3 target=0x1b0 candidate=0x1a4 words=999 exact_bytes=999 bad_relocs=2
// near: ndiff=999/108 size=0x1b0 vers=2.0/sp2p3 next="literal pooling, register allocation and stack scheduling"
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 150.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b150/0203c8f0.txt.
 */
extern void FUN_020abd74(void *),FUN_020abe84(void *),FUN_020ab774(void *),FUN_0203dfa8(void *),FUN_0203ac14(void *),FUN_020adb08(void *),FUN_020abf78(void *),FUN_020ac2b4(void *),FUN_0203cc8c(void *),FUN_0203caa8(void *),FUN_0203d55c(void *);extern void *FUN_02077930(void),*FUN_02086e3c(void),*FUN_020b08a0(void *);extern unsigned int FUN_02077c98(void *,int);extern void FUN_02077c78(void *,unsigned int,int),FUN_0203afe8(void *,int),FUN_02039534(void *,void *),FUN_020397d4(void *),FUN_0203caa0(int,int,void *,int);extern int FUN_020a8bb0(void *),FUN_020bbfa8(int),FUN_020bbf6c(int);
#define W(n) (*(unsigned int *)(s+(n)))
#define H(n) (*(unsigned short *)(s+(n)))
void FUN_0203c8f0(char *s){unsigned int state;if(W(592)&4)return;W(640)=FUN_02077c98(FUN_02077930(),0);W(644)=FUN_02077c98(FUN_02077930(),1);W(648)=FUN_02077c98(FUN_02077930(),2);W(652)=0;
FUN_020abd74(s);FUN_020abe84(s);FUN_020ab774(s);FUN_0203dfa8(s);FUN_0203ac14(s);FUN_020adb08(s);FUN_020abf78(s);FUN_020ac2b4(s);FUN_0203cc8c(s);FUN_0203caa8(s);FUN_0203d55c(s);FUN_02077c78(FUN_02077930(),W(640),0);FUN_02077c78(FUN_02077930(),W(644),1);FUN_02077c78(FUN_02077930(),W(648),2);H(596)++;H(598)++;H(314)++;state=W(576);if((state==3||state==0||state-5<=2)?E1:E0){H(312)++;FUN_0203afe8(s,0);}else{H(312)=0;FUN_0203afe8(s,1);}if(W(3620)){W(3620)=0;W(3616)++;}else W(3616)=0;FUN_02039534(s+416,FUN_020b08a0(FUN_02086e3c()));s[323]=FUN_020a8bb0(s+416);FUN_020397d4(s);if(FUN_020bbfa8(1024)&&FUN_020bbf6c(4)){if(W(3628))W(3628)=0;else W(3628)=1;}if(W(3628))FUN_0203caa0(5,7,DAT_020f71ec,*(short *)(s+340));}
