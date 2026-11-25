// FUN_overlay_11__0211f4cc @ 0x0211f4cc (0x9a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch33.json; original draft retained for referenced provenance.
// FUN_overlay_11__0211f4cc @ 0x0211f4cc (thumb)
// check: 2.0/sp2p3 target=0x9a candidate=0x9a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern char *FUN_overlay_11__0211f17c(void *);
extern int FUN_overlay_11__0211f674(void *,int,int),FUN_overlay_11__0211f74c(void *,int,int),FUN_overlay_11__0211f5ac(void *,unsigned);
extern unsigned FUN_overlay_11__0211f1d0(void *);
extern void FUN_overlay_11__0211e7e4(void *),FUN_overlay_11__0211e7f4(void *),FUN_overlay_11__0211e808(void *),FUN_overlay_11__0211e818(void *);
int FUN_overlay_11__0211f4cc(char *self,unsigned direction){
    int valid=1;
    for(;;){
        int x=*(int *)(FUN_overlay_11__0211f17c(self)+12);
        int y=*(int *)(FUN_overlay_11__0211f17c(self)+16);
        unsigned key;
        switch(direction){
        case 0:if(!FUN_overlay_11__0211f674(self,x,y))FUN_overlay_11__0211e7e4(FUN_overlay_11__0211f17c(self));break;
        case 1:if(!FUN_overlay_11__0211f74c(self,x,y))FUN_overlay_11__0211e7f4(FUN_overlay_11__0211f17c(self));break;
        case 2:FUN_overlay_11__0211e808(FUN_overlay_11__0211f17c(self));break;
        case 3:FUN_overlay_11__0211e818(FUN_overlay_11__0211f17c(self));break;
        default:valid=0;break;
        }
        key=FUN_overlay_11__0211f1d0(self);
        if(!valid || FUN_overlay_11__0211f5ac(self,key))break;
    }
    *(unsigned *)(self+164)=0;return valid;
}
