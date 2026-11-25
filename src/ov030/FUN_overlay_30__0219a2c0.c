// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x80, exact bytes and relocation targets.
// FUN_overlay_30__0219a2c0 @ 0x0219a2c0
// check: 2.0/sp2p3 target=0x80 candidate=0x80 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern int D_0219b040[];
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch430.md.
 */
typedef struct {int x,y,z;} Vec;extern void FUN_overlay_30__0219a340(void *);extern void FUN_02043ea4(void *,int,int);extern void FUN_02043f30(void *,unsigned,void *);extern int FUN_02072650(void *,int,int,int);extern void FUN_02072750(void *,int,void *);extern int FUN_02074e9c(void *,int,int,int);
void FUN_overlay_30__0219a2c0(int *self,void *position,unsigned angle,int value) { int *p;FUN_overlay_30__0219a340(self);p=(int *)self[53];p[14]=0;*(Vec *)p=*(Vec *)position;p[1]=D_0219b040[3];*(unsigned short *)((char *)p+20)=angle;*(unsigned short *)((char *)p+44)=182;p[3]=D_0219b040[4];p[9]=D_0219b040[2];p[7]=value;p[13]|=1;FUN_02043ea4(self,3,1);FUN_02043f30(self,3,p);p[8]=FUN_02072650(self,3,0,0);FUN_02072750(self,p[8],p);p[12]=FUN_02074e9c(self,2,1,0); }
