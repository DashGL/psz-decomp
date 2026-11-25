// FUN_overlay_12__02121508 @ 0x02121508 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch58.json; original draft retained for referenced provenance.
// FUN_overlay_12__02121508 @ 0x02121508 (thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
typedef struct Object Object;
typedef struct VTable{void *unused[2];void (*close)(Object *);} VTable;
struct Object{VTable *vtable;};
void FUN_overlay_12__02121508(void){Object *self=*(Object **)0x0213ec98;if(self){self->vtable->close(self);*(Object **)0x0213ec98=0;}}
