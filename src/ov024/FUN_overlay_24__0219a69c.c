// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x84, exact bytes and relocation targets.
// FUN_overlay_24__0219a69c @ 0x0219a69c
// check: 2.0/sp2p3 target=0x84 candidate=0x84 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern int D_0219c5e8[];
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch435.md.
 */
extern int FUN_overlay_24__0219a884(void *);extern int FUN_020370b8(void *,int,void *);extern void FUN_02037390(void *,void *);extern int FUN_overlay_24__0219a820(void *,void *);extern int FUN_overlay_24__0219a7d8(void *,void *);extern void FUN_02037910(void *,int);extern void FUN_overlay_24__0219a720(void *);
void FUN_overlay_24__0219a69c(int *self) { void *owner=(void *)self[1];if(FUN_overlay_24__0219a884(self)){int target=self[18];int vector[3],distance;if(FUN_020370b8(owner,target,vector)==1){FUN_02037390(&distance,vector);if(FUN_overlay_24__0219a820(self,&distance)==1){FUN_02037910(self,self[13]);self[19]=0;}else if(FUN_overlay_24__0219a7d8(self,vector)==1){FUN_02037910(self,self[13]);if(target<=3)D_0219c5e8[1]=target;self[19]=1;}else FUN_02037910(self,self[17]);}else{FUN_overlay_24__0219a720(self);FUN_02037910(self,self[16]);}} }
