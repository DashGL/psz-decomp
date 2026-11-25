// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
// check: 2.0/sp2p3 full_extent=0x34 exact_bytes=0 bad_relocs=0
// Observed call proof: notes/sessions/matching-overlays-2026-11-12-small-diff-receiver.json
// flags: -O4,s
extern void *data_0213f2dc;
extern int *FUN_overlay_12__02135454(void);
extern int FUN_overlay_12__02134fe0(void *),FUN_overlay_12__02134ca0(void *);
extern void FUN_overlay_12__02136808(int,void *),FUN_overlay_12__02132410(void);
void FUN_overlay_12__02134f8c(void)
{
    int *self=FUN_overlay_12__02135454();
    if(self&&FUN_overlay_12__02134fe0(self)){
        FUN_overlay_12__02136808(self[4],data_0213f2dc);self[4]=-1;
        FUN_overlay_12__02132410();FUN_overlay_12__02134ca0(self);
    }
}
