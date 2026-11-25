// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x1c, exact bytes and relocation targets; argument/return contract corrected.
// FUN_overlay_12__02126898 @ 0x02126898 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch58.json; original draft retained for referenced provenance.
// FUN_overlay_12__02126898 @ 0x02126898 (thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
typedef struct Object Object;
typedef struct VTable {void *reserved;Object *(*destroy)(Object *);} VTable;
struct Object {VTable *vtable;};
void FUN_overlay_12__02126898(char *self,unsigned unused_previous){
    Object *child=*(Object **)(self+24);
    if(child){
        if(child)child->vtable->destroy(child);
        *(Object **)(self+24)=0;
    }
    *(unsigned *)(self+28)=0;
}

// Caller/callee ABI evidence: Transition wrapper explicitly reloads old value from receiver+8 into r1 before cleanup call. Cleanup ignores old value; caller preparation is preserved.
