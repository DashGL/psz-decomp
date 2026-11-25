// FUN_overlay_15__02136e44 @ 0x02136e44 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch51.json; original draft retained for referenced provenance.
// FUN_overlay_15__02136e44 @ 0x02136e44 (thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern void *FUN_overlay_15__02135bd0(void *);
void *FUN_overlay_15__02136e44(unsigned index){char *self=*(char **)0x0213e928;return FUN_overlay_15__02135bd0(*(void **)(self+2048+index*4));}
