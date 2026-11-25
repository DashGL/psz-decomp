// FUN_overlay_15__02136e60 @ 0x02136e60 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch04.json; original draft retained for referenced provenance.
// FUN_overlay_15__02136e60 @ 0x02136e60 (thumb)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern void FUN_overlay_15__02135b98(void *,unsigned);
void FUN_overlay_15__02136e60(unsigned *event){
    char *base;
    unsigned index=0;
    *event=(*event&0xc1fffcff)|0x200;
    base=*(char **)0x0213e928;
    if((unsigned)event>=(unsigned)(base+1024))index=1;
    FUN_overlay_15__02135b98(*(void **)(base+2048+4*index),(unsigned)event);
}
