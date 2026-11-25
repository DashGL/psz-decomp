// FUN_overlay_22__0219cd30 @ 0x0219cd30 (0x11c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch1.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219cd30 @ 0x0219cd30 (full extent 0x11c, thumb)
// check: vers=2.0/sp2p3 target=0x11c candidate=0x11c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* Complete dual-hazard timer, scale, and player-hit update for ov022. ABI evidence:
 * notes/sessions/coverage-overlays-2026-11-05-batch670.md. */
typedef struct Vec{int x,y,z;}Vec;extern void FUN_overlay_22__0219ce90(void *,int);extern unsigned FUN_02009c84(int),FUN_0200923c(unsigned,unsigned),FUN_02009f00(unsigned,unsigned);extern int FUN_02009c50(unsigned);extern void FUN_overlay_22__0219aed8(void *,int,const Vec *);extern void FUN_overlay_22__0219cec0(void *,int,int,int);
void FUN_overlay_22__0219cd30(char *self){int i=0;char *base=self+0x74;for(;i<2;i++){char *slot=base+i*20;int t=*(int *)slot;if(t==0){FUN_overlay_22__0219ce90(self,i);}else{int scale=0x1000;Vec v;int r;if(t<=150&&t>=113){if(t<=150&&t>=144)scale=((150-t)*0x666)/6;else if(t<=119&&t>=113)scale=((119-t)*0xc00)/6+0x666;else scale=0x666;}if(t<=6&&t>=0){unsigned bits;if(t>0)bits=FUN_0200923c(0x3f000000,FUN_02009c84(t<<12));else bits=FUN_02009f00(FUN_02009c84(t<<12),0x3f000000);scale=FUN_02009c50(bits)/6;}v.x=scale;v.y=0x1000;v.z=scale;FUN_overlay_22__0219aed8(self,*(int *)(slot+4),&v);r=(int)(((long long)scale*0x3800+0x800)>>12);r=(int)(((long long)r*r+0x800)>>12);FUN_overlay_22__0219cec0(self,*(int *)(slot+8),*(int *)(slot+0x10),r);if(*(int *)slot>0)(*(int *)slot)--;}}}
