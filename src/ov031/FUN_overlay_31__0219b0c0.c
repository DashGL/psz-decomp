// FUN_overlay_31__0219b0c0 @ 0x0219b0c0 (0x6c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch6.json; original draft retained for referenced provenance.
// FUN_overlay_31__0219b0c0 @ 0x0219b0c0 (code 0x68, full extent 0x6c, thumb)
// check: vers=2.0/sp2p3 target=0x6c candidate=0x6c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch421.md.
 */
extern void FUN_overlay_31__0219b318(void *);extern void FUN_overlay_31__0219b594(void *);extern void FUN_overlay_31__0219b640(void *);extern void FUN_overlay_31__0219b87c(void *,int *);extern void *FUN_020352a4(void *,int);extern void *FUN_02039200(void *);extern int FUN_0203bf48(void *);
void FUN_overlay_31__0219b0c0(void *self,int command) { switch(command){case 0:FUN_overlay_31__0219b318(self);break;case 10:{int i;for(i=0;i<=3;i++){void *entity=FUN_02039200(FUN_020352a4(*(void **)0x02108cf4,i));if(entity && FUN_0203bf48(entity))FUN_overlay_31__0219b87c(self,&i);}break;}case 2:FUN_overlay_31__0219b594(self);break;case 4:FUN_overlay_31__0219b640(self);break;} }
