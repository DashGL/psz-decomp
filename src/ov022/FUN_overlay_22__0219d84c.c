// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xc0, exact bytes and relocation targets.
// FUN_overlay_22__0219d84c @ 0x0219d84c
// check: 2.0/sp2p3 target=0xc0 candidate=0xc0 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern short D_020ed83c[];
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch484.md.
 */
typedef struct {unsigned short angle,pad;int z,x;} Frame;extern void FUN_overlay_22__021a0570(void *,int *,int *,unsigned short *);extern void FUN_overlay_22__0219aa30(void *,void *,unsigned,unsigned,unsigned);extern void FUN_overlay_22__0219af60(void *,int,int);extern void FUN_overlay_22__0219cb68(void *,int,int);
void FUN_overlay_22__0219d84c(int *self) { Frame f;short *table=D_020ed83c;f.x=0;f.z=0;f.angle=0;FUN_overlay_22__021a0570((void *)self[2],&f.x,&f.z,&f.angle);((unsigned short *)self)[21]=((int)(0u-((unsigned)self[18]<<16)))/150+f.angle;self[4]=f.x+(int)(((long long)table[(((unsigned short *)self)[21]>>4)*2+1]*8192+2048)>>12);self[6]=f.z-(int)(((long long)table[(((unsigned short *)self)[21]>>4)*2]*8192+2048)>>12);FUN_overlay_22__0219aa30(self,self+4,((unsigned short *)self)[20],((unsigned short *)self)[21],((unsigned short *)self)[22]);if(self[18]%22==0)FUN_overlay_22__0219af60(self,5,3);if(self[18]>=150)FUN_overlay_22__0219cb68(self,10,0); }
