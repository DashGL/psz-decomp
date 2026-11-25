// FUN_02087d50 @ 0x02087d50 (0x1f4, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch01.json; original draft retained for referenced provenance.
// FUN_02087d50 @ 0x02087d50 (thumb)
// check: 2.0/sp2p3 target=0x1f4 candidate=0x1f4 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Fade, oscillate and move tracked display.
 * Receiver-only. Rounded long-long products and signed division retained. */
extern short UNK_020ed83c[];extern int UNK_020fa988;
extern void FUN_020883c0(void *),FUN_02034680(void *,void *);extern unsigned short FUN_0205c9e4(int,int);
void FUN_02087d50(char *s){
 int angle,dx,dy,dist;
 switch(*(int *)(s+272)){
 case 0:*(int *)(s+276)+=*(int *)(s+280);--*(int *)(s+312);if(*(int *)(s+312)<=0){*(int *)(s+276)=1365;*(int *)(s+312)=90;*(int *)(s+272)=1;}break;
 case 1:--*(int *)(s+312);if(*(int *)(s+312)<=0){*(int *)(s+312)=*(int *)(s+316);*(int *)(s+272)=2;}break;
 case 2:*(int *)(s+276)-=*(int *)(s+280);if(*(int *)(s+276)<0)*(int *)(s+276)=0;break;
 }
 *(int *)(s+292)+=*(int *)(s+296);angle=((unsigned short)*(int *)(s+292)>>4)*2;
 *(int *)(s+284)=(int)(((long long)*(int *)(s+288)*UNK_020ed83c[angle]+2048)>>12);
 if(*(int *)(s+284)<0)*(int *)(s+284)=-*(int *)(s+284);
 FUN_020883c0(s);dx=*(int *)(s+384)-*(int *)(s+300);dy=*(int *)(s+388)-*(int *)(s+304);
 dist=(int)(((long long)dx*dx+2048)>>12)+(int)(((long long)dy*dy+2048)>>12);
 if(dist/3<UNK_020fa988)FUN_02034680(s+300,s+384);
 else{
  if(dy){
   angle=(FUN_0205c9e4(dy,dx)>>4)*2;
   dx=(int)(((long long)UNK_020ed83c[angle+1]*682+2048)>>12);
   dy=(int)(((long long)UNK_020ed83c[angle]*682+2048)>>12);
  }else if(dx>=0)dx=682;else dx=-682;
  *(int *)(s+300)+=dx;*(int *)(s+304)+=dy;
 }
}
