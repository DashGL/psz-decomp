// FUN_overlay_22__0219b440 @ 0x0219b440 (0x80, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch6.json; original draft retained for referenced provenance.
// FUN_overlay_22__0219b440 @ 0x0219b440 (code 0x7c, full extent 0x80, thumb)
// check: vers=2.0/sp2p3 target=0x80 candidate=0x80 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch431.md.
 */
typedef struct {int x,y,z;} Vec;extern int FUN_overlay_22__0219cc58(void *);extern int FUN_overlay_22__0219a9a8(void *,int,void *,void *);extern int FUN_overlay_22__0219ae68(void *,int,int,void *);extern void FUN_overlay_22__0219af24(void *,int,int,int);extern void FUN_overlay_22__0219aebc(void *,int,void *);extern void FUN_overlay_22__0219aea0(void *,void *);
void FUN_overlay_22__0219b440(int *self) { int active=0;void *other=(void *)((int *)self[2])[14];if(other && FUN_overlay_22__0219cc58(other)==1)active=1;if(active==1){Vec position=*(Vec *)(self+4);unsigned short angle=0;FUN_overlay_22__0219a9a8(self,12,&position,&angle);if(self[24]==*(int *)0x020ed09c){self[24]=FUN_overlay_22__0219ae68(self,11,1,&position);FUN_overlay_22__0219af24(self,self[24],16,1);}else FUN_overlay_22__0219aebc(self,self[24],&position);}else FUN_overlay_22__0219aea0(self,self+24); }
