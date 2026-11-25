// FUN_overlay_12__0212dc24 @ 0x0212dc24 (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch22.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212dc24 @ 0x0212dc24 (thumb)
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern void FUN_overlay_12__0212c6dc(void),FUN_overlay_12__0212c9a0(void),FUN_overlay_12__02131b10(int),FUN_overlay_12__02131ff8(void *,int),FUN_overlay_12__02131abc(void),FUN_overlay_12__02131f88(void *);
void FUN_overlay_12__0212dc24(int *self){if(self[16]==0){FUN_overlay_12__0212c6dc();FUN_overlay_12__0212c9a0();FUN_overlay_12__02131b10(4);FUN_overlay_12__02131ff8(self,1);*(int *)0x0213e20c=self[2];self[16]=1;}else if(self[16]==2){FUN_overlay_12__02131abc();FUN_overlay_12__02131f88(self);}}
