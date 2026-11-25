// FUN_overlay_11__021232cc @ 0x021232cc (0x44, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch33.json; original draft retained for referenced provenance.
// FUN_overlay_11__021232cc @ 0x021232cc (thumb)
// check: 2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern void *FUN_overlay_11__0211e93c(const int *),*FUN_overlay_11__0211ec64(void),*FUN_overlay_11__02122918(void);
extern void FUN_overlay_11__0211ee2c(void *,void *),FUN_overlay_11__02122968(void *);
void *FUN_overlay_11__021232cc(char *self){
    int config[2];void *owner;
    *(unsigned *)self=0x02124a20;
    *(unsigned *)(self+4)=0;*(unsigned *)(self+8)=0;
    config[0]=0;config[1]=-1;config[0]=2;
    FUN_overlay_11__0211e93c(config);
    FUN_overlay_11__0211ee2c(FUN_overlay_11__0211ec64(),(void *)0x02156b38);
    owner=FUN_overlay_11__02122918();if(owner)FUN_overlay_11__02122968(owner);
    return self;
}
