// FUN_0207e904 @ 0x0207e904 (inventory code 0x1d2, thumb)
// check: 2.0/sp2p3 target=0x1ec candidate=0x1f0 words=999 exact_bytes=999 bad_relocs=5
// near: ndiff=999/123 size=0x1ec vers=2.0/sp2p3 next="aggregate and unsigned halfword semantics recovered; remaining field-base reuse/scheduling shifts five literal slots"
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Initialize actor from descriptor and mode.
 * Four inputs: receiver, descriptor, behavior mode, table index.
 * Full extent including six pointer literals: 0x1ec bytes.
 * Five-halfword subrecord copy and scalar ldrh widths recovered2026-11-12;
 * candidate now0x1f0. Stop at remaining scheduling/base-reuse residual.
 * See notes/sessions/matching-upper-resume-2026-11-12.md. */
typedef struct {int x,y,z;} Vec307;
extern void FUN_020473e8(void *,void *,int);
extern unsigned int FUN_0207b860(void *,unsigned int);
extern char UNK_0211c844[];
extern int UNK_020f2bd4[],UNK_020f2be0[],UNK_020f2bec[],UNK_020f2c10[],UNK_020f2b44[];
typedef struct {unsigned short h[5];} Block_0207e904;
void FUN_0207e904(char *s,char *d,int mode,int index){
 int i,value;Vec307 v;
 FUN_020473e8(s,d,0);
 *(unsigned short *)(s+260)=*(unsigned short *)d;*(unsigned short *)(s+262)=*(unsigned short *)(d+2);
 *(Block_0207e904 *)(s+264)=*(const Block_0207e904 *)(d+4);
 *(int *)(s+276)=*(int *)(d+16);
 *(int *)(s+280)=*(int *)(d+20);
 *(int *)(s+284)=*(int *)(d+24);
 *(int *)(s+288)=*(int *)(d+28);
 *(Vec307 *)(s+292)=*(Vec307 *)(d+32);*(Vec307 *)(s+304)=*(Vec307 *)(d+44);
 *(unsigned short *)(s+316)=*(unsigned short *)(d+56);
 *(unsigned short *)(s+318)=*(unsigned short *)(d+58);
 *(unsigned short *)(s+320)=*(unsigned short *)(d+60);
 *(unsigned short *)(s+322)=*(unsigned short *)(d+62);
 *(int *)(s+324)=*(int *)(d+64);
 *(int *)(s+328)=*(int *)(d+68);
 *(int *)(s+332)=*(int *)(d+72);
 *(int *)(s+336)=*(int *)(d+76);
 *(int *)(s+340)=*(int *)(d+80);
 *(int *)(s+344)=*(int *)(d+84);
 *(int *)(s+348)=*(int *)(d+88);
 *(int *)(s+352)=*(int *)(d+92);
 *(int *)(s+356)=*(int *)(d+96);
 *(int *)(s+360)=mode;
 for(i=0;i<9;i++)((int *)(s+364))[i]=0;
 *(int *)(s+400)=0;*(int *)(s+404)=0;*(int *)(s+408)=4096;
 *(int *)(s+412)=0;*(int *)(s+416)=0;
 { int t = FUN_0207b860(UNK_0211c844,3)+13; *(int *)(s+72) = t * *(int *)(s+76); }
 value=0;
 switch(*(int *)(s+360)){
 default:case 0:
  *(int *)(s+408)=*(int *)(s+80);*(int *)(s+412)=1;
  value=*(int *)(s+80);*(int *)(s+416)=0;
  *(int *)(s+400)=1;*(int *)(s+404)=1;*(int *)(s+344)=39;break;
 case 1:
  *(int *)(s+404)=1;*(int *)(s+344)=40;
  if(index>=0 && index<3){
   *(int *)(s+408)=(UNK_020f2bd4[index]<<12)/10;
   *(int *)(s+412)=(UNK_020f2be0[index]<<12)/10;
   value=(UNK_020f2bec[index]<<12)/10;
   *(int *)(s+416)=UNK_020f2c10[index]<<12;
   *(int *)(s+400)=UNK_020f2b44[index];
  }break;
 }
 v.x=value;v.y=value;v.z=value;*(Vec307 *)(s+80)=v;
}
