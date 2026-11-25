// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xbc, exact bytes and relocation targets.
// FUN_020918b4: full 0xbc bytes + relocation targets verified 2.0/sp2p3.
// Provenance: notes/sessions/resume-upper-cpp-provenance-2026-11-12.md
typedef struct Obj918B4_020918b4 Obj918B4_020918b4;

// flags: -O4,s

struct Obj918B4_020918b4 {
    void *vtbl;
    void *f4;
    void *f8;
    void *fc;
    int w;
    int h;
    int f18;
    void *f1c;
    void *f20;
    int f24;
    int f28;
    void *f2c;
    void **f30;
    int f34;
};

extern void *DAT_020faf24;
extern void *FUN_0200c2dc(int, int, int, void (*)(void *), int);
extern void FUN_02091970(void *);
extern void *DAT_020fc988;

Obj918B4_020918b4 *FUN_020918b4(Obj918B4_020918b4 *self, void *p1, int w, int h, void *p4, void *p5) {
    self->vtbl = &DAT_020faf24;
    self->f4 = p1;
    self->f8 = 0;
    self->fc = 0;
    self->w = 0;
    self->h = 0;
    self->f18 = 0;
    self->f1c = p4;
    self->f20 = p5;
    self->f24 = 0x1000;
    self->f28 = 0;
    self->f2c = 0;
    self->f30 = 0;
    self->f34 = 0;
    if (w > 0) {
        self->w = w;
    }
    if (h > 0) {
        self->h = h;
    }
    if (w > 0 && h > 0) {
        self->f2c = FUN_0200c2dc(self->w, 8, 0, FUN_02091970, 0);
        self->f30 = (void **)FUN_0200c2dc(self->h, 4, 0, 0, 0);
        if (self->f30 != 0) {
            for (int i = 0; i < self->h; i++) {
                self->f30[i] = DAT_020fc988;
            }
        }
        if (self->f1c == 0) {
            self->f8 = FUN_0200c2dc(w, 12, 0, 0, 0);
        }
        if (self->f20 == 0) {
            self->fc = FUN_0200c2dc(h, 12, 0, 0, 0);
        }
    }
    return self;
}

