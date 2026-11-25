// FUN_0209158c @ 0x0209158c (inventory code 0x106, thumb)
// check: 2.0/sp2p3 target=0x106 candidate=0x102 words=999 exact_bytes=999 bad_relocs=0
// near: ndiff=999/66 size=0x106 vers=2.0/sp2p3 next="inspect register coloring, boolean materialization and instruction scheduling; semantics reconstructed"
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Map scene descriptor categories into an activity state and report transitions.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209158c.txt.
 */
extern int FUN_0206d3dc(void *,int *),FUN_0206d36c(void *,int *);int FUN_0209158c(char *s,int *input){int a=input[0],b=input[1],next=*(int *)(s+12),special=-1,mode;if(FUN_0206d3dc(input,&special)){if(special==0||(unsigned)(special-4)<=1)*(int *)(s+48)=1;else *(int *)(s+48)=0;}else *(int *)(s+48)=0;mode=-1;if(FUN_0206d36c(input,&mode)){if(mode==0)next=0;else next=-1;}else if(a!=*(int *)(s+28)||b!=*(int *)(s+32)){if(a==1&&(unsigned)b<=1)next=1;else if(a==1&&b==2)next=2;else if(a==3&&b==0)next=3;else if(a==2&&b==0)next=4;else if(a==5&&b==0)next=5;else if(a==5&&b==3)next=6;else if(a==4&&(b==0||b==2))next=7;else if(a==6&&b==2)next=8;else if(a==7&&(b==0||b==2))next=9;else if(a==8&&b!=4)next=10;else next=-1;}if(*(int *)(s+12)!=next){*(int *)(s+12)=next;*(int *)(s+44)=0;return 1;}return 0;}
