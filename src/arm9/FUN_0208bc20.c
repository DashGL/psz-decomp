// FUN_0208bc20 @ 0x0208bc20 (0xa0, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch02.json; original draft retained for referenced provenance.
// FUN_0208bc20 @ 0x0208bc20 (inventory code 0x9a, thumb)
// check: 2.0/sp2p3 target=0xa0 candidate=0xa0 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize text widget and populate current character name.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208bc20.txt.
 */
typedef struct {int v[8];} Eight;extern Eight UNK_020f420c;extern void FUN_0200c938(void *,int),FUN_020c4434(void *),FUN_0207775c(void *),FUN_020c35ac(void *,int),FUN_020c35d4(void *,void *),FUN_020c38f0(void *,int),FUN_020c3f00(void *,void *,int);extern void *FUN_020ba894(int),*FUN_020c3564(void *),*FUN_02086e3c(void);extern char *FUN_020870c4(void *);extern int FUN_02087138(void *);void *FUN_0208bc20(char *s){Eight setup;void *p;*(int *)s=0;FUN_0200c938(s+4,13);FUN_020c4434(s+18);FUN_0207775c(s+36);*(int *)(s+72)=-1;*(int *)(s+76)=2;*(int *)(s+80)=0;*(int *)(s+84)=0;*(int *)(s+76)=2;*(int *)(s+72)=-1;if(!*(void **)s){p=FUN_020ba894(60);if(p)p=FUN_020c3564(p);*(void **)s=p;FUN_020c35ac(p,1);setup=UNK_020f420c;FUN_020c35d4(*(void **)s,&setup);FUN_020c38f0(*(void **)s,0);}s[4]=0;if(FUN_02087138(FUN_02086e3c())==1)FUN_020c3f00(s+4,FUN_020870c4(FUN_02086e3c())+2,13);return s;}
