// FUN_overlay_12__021296f0 @ 0x021296f0 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch58.json; original draft retained for referenced provenance.
// FUN_overlay_12__021296f0 @ 0x021296f0 (thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
typedef struct Object Object;
typedef struct VTable {void *reserved;Object *(*destroy)(Object *);} VTable;
struct Object {VTable *vtable;};
void FUN_overlay_12__021296f0(char *self){
    Object *child=*(Object **)(self+32);
    if(child){
        if(child)child->vtable->destroy(child);
        *(Object **)(self+32)=0;
    }
}
