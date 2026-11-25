// FUN_overlay_15__0212536c @ 0x0212536c (0x48, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch49.json; original draft retained for referenced provenance.
// FUN_overlay_15__0212536c @ 0x0212536c (thumb)
// check: 2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern void *FUN_overlay_15__02135f98(unsigned,unsigned);
extern void *FUN_overlay_15__02127f30(void *,unsigned);
extern unsigned FUN_overlay_15__02125430(void);
extern void FUN_overlay_15__0213627c(void *,unsigned,unsigned,unsigned,unsigned,unsigned,unsigned,void *);
extern void FUN_overlay_15__02136368(void *);
void FUN_overlay_15__0212536c(unsigned message){
    void *renderer=FUN_overlay_15__02135f98(0,0);
    void *text=FUN_overlay_15__02127f30(*(void **)0x0213e818,message);
    unsigned style=FUN_overlay_15__02125430();
    FUN_overlay_15__0213627c(renderer,13,40,230,112,2,style,text);
    FUN_overlay_15__02136368(renderer);
}
