// FUN_overlay_18__02121b58 @ 0x02121b58 (0x9a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch34.json; original draft retained for referenced provenance.
// FUN_overlay_18__02121b58 @ 0x02121b58 (code 0x92, full extent 0x9a, thumb)
// check: vers=2.0/sp2p3 target=0x9a candidate=0x9a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch457.md.
 */
extern int *FUN_overlay_18__02121808(void *);extern int FUN_overlay_18__02121d00(void *,int,int);extern int FUN_overlay_18__02121dd8(void *,int,int);extern void FUN_overlay_18__02120e70(void *);extern void FUN_overlay_18__02120e80(void *);extern void FUN_overlay_18__02120e94(void *);extern void FUN_overlay_18__02120ea4(void *);extern unsigned FUN_overlay_18__0212185c(void *);extern int FUN_overlay_18__02121c38(void *,unsigned);
int FUN_overlay_18__02121b58(int *self,unsigned direction) { int handled=1;unsigned selected;do{int x=FUN_overlay_18__02121808(self)[3];int y=FUN_overlay_18__02121808(self)[4];switch(direction){case 0:if(!FUN_overlay_18__02121d00(self,x,y))FUN_overlay_18__02120e70(FUN_overlay_18__02121808(self));break;case 1:if(!FUN_overlay_18__02121dd8(self,x,y))FUN_overlay_18__02120e80(FUN_overlay_18__02121808(self));break;case 2:FUN_overlay_18__02120e94(FUN_overlay_18__02121808(self));break;case 3:FUN_overlay_18__02120ea4(FUN_overlay_18__02121808(self));break;default:handled=0;break;}selected=FUN_overlay_18__0212185c(self);}while(handled && !FUN_overlay_18__02121c38(self,selected));self[41]=0;return handled; }
