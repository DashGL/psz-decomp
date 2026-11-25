// FUN_overlay_11__021211b0 @ 0x021211b0 (0x50, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch33.json; original draft retained for referenced provenance.
// FUN_overlay_11__021211b0 @ 0x021211b0 (thumb)
// check: 2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern void FUN_overlay_11__02120f58(void *,void *),FUN_overlay_11__02120dc4(void *,void *,unsigned),FUN_overlay_11__02120da4(void *,void *,void *);
void FUN_overlay_11__021211b0(char *self){
    char *table;
    unsigned index;
    FUN_overlay_11__02120f58(self,*(void **)(self+904));
    FUN_overlay_11__02120dc4(self,self+928,64);
    table=*(char **)(self+904);index=*(unsigned *)(self+912);
    FUN_overlay_11__02120da4(self,self+928,*(void **)(table+4*index+4));
    table=*(char **)(self+904);index=*(unsigned *)(self+912);
    *(void **)(self+908)=*(void **)(table+4*index+4);
}
