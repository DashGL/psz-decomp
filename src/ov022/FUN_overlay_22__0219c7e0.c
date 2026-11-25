// FUN_overlay_22__0219c7e0 @ 0x0219c7e0 (0x9e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch4.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219c7e0 @ 0x0219c7e0 (code 0x9e, full extent 0x9e, thumb)
// check: vers=2.0/sp2p3 target=0x9e candidate=0x9e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch449.md.
 */
extern void *FUN_02036848(void *,void *);extern void FUN_overlay_22__0219aa30(void *,void *,unsigned short,unsigned short,unsigned short);extern int FUN_overlay_22__0219ae68(void *,int,int,void *);extern void FUN_overlay_22__0219af24(void *,int,int,int);extern void FUN_overlay_22__0219a05c(void *,int);extern void FUN_overlay_22__0219ada4(void *,int,int,void *);
void FUN_overlay_22__0219c7e0(int *self) { if(self[5]>0){((unsigned short *)self)[20]+=((unsigned short *)self)[55];FUN_02036848(self+4,self+7);self[8]-=82;FUN_overlay_22__0219aa30(self,self+4,((unsigned short *)self)[20],((unsigned short *)self)[21],((unsigned short *)self)[22]);if(self[18]%15==0){int handle=FUN_overlay_22__0219ae68(self,19,0,self+4);FUN_overlay_22__0219af24(self,handle,16,1);}if(self[5]<=0){int handle;self[5]=0;FUN_overlay_22__0219a05c(self,0);handle=FUN_overlay_22__0219ae68(self,20,0,self+4);FUN_overlay_22__0219af24(self,handle,16,1);FUN_overlay_22__0219ada4(self,3,3,self+4);}} }
