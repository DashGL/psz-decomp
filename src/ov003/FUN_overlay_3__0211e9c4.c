// FUN_overlay_3__0211e9c4 @ 0x0211e9c4 (0x3e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_overlay_3__0211e9c4 @ 0x0211e9c4 (0x3e, Thumb)
// check: vers=2.0/sp2p3 target=0x3e candidate=0x3e words=0 exact_bytes=0 bad_relocs=0
// Advance startup state2/3 and cycle signed counter by seven; transition callback gets receiver,state.
extern void FUN_02095f90(void);extern int FUN_020c4848(void);extern void FUN_overlay_3__0211ec3c(void *,int);
void FUN_overlay_3__0211e9c4(int *self){if(self[4]==2){self[4]=3;FUN_02095f90();return;}if(self[4]==3){if(FUN_020c4848()==1)FUN_overlay_3__0211ec3c(self,4);self[12]++;if(self[12]/7>=5)self[12]=0;}}
