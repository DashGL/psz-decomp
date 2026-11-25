// FUN_overlay_14__0211f1cc @ 0x0211f1cc (0x9a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch29.json; original draft retained for referenced provenance.
// FUN_overlay_14__0211f1cc @ 0x0211f1cc (thumb)
// check: 2.0/sp2p3 target=0x9a candidate=0x9a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern char *FUN_overlay_14__0211ee7c(void *);
extern int FUN_overlay_14__0211f374(void *,int,int),FUN_overlay_14__0211f44c(void *,int,int),FUN_overlay_14__0211f2ac(void *,unsigned);
extern unsigned FUN_overlay_14__0211eed0(void *);
extern void FUN_overlay_14__0211fce0(void *),FUN_overlay_14__0211fcf0(void *),FUN_overlay_14__0211fd04(void *),FUN_overlay_14__0211fd14(void *);
int FUN_overlay_14__0211f1cc(char *self,unsigned direction){
    int valid=1;
    for(;;){
        int x=*(int *)(FUN_overlay_14__0211ee7c(self)+12);
        int y=*(int *)(FUN_overlay_14__0211ee7c(self)+16);
        unsigned key;
        switch(direction){
        case 0:if(!FUN_overlay_14__0211f374(self,x,y))FUN_overlay_14__0211fce0(FUN_overlay_14__0211ee7c(self));break;
        case 1:if(!FUN_overlay_14__0211f44c(self,x,y))FUN_overlay_14__0211fcf0(FUN_overlay_14__0211ee7c(self));break;
        case 2:FUN_overlay_14__0211fd04(FUN_overlay_14__0211ee7c(self));break;
        case 3:FUN_overlay_14__0211fd14(FUN_overlay_14__0211ee7c(self));break;
        default:valid=0;break;
        }
        key=FUN_overlay_14__0211eed0(self);
        if(!valid || FUN_overlay_14__0211f2ac(self,key))break;
    }
    *(unsigned *)(self+164)=0;return valid;
}
