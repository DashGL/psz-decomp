// FUN_overlay_12__0212626c @ 0x0212626c (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch58.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212626c @ 0x0212626c (thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
typedef struct Object Object;
typedef struct VTable {void *reserved;Object *(*destroy)(Object *);} VTable;
struct Object {VTable *vtable;};
extern void FUN_overlay_12__021209f4(void *),FUN_020ba8ac(void *);
void *FUN_overlay_12__0212626c(Object **self){Object *child;self[0]=(Object *)0x0213ddbc;child=self[1];if(child){if(child)child->vtable->destroy(child);self[1]=0;}FUN_overlay_12__021209f4(self);return self;}
