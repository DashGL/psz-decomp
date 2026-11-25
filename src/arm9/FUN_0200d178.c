// FUN_0200d178 @ 0x0200d178 (0x2e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch44-manifest.json; original draft retained for referenced provenance.
//cpp
// FUN_0200d178 @ 0x0200d178 (0x2e, thumb)
// check: 2.0/sp2p3 target=0x2e candidate=0x2e words=0 exact_bytes=0 bad_relocs=0
extern "C" {
extern void *FUN_020ba894(unsigned int);
extern void *FUN_020c3490(void *);

struct Inner {
    Inner();
    char pad[0x80];
};

struct Outer {
    void *p;
    int a, b, c, d, e, f;
    char g, h;
};

Outer *FUN_0200d178(Outer *o) {
    o->p = 0;
    o->a = 0;
    o->b = -1;
    o->c = -1;
    o->d = -1;
    o->e = -1;
    o->f = 0;
    o->g = 0;
    o->h = 0;
    void *mem = FUN_020ba894(0x80);
    if (mem != 0) {
        mem = FUN_020c3490(mem);
    }
    o->p = mem;
    return o;
}
}
