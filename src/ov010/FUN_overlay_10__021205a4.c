// FUN_overlay_10__021205a4 @ 0x021205a4 (0x7c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch43.json; original draft retained for referenced provenance.
// FUN_overlay_10__021205a4 @ 0x021205a4 (thumb)
// check: 2.0/sp2p3 target=0x7c candidate=0x7c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern void FUN_020144f0(void),FUN_02014714(void),FUN_overlay_10__0211feb8(void *,int,int),FUN_overlay_10__0211ff08(void *,int),FUN_overlay_10__02121084(unsigned),FUN_overlay_10__021203e8(void *),FUN_overlay_10__02120468(void *);
int FUN_overlay_10__021205a4(char *self){
    unsigned pending;
    if(*(unsigned *)(self+164)==0){FUN_020144f0();FUN_overlay_10__0211feb8(self,*(int *)(self+148),*(int *)(self+152));FUN_02014714();}
    else{FUN_020144f0();FUN_overlay_10__0211feb8(self,-1,1);FUN_overlay_10__0211ff08(self,*(int *)(self+148));FUN_02014714();}
    FUN_overlay_10__02121084(*(unsigned *)(self+148));
    pending=*(unsigned *)(self+172);
    if(pending!=*(unsigned *)(self+164)){if(pending==0)FUN_overlay_10__021203e8(self);else if(pending==1)FUN_overlay_10__02120468(self);}
    return 0;
}
