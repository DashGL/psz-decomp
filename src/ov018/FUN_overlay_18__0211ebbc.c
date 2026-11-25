// FUN_overlay_18__0211ebbc @ 0x0211ebbc (0x88, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch33.json; original draft retained for referenced provenance.
// FUN_overlay_18__0211ebbc @ 0x0211ebbc (code 0x84, full extent 0x88, thumb)
// check: vers=2.0/sp2p3 target=0x88 candidate=0x88 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch468.md.
 */
extern void FUN_020144f0(void);extern unsigned *FUN_overlay_18__0211e6f4(void *,int);extern void FUN_02071d0c(void *);extern void FUN_02090b44(void *);extern void FUN_020c32b4(void *,int);extern void FUN_overlay_18__0211ec44(void *,int,int);extern void FUN_02014714(void);
void FUN_overlay_18__0211ebbc(int *self,signed char *descriptor) { int selected,draw[4];FUN_020144f0();selected=self[18];if(selected==4 && FUN_overlay_18__0211e6f4(self+18,4)[0]<=7){FUN_02071d0c(draw);FUN_02090b44(draw);*(unsigned short *)draw=17;draw[2]=0x10000;draw[3]=0x126000;FUN_020c32b4(draw,self[17]);}if(selected<=3 && descriptor[32]==2)selected=selected*2+10;FUN_overlay_18__0211ec44(self,self[18],selected);if(descriptor[32]==2){int i;for(i=0;i<=3;i++)FUN_overlay_18__0211ec44(self,i,i*2+9);}FUN_02014714(); }
