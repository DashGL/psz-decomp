// FUN_overlay_10__0211fc88 @ 0x0211fc88 (0xc4, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch40.json; original draft retained for referenced provenance.
// FUN_overlay_10__0211fc88 @ 0x0211fc88 (thumb)
// check: 2.0/sp2p3 target=0xc4 candidate=0xc4 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern void *FUN_020c2b50(void *),*FUN_020c3564(void *);
#pragma thumb off
extern void FUN_0200c938(void *,unsigned);
#pragma thumb on
extern void FUN_overlay_10__0211fff0(void *),FUN_overlay_10__021200b8(void *,void *,int,int,int,int,int);
void *FUN_overlay_10__0211fc88(unsigned *self,int rows){
    int i;
    self[0]=0x02122b1c;
    FUN_020c2b50(self+1);FUN_020c3564(self+2);FUN_020c3564(self+17);
    FUN_0200c938(self+32,8);
    self[34]=1;self[35]=0;
    for(i=0;i<2;i++)self[32+i]=-1;
    FUN_overlay_10__0211fff0(self);
    FUN_overlay_10__021200b8(self,self+2,8,32,120,(unsigned)rows<<4,521);
    if(rows<=2){
        FUN_overlay_10__021200b8(self,self+17,28,64,200,60,529);
        self[35]=60;
    }else{
        FUN_overlay_10__021200b8(self,self+17,28,84,200,20,529);
        self[35]=20;
    }
    return self;
}
