// FUN_overlay_11__021225e0 @ 0x021225e0 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch65.json; original draft retained for referenced provenance.
// FUN_overlay_11__021225e0 @ 0x021225e0 (thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
typedef struct Object Object;
typedef struct Table {void *reserved[2];Object *(*destroy)(Object *);} Table;
struct Object{Table *table;};
void FUN_overlay_11__021225e0(void){
    Object *object=*(Object **)0x02156b30;
    if(object){if(object){if(object)object->table->destroy(object);*(Object **)0x02156b30=0;}}
}
