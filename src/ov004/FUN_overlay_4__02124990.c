// FUN_overlay_4__02124990 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_4__02124990 @ 0x02124990 (0x9c, Thumb)
// check: vers=2.0/sp2p3 target=0x9c candidate=0x9c words=0 exact_bytes=0 bad_relocs=0
// Render mode-dependent scrollbar; retain original unconditional division before visible-count test.
typedef struct {unsigned short h[4];int xy[2];} Draw;extern void FUN_02071d0c(void *),FUN_020c32b4(void *,unsigned int);extern void *FUN_02077f3c(void);extern unsigned int FUN_02077fec(void *);
extern const int data_0212d880[],data_0212d878[];extern const unsigned short data_0212d854[];
void FUN_overlay_4__02124990(int *self,int mode){Draw draw;int visible=data_0212d880[mode],count=self[61],excess=count-visible,base=data_0212d878[mode],step=(0x135000-base)/excess;if(count>visible){FUN_02071d0c(&draw);draw.h[0]=78;draw.xy[0]=0x9e000;draw.xy[1]=(unsigned int)base+(unsigned int)step*self[58];if(self[58]>=excess)draw.xy[1]=0x135000;FUN_020c32b4(&draw,FUN_02077fec(FUN_02077f3c()));draw.h[0]=data_0212d854[mode];draw.xy[1]=base-4096;FUN_020c32b4(&draw,self[0]);}}
