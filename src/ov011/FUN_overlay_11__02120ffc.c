// FUN_overlay_11__02120ffc @ 0x02120ffc (0x94, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch33.json; original draft retained for referenced provenance.
// FUN_overlay_11__02120ffc @ 0x02120ffc (thumb)
// check: 2.0/sp2p3 target=0x94 candidate=0x94 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
typedef struct {unsigned kind,offset,source,size,other;} Transfer;
#pragma thumb off
extern void FUN_020673f0(unsigned,unsigned),FUN_02068450(void);
#pragma thumb on
extern void FUN_overlay_11__02120fb4(void *,unsigned),FUN_overlay_11__02120fc8(void *,unsigned),FUN_overlay_11__02120fdc(void *,Transfer *);
unsigned FUN_overlay_11__02120ffc(void *self,const Transfer *input){
    Transfer current;
    unsigned remaining;
    if(!input)return 0;
    current=*input;
    FUN_020673f0(current.source,current.size);
    while((remaining=current.size)>0xa000){
        current.size=0xa000;
        FUN_02068450();
        FUN_overlay_11__02120fb4(self,current.kind);
        FUN_overlay_11__02120fdc(self,&current);
        FUN_overlay_11__02120fc8(self,current.kind);
        current.size=remaining-0xa000;
        current.source+=0xa000;
        current.offset+=0xa000;
    }
    FUN_02068450();
    FUN_overlay_11__02120fb4(self,current.kind);
    FUN_overlay_11__02120fdc(self,&current);
    FUN_overlay_11__02120fc8(self,current.kind);
    return input->offset;
}
