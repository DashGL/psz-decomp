// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x80, exact bytes and relocation targets.
// FUN_overlay_10__021203e8 @ 0x021203e8
// check: 2.0/sp2p3 target=0x80 candidate=0x80 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern unsigned D_02122248[];
extern void *FUN_02093c00(int),*FUN_02093b2c(void *,int,unsigned);
extern void FUN_overlay_10__0211ff68(void *,const void *,unsigned,unsigned),FUN_overlay_10__0211ff88(void *,const void *,unsigned,unsigned);
void FUN_overlay_10__021203e8(char *self){
    void *messages;int count,i;
    *(unsigned *)(self+164)=0;*(unsigned *)(self+172)=*(unsigned *)(self+164);
    *(unsigned *)(self+152)=*(unsigned *)(self+168);*(unsigned *)(self+148)=0;*(unsigned *)(self+156)=1;
    FUN_overlay_10__0211ff88(self,0,0,0);
    messages=FUN_02093c00(0);if(!messages)return;
    FUN_overlay_10__0211ff68(self,0,0,0);
    count=*(int *)(self+152);
    for(i=0;i<count;i++)FUN_overlay_10__0211ff68(self,FUN_02093b2c(messages,5,D_02122248[i]),0,(unsigned)i*16);
}
