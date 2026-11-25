// flags: -O4,p
struct ParamDE748 {
    int f0;
    int f4;
    int f8;
    void *(*alloc)(const char *, int);
    int f10;
    int f14;
    int f18;
};

struct SelfDE748 {
    unsigned char pad0[0x1000];
    unsigned char f1000;
    unsigned char pad1001[3];
    struct ParamDE748 param;
    int f1020;
    unsigned char pad1024[0x19cc - 0x1024];
    void *p19cc;
    void *p19d0;
    unsigned char pad19d4[0x1a08 - 0x19d4];
    unsigned char sub1a08[0x28];
    int f1a30;
    int f1a34;
    unsigned char pad1a38[0x1c14 - 0x1a38];
};

extern void FUN_020656b8(void *, int, int);
extern int FUN_020defb8(void *, void *, int);
extern int FUN_020df080(void *, int);
extern int FUN_020ded6c(void *);
extern const char DAT_02100474[];
extern const char DAT_0210048c[];

int FUN_020de748(struct SelfDE748 *self, const struct ParamDE748 *p) {
    void *(*alloc)(const char *, int) = p->alloc;
    FUN_020656b8(self, 0, 0x1c14);
    self->f1a30 = -1;
    self->f1a34 = -1;
    self->param = *p;
    self->p19cc = alloc(DAT_02100474, 0xb68);
    if (self->p19cc == 0) {
        self->f1020 = 1;
        return 1;
    }
    self->p19d0 = alloc(DAT_0210048c, 0x5ea);
    if (self->p19d0 == 0) {
        self->f1020 = 1;
        return 1;
    }
    if (FUN_020defb8(self, self->sub1a08, self->param.f8) == 0) {
        self->f1020 = 1;
        return 1;
    }
    if (FUN_020df080(self, p->f0) == 0) {
        self->f1020 = 1;
        return 1;
    }
    self->f1020 = FUN_020ded6c(self);
    if (self->f1020 == 0) {
        self->f1000 = 0xff;
    }
    return self->f1020;
}
