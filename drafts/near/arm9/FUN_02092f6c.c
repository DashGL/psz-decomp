// FUN_02092f6c @ 0x02092f6c (0x5b8, Thumb)
// check: vers=2.0/sp2p3 target=0x5b8 candidate=0x540 words=999 exact_bytes=999 bad_relocs=3
// near: ndiff=999/366 size=0x5b8 vers=2.0/sp2p3 next="sound and six-tick conditions corrected from ROM; remaining aggregate layout and scheduling"
// Moving launcher state, target tracking, projectile activation, and child updates.
typedef struct{int x,y,z;}Vec;typedef void (*Tick)(void *);
extern unsigned int UNK_0211a5bc;extern Vec UNK_020fafc0;extern short UNK_020ed83c[];
extern void FUN_02035408(Vec *,int,int,int),FUN_02030658(void *,void *),FUN_02033658(int,int,void *),FUN_020866b4(int,void *),FUN_0205c8cc(void *,void *),FUN_0203067c(void *,unsigned int),FUN_0203666c(void *),FUN_02036848(void *,void *),FUN_02046d94(void *,int,int),FUN_02092a38(void *),FUN_02092a10(void *,void *,unsigned int),FUN_0203041c(void *);
extern int FUN_0209399c(void *),FUN_020868f0(void *),FUN_0205c7ac(void *,void *),FUN_0205cc08(int),FUN_02033704(void);
#define W(o) (*(int *)(s+(o)))
#define H(o) (*(unsigned short *)(s+(o)))
#define B(o) (*(unsigned char *)(s+(o)))
#define P(o) (*(unsigned char **)(s+(o)))
#define V(o) (*(Vec *)(s+(o)))
#define CHILD() (*(void **)(P(412)+32*H(406)))
void FUN_02092f6c(unsigned char *s){
 Vec source,position,delta,direction,offset,velocity;unsigned char effect[100];unsigned short heading,target,difference,step,index;int type,reverse,count,subtype;void *child;
 type=B(46);
 if(type==1||type==3){if(W(112)==1){source=V(28);FUN_02035408(&position,source.x,W(96)+source.y,source.z);if(position.y<W(100)-W(104)){position.y=W(100)-W(104);W(112)=0;W(96)=0;}FUN_02030658(s,&position);}goto finish;}
 if(type!=2)goto finish;
 switch((unsigned int)W(112)){
 case 1:
 source=V(28);FUN_02035408(&position,source.x,W(96)+source.y,source.z);if(position.y>W(100)){position.y=W(100);W(112)=2;W(96)=0;}FUN_02030658(s,&position);break;
 case 2:
 W(84)++;if(!FUN_0209399c(s))break;W(84)=0;W(112)=3;
 if(!H(406)){source=V(28);W(376)=FUN_020868f0(&source);if((signed char)P(72)[43]==0){source=V(28);FUN_02033658(4,9,&source);}}
 FUN_020866b4(W(376),s+380);break;
 case 3:
 subtype=(signed char)P(72)[43];
 if(subtype==0){
  source=V(28);heading=H(44);FUN_02035408(&delta,W(380)-source.x,W(384)-source.y,W(388)-source.z);direction=delta;
  if(direction.x||direction.y||direction.z)FUN_0205c8cc(&direction,&direction);V(392)=direction;
  if(!(UNK_0211a5bc&1)){UNK_020fafc0.x=0;UNK_020fafc0.y=0;UNK_020fafc0.z=4096;UNK_0211a5bc|=1;}
  target=(unsigned short)FUN_0205cc08(FUN_0205c7ac(&UNK_020fafc0,s+392));if(W(392)<0)target=(unsigned short)(65536-target);
  difference=(unsigned short)(target-heading);reverse=0;if(difference>=32768){difference=(unsigned short)(65536-difference);reverse=1;}
  step=(unsigned short)(difference/10+728);
  if(difference>step){H(404)=reverse?heading-step:heading+step;FUN_0203067c(s,H(404));break;}
  H(404)=target;FUN_0203067c(s,H(404));count=++W(88);
  if(count<6)break;
  source=V(28);FUN_02033658(4,10,&source);FUN_0203666c(effect);*(int *)(effect+84)=49;
  position=V(28);index=(unsigned short)(H(44)>>4);offset.x=(int)(((long long)UNK_020ed83c[index*2]*4096+2048)>>12);offset.y=4915;offset.z=(int)(((long long)UNK_020ed83c[index*2+1]*4096+2048)>>12);
  FUN_02036848(&position,&offset);*(Vec *)(effect+32)=position;*(unsigned short *)(effect+58)=H(44);FUN_02046d94(effect,0,0);FUN_02092a38(CHILD());
  velocity.x=(int)(((long long)W(392)*2048+2048)>>12);velocity.y=0;velocity.z=(int)(((long long)W(400)*2048+2048)>>12);FUN_02092a10(CHILD(),&velocity,H(404));
  H(406)++;if(H(406)>=H(408))H(406)=0;W(112)=2;W(88)=0;
 }else if(subtype==1){
  source=V(28);FUN_02033658(4,10,&source);FUN_0203666c(effect);*(int *)(effect+84)=49;
  position=V(28);index=(unsigned short)(H(44)>>4);offset.x=(int)(((long long)UNK_020ed83c[index*2]*4096+2048)>>12);offset.y=4915;offset.z=(int)(((long long)UNK_020ed83c[index*2+1]*4096+2048)>>12);
  FUN_02036848(&position,&offset);*(Vec *)(effect+32)=position;*(unsigned short *)(effect+58)=H(44);FUN_02046d94(effect,0,0);FUN_02092a38(CHILD());
  index=(unsigned short)(H(44)>>4);velocity.x=(int)(((long long)UNK_020ed83c[index*2]*2048+2048)>>12);velocity.y=0;velocity.z=(int)(((long long)UNK_020ed83c[index*2+1]*2048+2048)>>12);FUN_02092a10(CHILD(),&velocity,H(44));
  H(406)++;if(H(406)>=H(408))H(406)=0;W(112)=2;W(88)=0;
 }break;
 }
 finish:
 if(type==4){if(!FUN_02033704()){heading=H(44);if(heading>=5461)heading=(unsigned short)(heading-5461);else{heading=(unsigned short)(heading+60075);if(W(372)>2)W(108)|=2;else W(372)++;}FUN_0203067c(s,heading);}else W(108)|=2;}
 FUN_0203041c(s);
 if(CHILD()){for(index=0;index<3;index++){child=*(void **)(P(412)+32*index);if(child&&!*(int *)((unsigned char *)child+8))(*(Tick **)child)[0](child);}}
}
