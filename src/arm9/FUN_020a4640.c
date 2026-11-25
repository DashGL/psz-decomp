//cpp
// flags: -O4,s
extern "C" {
extern void FUN_020c38f0(void *, int);
extern void FUN_020c3588(void *);
extern void FUN_020c3578(void *);
extern void FUN_020ba8ac(void *);
extern void FUN_020a4888(void *, int);
extern void *FUN_020ba894(unsigned int);
extern void *FUN_020a439c(void *, int, int, int);
}
struct Panel {
    int pad[15];
    int f3c;
    inline void operator delete(void *p) { FUN_020ba8ac(p); }
    inline ~Panel() { FUN_020c38f0(this, 0); FUN_020c3588(this); FUN_020c3578(this); }
};
struct ObjA4640 {
    int pad[3];
    Panel *panels[4];
};
extern "C" void FUN_020a4640(ObjA4640 *s) {
    int i, next = 1;
    for (i = 0; i < 4; i++) {
        int x = (i % 2) * 120 + 32;
        int y = (i >> 1) * 29 + 16;
        Panel *p;
        if (s->panels[i]) {
            delete s->panels[i];
            s->panels[i] = 0;
        }
        p = (Panel *)FUN_020ba894(64);
        if (p) p = (Panel *)FUN_020a439c(p, next, x, y);
        s->panels[i] = p;
        next += p->f3c;
    }
    FUN_020a4888(s, 1);
}
