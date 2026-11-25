// FUN_overlay_18__0211e764 @ 0x0211e764 (0x8c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch33.json; original draft retained for referenced provenance.
// FUN_overlay_18__0211e764 @ 0x0211e764 (code 0x80, full extent 0x8c, thumb)
// check: vers=2.0/sp2p3 target=0x8c candidate=0x8c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch468.md.
 */
extern void FUN_overlay_18__0211e738(void *);extern void FUN_overlay_18__0211e70c(void *);extern void *FUN_overlay_18__0211e6f4(void *,int);extern unsigned FUN_overlay_18__0211e66c(void *);extern unsigned FUN_overlay_18__0211e658(void *);
int FUN_overlay_18__0211e764(int *self,void *unused,unsigned direction) { int handled=0;switch(direction){case 0:FUN_overlay_18__0211e738(self+18);handled=1;break;case 1:FUN_overlay_18__0211e70c(self+18);handled=1;break;case 2:FUN_overlay_18__0211e66c(FUN_overlay_18__0211e6f4(self+18,self[18]));self[21]=-2;if(self[18]!=6){if(self[18]==4)*(int *)0x02124540=0;handled=1;self[22]=1;}break;case 3:FUN_overlay_18__0211e658(FUN_overlay_18__0211e6f4(self+18,self[18]));self[21]=2;if(self[18]!=6){if(self[18]==4)*(int *)0x02124540=0;handled=1;self[22]=1;}break;}return handled; }
