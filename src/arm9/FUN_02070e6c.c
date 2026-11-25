// FUN_02070e6c @ 0x02070e6c (0x128, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch07-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x128 candidate=0x128 words=0 exact_bytes=0 bad_relocs=0
/* USA ROM reconstruction, 2026-11-04. Advance playback phases and segment indices, including requested stop transitions.
 * Evidence: scratch/coverage-high-game/inspect210.txt and 02070e6c.txt.
 * Field roles remain provisional. */
#define W(n) (*(int *)(s+(n)))
#define D(n) (*(int *)(*(char **)(s+28)+(n)))
void FUN_02070e6c(char *s){int total,i;if((unsigned)(W(20)-3)<=1){if(W(12)==D(36)-1)W(8)=0;else{total=0;i=0;while(i<=W(12)){total+=(*(int **)(*(char **)(s+28)+44))[i];++i;}W(8)=total;}}if(W(40)&&(unsigned)(W(20)-1)<=1){W(20)=6;W(4)=D(24);W(16)=0;W(8)=0;return;}switch(W(20)){case 1:if(D(12)!=-1){W(20)=3;W(4)=D(12)+W(12);return;}W(20)=2;if(++W(8)>=D(32))W(8)=0;W(4)=D(8)+W(8);return;case 2:if(D(16)!=-1){W(20)=4;W(4)=D(16)+W(12);return;}W(20)=1;if(++W(8)>=D(32))W(8)=0;W(4)=D(4)+W(8);return;case 3:W(20)=2;W(4)=D(8)+W(8);return;case 4:case 7:W(20)=1;W(4)=D(4)+W(8);return;case 6:W(20)=5;W(4)=D(20);return;case 5:W(20)=7;W(4)=D(28);return;}}
