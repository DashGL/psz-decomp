// FUN_overlay_12__02126424 @ 0x02126424 (0x44, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch58.json; original draft retained for referenced provenance.
// FUN_overlay_12__02126424 @ 0x02126424 (thumb)
// check: 2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
typedef struct Object Object;
typedef struct VTable {void *reserved;Object *(*destroy)(Object *);} VTable;
struct Object {VTable *vtable;};
extern void FUN_overlay_12__02132478(void),FUN_overlay_12__02133aa4(void),FUN_overlay_12__02131b98(void),FUN_overlay_12__0212c84c(void),FUN_020ba8ac(void *);
void *FUN_overlay_12__02126424(char *self){
    Object *child;
    *(unsigned *)self=0x0213ddf8;
    FUN_overlay_12__02132478();FUN_overlay_12__02133aa4();FUN_overlay_12__02131b98();FUN_overlay_12__0212c84c();
    child=*(Object **)(self+24);
    if(child){if(child)child->vtable->destroy(child);*(Object **)(self+24)=0;}
    *(void **)0x0213ed24=0;
    FUN_020ba8ac(self);
    return self;
}
