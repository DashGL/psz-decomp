// FUN_overlay_1__0211e708 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_1__0211e708 @ 0x0211e708 (0x6c, Thumb)
// check: vers=2.0/sp2p3 target=0x6c candidate=0x6c words=0 exact_bytes=0 bad_relocs=0
// Restore display enables with two volatile reads, release resource index and owned singleton child.
extern int data_0211e7a0;extern void *data_0211e7e0;extern void *FUN_0208f068(void);extern void FUN_0208efd4(void *,int),FUN_020c38f0(void *,int);
void FUN_overlay_1__0211e708(void){unsigned int bits;void *p;bits=(*(volatile unsigned int *)0x04000000&0x1f00)>>8;*(volatile unsigned int *)0x04000000=(*(volatile unsigned int *)0x04000000&0xffffe0ff)|((bits|31)<<8);p=FUN_0208f068();if(p){int index=data_0211e7a0;if(index>=0)FUN_0208efd4(p,index);}data_0211e7a0=-1;p=data_0211e7e0;if(p){FUN_020c38f0(p,0);p=data_0211e7e0;if(p)((void (*)(void *))(*(void ***)p)[1])(p);data_0211e7e0=0;}}
