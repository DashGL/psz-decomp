// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x5c, exact bytes and relocation targets.
// FUN_0209c52c: full 0x5c bytes + relocation targets verified 2.0/sp2p3.
// Provenance: notes/sessions/resume-upper-cpp-provenance-2026-11-12.md
//cpp
// flags: -O4,s
struct Obj_9c52c_0209c52c {
    virtual void v0();
    virtual void v4();
    virtual ~Obj_9c52c_0209c52c();
};
struct Sub_9c52c_0209c52c {
    int f0;
    int f4;
    int f8;
    int fc;
    short f10;
    char f12;
    char pad[3];
    char f16;
    char pad2;
};
struct Container_9c52c_0209c52c {
    Obj_9c52c_0209c52c *f0[4];
    Sub_9c52c_0209c52c f10[4];
};
extern "C" {
Obj_9c52c_0209c52c *FUN_0209b0e8(Sub_9c52c_0209c52c *);
void FUN_0209c52c(Container_9c52c_0209c52c *a, int b, int c, int *d) {
    if (b >= 0 && b < 4) {
        if (a->f0[b] != 0) {
            delete a->f0[b];
            a->f0[b] = 0;
        }
        Sub_9c52c_0209c52c *s = &a->f10[b];
        s->f4 = d[0];
        s->f8 = d[1];
        s->fc = d[2];
        s->f12 = c;
        s->f16 = b + 0x25;
        a->f0[b] = FUN_0209b0e8(s);
        if (a->f0[b] != 0) {
            a->f0[b]->v4();
        }
    }
}
}
