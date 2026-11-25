// FUN_overlay_10__02120468 @ 0x02120468 (0xb6, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch40.json; original draft retained for referenced provenance.
// FUN_overlay_10__02120468 @ 0x02120468 (thumb)
// check: 2.0/sp2p3 target=0xb6 candidate=0xb6 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern void *FUN_02093c00(int),*FUN_02093b2c(void *,int,unsigned);
extern void FUN_overlay_10__0211ff68(void *,const void *,unsigned,unsigned),FUN_overlay_10__0211ff88(void *,const void *,unsigned,unsigned);
void FUN_overlay_10__02120468(char *self){
    void *first,*second;
    *(unsigned *)(self+164)=1;*(unsigned *)(self+172)=*(unsigned *)(self+164);
    *(unsigned *)(self+152)=2;*(unsigned *)(self+148)=1;*(unsigned *)(self+156)=0;
    first=FUN_02093c00(0);second=FUN_02093c00(1);if(!first || !second)return;
    FUN_overlay_10__0211ff68(self,0,0,0);
    FUN_overlay_10__0211ff68(self,FUN_02093b2c(first,5,6),0,0);
    FUN_overlay_10__0211ff88(self,0,0,0);
    FUN_overlay_10__0211ff88(self,FUN_02093b2c(first,6,2),100,0);
    FUN_overlay_10__0211ff88(self,FUN_02093b2c(second,2,0),100,41);
    FUN_overlay_10__0211ff88(self,FUN_02093b2c(second,2,1),100,51);
}
