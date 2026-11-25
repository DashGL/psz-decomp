// FUN_overlay_16__021200f8 @ 0x021200f8 (0x8c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch46.json; original draft retained for referenced provenance.
// FUN_overlay_16__021200f8 @ 0x021200f8 (thumb)
// check: 2.0/sp2p3 target=0x8c candidate=0x8c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
typedef struct {unsigned words[8];} Config;
extern void *FUN_020ba894(unsigned),*FUN_020c3564(void *),*FUN_0208f068(void);
extern void FUN_020c35ac(void *,unsigned),FUN_020c35d4(void *,Config *),FUN_020c38f0(void *,unsigned),FUN_overlay_16__02120b4c(void *);
extern int FUN_0208ef48(void *,unsigned,unsigned);
int FUN_overlay_16__021200f8(char *self){
    void *child,*manager;Config config;
    *(unsigned *)self=0;
    *(unsigned *)(self+20)=0;*(unsigned *)(self+24)=0;
    *(unsigned *)(self+12)=0;*(unsigned *)(self+16)=0;
    *(unsigned *)(self+28)=0;*(unsigned *)(self+8)=0;
    child=FUN_020ba894(60);if(child)child=FUN_020c3564(child);
    *(void **)(self+4)=child;
    if(!child)return 0;
    FUN_020c35ac(child,1);
    config=*(Config *)0x0212dbfc;
    FUN_020c35d4(*(void **)(self+4),&config);
    FUN_020c38f0(*(void **)(self+4),0);
    manager=FUN_0208f068();
    if(manager){
        int index=FUN_0208ef48(manager,*(unsigned *)0x0212dbf0,10);
        *(int *)(self+28)=index;
        if(index==-1)return 0;
    }
    FUN_overlay_16__02120b4c(self+32);
    *(unsigned *)(self+44)=*(unsigned *)(self+28);
    return 1;
}
