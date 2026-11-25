// FUN_overlay_10__0211f328 @ 0x0211f328 (0x9a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch31.json; original draft retained for referenced provenance.
// FUN_overlay_10__0211f328 @ 0x0211f328 (thumb)
// check: 2.0/sp2p3 target=0x9a candidate=0x9a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern char *FUN_overlay_10__0211efd8(void *);
extern int FUN_overlay_10__0211f4d0(void *,int,int),FUN_overlay_10__0211f5a8(void *,int,int),FUN_overlay_10__0211f408(void *,unsigned);
extern unsigned FUN_overlay_10__0211f02c(void *);
extern void FUN_overlay_10__0211e7e4(void *),FUN_overlay_10__0211e7f4(void *),FUN_overlay_10__0211e808(void *),FUN_overlay_10__0211e818(void *);
int FUN_overlay_10__0211f328(char *self,unsigned direction){
    int valid=1;
    for(;;){
        int x=*(int *)(FUN_overlay_10__0211efd8(self)+12);
        int y=*(int *)(FUN_overlay_10__0211efd8(self)+16);
        unsigned key;
        switch(direction){
        case 0:if(!FUN_overlay_10__0211f4d0(self,x,y))FUN_overlay_10__0211e7e4(FUN_overlay_10__0211efd8(self));break;
        case 1:if(!FUN_overlay_10__0211f5a8(self,x,y))FUN_overlay_10__0211e7f4(FUN_overlay_10__0211efd8(self));break;
        case 2:FUN_overlay_10__0211e808(FUN_overlay_10__0211efd8(self));break;
        case 3:FUN_overlay_10__0211e818(FUN_overlay_10__0211efd8(self));break;
        default:valid=0;break;
        }
        key=FUN_overlay_10__0211f02c(self);
        if(!valid || FUN_overlay_10__0211f408(self,key))break;
    }
    *(unsigned *)(self+164)=0;return valid;
}
