// flags: -O4,p
// FUN_overlay_24__021998f4 @ 0x021998f4 (code 0xc0, full extent 0xc4, thumb)
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch490.md.
 */
extern short DAT_020ed83c[];
typedef struct {int x,y,z;} Vec;typedef struct {int backwardScale,forwardScale;Vec forward,backward;} Frame;extern void FUN_02040c0c(void *,int,int,int,int);extern void FUN_020445a8(void *,int,int);extern int FUN_02036c34(void *);extern int FUN_0205c520(int,int);extern void FUN_02092654(void *,void *);extern void FUN_overlay_24__021990a0(void *,void *);
void FUN_overlay_24__021998f4(int *self) { Frame f;int *owner;int delta,speed;unsigned short angle;short *table=DAT_020ed83c;unsigned index;FUN_02040c0c((void *)self[1],0,0,4096,0);FUN_020445a8((void *)self[1],0,0);owner=(int *)self[1];delta=FUN_02036c34(owner);angle=((unsigned short *)owner)[34];speed=FUN_0205c520(12288,FUN_0205c520(122880,delta));index=(angle>>4)*2;f.forward.x=table[index];f.forward.y=0;f.forward.z=table[index+1];*(Vec *)(self+4)=f.forward;f.forwardScale=speed;FUN_02092654(self+4,&f.forwardScale);self[3]=FUN_0205c520(122880,delta)>>12;index=((unsigned short)(angle+32768)>>4)*2;f.backward.x=table[index];f.backward.y=0;f.backward.z=table[index+1];f.backwardScale=12288;FUN_02092654(&f.backward,&f.backwardScale);FUN_overlay_24__021990a0((void *)self[1],&f.backward); }
