// FUN_overlay_12__02133aa4 @ 0x02133aa4 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch58.json; original draft retained for referenced provenance.
// FUN_overlay_12__02133aa4 @ 0x02133aa4 (thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
typedef struct Object Object;
typedef struct VTable{void *unused;Object *(*destroy)(Object *);} VTable;
struct Object{VTable *vtable;};
void FUN_overlay_12__02133aa4(void){Object *self=*(Object **)0x0213f2f4;if(self){if(self)self->vtable->destroy(self);*(Object **)0x0213f2f4=0;}}
