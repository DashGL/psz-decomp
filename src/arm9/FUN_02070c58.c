// flags: -O4,s
// check: 2.0/sp2p3 target=0x178 candidate=0x170 words=999 exact_bytes=999 bad_relocs=3
// near: ndiff=999/94 size=0x178 vers=2.0/sp2p3 next="inspect register coloring, boolean materialization and instruction scheduling; semantics reconstructed"
/* USA ROM reconstruction, 2026-11-04. Advance timed audio sequence and mode transitions.
 * Evidence: scratch/coverage-high-game/inspect279.txt and 02070c58.txt. */
extern void *UNK_0210e24c;extern void FUN_020c1e90(int,short *),FUN_020c1ec4(int,int),FUN_02070e6c(void *),FUN_020c18d8(int,int);extern int FUN_020513ec(void *,int *),FUN_02070f94(void *);
enum { E0 = 0, E1 = 1 };
#define W(n) (*(int *)(s+(n)))
#define C(n) (*(int *)(*(char **)(s+28)+(n)))
void FUN_02070c58(char *s){short state;int mode,changed,active,kind;int **table;if(!W(20))return;state=0;FUN_020c1e90(16,&state);if(state!=1)return;if(!W(44)){mode=W(20);if((unsigned)(mode-1)<=1){table=*(int ***)(*(char **)(s+28)+48);W(32)=table[mode-1][W(8)];}else if((unsigned)(mode-3)<=1){table=*(int ***)(*(char **)(s+28)+48);W(32)=table[mode-1][W(12)];}else if(mode==5){table=*(int ***)(*(char **)(s+28)+48);W(32)=table[mode-1][W(16)];}else if((unsigned)(mode-6)<=1){table=*(int ***)(*(char **)(s+28)+48);W(32)=table[mode-1][0];}}if(W(32)<=W(44)){FUN_020c1ec4(16,0);changed=0;if(UNK_0210e24c?E1:E0){active=FUN_020513ec(UNK_0210e24c,&kind);if((kind==2&&!W(40))||(kind!=2&&W(40)&&W(20)==5)){W(40)=!W(40);changed=1;}else if((W(20)==1&&active)||(W(20)==2&&!active))changed=1;}mode=W(20);if(mode==3||mode==4||mode==6||mode==7||changed)FUN_02070e6c(s);else if(mode==5){W(16)++;if(W(16)>=C(40))W(16)=0;W(4)=W(16)+C(20);}else{W(8)++;if(W(8)>=C(32))W(8)=0;W(4)=(W(20)==2?C(8):C(4))+W(8);}W(12)=FUN_02070f94(s);FUN_020c18d8(W(4),5);W(44)=0;}else W(44)++;}
