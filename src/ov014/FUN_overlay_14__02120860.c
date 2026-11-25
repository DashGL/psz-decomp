// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// FUN_overlay_14__02120860 @ 0x02120860 (thumb)
// flags: -O4,s
extern unsigned D_02122188;
extern void FUN_020c38f0(void *,int),FUN_020c3588(void *);
typedef struct Child Child;
struct Child {Child *(**vtable)(Child *);};
void *FUN_overlay_14__02120860(char *self){
    Child *child=*(Child **)self;
    if(child){
        FUN_020c38f0(child,0);
        FUN_020c3588(*(Child **)self);
        child=*(Child **)self;
        if(child){if(child)child->vtable[1](child);*(Child **)self=0;}
    }
    D_02122188-=*(unsigned *)(self+64);
    return self;
}
