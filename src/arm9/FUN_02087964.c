// FUN_02087964 @ 0x02087964 (thumb)
// check: 2.0/sp2p3 target=0x278 candidate=0x278 words=101 exact_bytes=298 bad_relocs=0
// near: ndiff=101/158 size=0x278 vers=2.0/sp2p3 next="register coloring, local aggregate layout and instruction scheduling; displaced reloc diagnostics require recheck after layout match"
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Register and initialize a tracked display.
 * Four inputs: receiver, base descriptor, image source, display mode.
 * Allocation/rendering wrappers forward both inputs; no implicit r1 assumed. */
extern char *UNK_0211a540[];
extern void FUN_020473e8(void *,void *,int);
extern void *FUN_020ba8bc(unsigned int,unsigned int);
#pragma thumb off
extern void FUN_0206557c(unsigned int,void *,unsigned int),FUN_0206740c(void *,unsigned int);
#pragma thumb on
extern void FUN_02080b74(void *,void *),FUN_02080c54(void *,int *);
extern int FUN_02080ed4(void),FUN_02085880(int),FUN_02087718(int);
extern void FUN_020883c0(void *),FUN_020884f0(void),FUN_02088638(void *),FUN_020c193c(int,int,int,int,int);
void FUN_02087964(char *s,void *d,void *image,int mode){
 enum { E0=0, E1=1 }; int bounds[4],count,i,a,b,inside;char *pixels;
 FUN_020473e8(s,d,0);UNK_0211a540[*(int *)(s+232)]=s;
 *(int *)(s+260)=0;*(int *)(s+264)=mode;
 *(void **)(s+380)=FUN_020ba8bc(2048,32);
 if(*(void **)(s+380)){
  FUN_0206557c(0,*(void **)(s+380),2048);pixels=*(char **)(s+380)+128;
  FUN_02080b74(image,pixels);bounds[0]=0;bounds[1]=128;bounds[2]=0;bounds[3]=48;
  FUN_02080c54(pixels,bounds);FUN_0206740c(*(void **)(s+380),2048);
  *(int *)(s+372)=1;*(int *)(s+340)=bounds[0];*(int *)(s+344)=bounds[1];
 }
 *(int *)(s+348)=*(int *)(s+344)-*(int *)(s+340);
 *(int *)(s+352)=-((128-*(int *)(s+348))<<12)/128;
 count=0;for(i=0;i<4;i++)if(i!=*(int *)(s+232) && UNK_0211a540[i] && !*(int *)(UNK_0211a540[i]+364))++count;
 *(int *)(s+364)=((count<2)?E0:E1);
 if(!FUN_02080ed4() && FUN_02085880(*(int *)(s+232)))*(int *)(s+368)=1;
 FUN_020883c0(s);FUN_020884f0();
 inside=0;if(*(int *)(s+324)){
  a=*(int *)(s+328);if(a<=0)a=-a;
  if(a<2986){b=*(int *)(s+332);if(b<=0)b=-b;if(b<2239)inside=1;}
 }
 if(inside){*(int *)(s+300)=*(int *)(s+328)-*(int *)(s+352);*(int *)(s+304)=*(int *)(s+332);}
 else{*(int *)(s+300)=*(int *)(s+384);*(int *)(s+304)=*(int *)(s+388);}
 *(int *)(s+308)=-5461;
 switch(*(int *)(s+264)){
 default:case 0:*(int *)(s+312)=4;FUN_020c193c(1,13,0,0,-1);break;
 case 1:*(int *)(s+312)=2;*(int *)(s+288)=218;*(int *)(s+296)=8192;FUN_020c193c(1,14,0,0,-1);break;
 case 2:*(int *)(s+312)=8;*(int *)(s+288)=82;*(int *)(s+296)=4096;FUN_020c193c(1,15,0,0,-1);break;
 }
 *(int *)(s+316)=*(int *)(s+312);*(int *)(s+280)=1365/ *(int *)(s+312);
 if(*(int *)(s+380)){
  *(int *)(s+268)=FUN_02087718(*(int *)(s+232));
  if(*(int *)(s+268)){*(int *)(s+72)=((*(int *)(s+312)<<1)+90)* *(int *)(s+76);FUN_02088638(s);}
  else{*(int *)(s+272)=2;*(int *)(s+320)=1;}
 }
 s[252]=12;
}
