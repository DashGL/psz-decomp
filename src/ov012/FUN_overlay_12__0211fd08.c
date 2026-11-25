// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa4, exact bytes and relocation targets.
// check: 2.0/sp2p3 full_extent=0xa4 exact_bytes=0 bad_relocs=0
// Observed receiver proof: notes/sessions/matching-resume2-overlays-2026-11-12-receivers.json
// FUN_overlay_12__0211fd08 @ 0x0211fd08 (thumb)
// flags: -O4,s
extern void FUN_overlay_12__0211fef8(void *),FUN_overlay_12__0212006c(void *),FUN_overlay_12__0212007c(void *),FUN_overlay_12__0211ffac(void *);
extern void *FUN_02031a74(void),*FUN_02032208(void *,unsigned,unsigned,unsigned,unsigned);
extern void FUN_overlay_12__0212c8f8(void *,unsigned,unsigned,unsigned);
void FUN_overlay_12__0211fd08(char *self){
    unsigned base;
    int total,limit,index,i;
    FUN_overlay_12__0211fef8(self);
    base=*(unsigned *)(self+16);total=*(int *)(self+3020);limit=*(int *)(self+3024);
    if(*(unsigned *)(self+3036)){
        *(unsigned *)(self+3036)=0;
        FUN_overlay_12__0212006c(self);
        index=*(int *)(self+3032);
        for(i=0;index<total && i<limit;i++,index++){
            unsigned *entry=(unsigned *)(self+440+8*index);
            void *text=FUN_02032208(FUN_02031a74(),entry[0],0,0,entry[1]);
            FUN_overlay_12__0212c8f8(text,20*base+11,17*(base+(unsigned)i)+32,2);
        }
    }
    FUN_overlay_12__0212007c(self);
    FUN_overlay_12__0211ffac(self);
}
