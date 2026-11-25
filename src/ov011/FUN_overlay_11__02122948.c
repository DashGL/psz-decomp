// FUN_overlay_11__02122948 @ 0x02122948 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch65.json; original draft retained for referenced provenance.
// FUN_overlay_11__02122948 @ 0x02122948 (thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
typedef struct Object Object;
typedef struct Table {void *reserved[2];Object *(*destroy)(Object *);} Table;
struct Object{Table *table;};
void FUN_overlay_11__02122948(void){
    Object *object=*(Object **)0x02156b34;
    if(object){if(object){if(object)object->table->destroy(object);*(Object **)0x02156b34=0;}}
}
