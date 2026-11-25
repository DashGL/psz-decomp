// FUN_overlay_12__021287a8 @ 0x021287a8 (0x10a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch37.json; original draft retained for referenced provenance.
// FUN_overlay_12__021287a8; full Thumb extent 0x10a
// check: vers=2.0/sp2p3 target=0x10a candidate=0x10a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern char *FUN_02086e3c(void);
extern int FUN_020b0274(void *,void *),FUN_020b025c(void *,void *),FUN_020849d4(void *),FUN_020b03bc(void *,int,int,int),FUN_020b028c(void *,void *,int),FUN_020b0450(void *,int,int);
int FUN_overlay_12__021287a8(int *self,void *item,int slot)
{
    void *pack,*store;
    if(self[1]==0) {
        pack=FUN_02086e3c()+0x10;
        if(self[2]==0)store=FUN_02086e3c()+0x28;
        else store=FUN_02086e3c()+0x1c;
        if(!FUN_020b0274(store,item) || !FUN_020b03bc(pack,slot,1,FUN_020849d4(item)))return 0;
        if(FUN_020b028c(store,item,1)==-1)return 0;
        if(!FUN_020b0450(pack,slot,FUN_020849d4(item)))return 0;
        self[12]=1;return 1;
    } else {
        pack=FUN_02086e3c()+0x10;
        if(self[2]==0)store=FUN_02086e3c()+0x28;
        else store=FUN_02086e3c()+0x1c;
        if(!FUN_020b025c(pack,item) || !FUN_020b03bc(store,slot,1,FUN_020849d4(item)))return 0;
        if(FUN_020b028c(pack,item,0)==-1)return 0;
        if(!FUN_020b0450(store,slot,FUN_020849d4(item)))return 0;
        self[12]=1;return 1;
    }
}
