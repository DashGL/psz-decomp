// flags: -O4,s
extern int DAT_0219cdf4;
extern void FUN_02037760(void *);
extern void *FUN_020ba894(unsigned);
extern void *FUN_overlay_31__0219a374(void *);
extern void *FUN_overlay_31__0219a398(void *);
extern void *FUN_overlay_31__0219a3ac(void *);
extern void *FUN_overlay_31__0219a3c0(void *);
extern void *FUN_overlay_31__0219a3d4(void *);
extern void *FUN_overlay_31__0219a3e8(void *);
extern void *FUN_overlay_31__0219a3fc(void *);
extern void *FUN_overlay_31__0219a410(void *);

typedef struct {
    void *vtbl;
    int pad[11];
    void *f30;
    void *f34;
    void *f38;
    void *f3c;
    void *f40;
    void *f44;
    void *f48;
    void *f4c;
    void *f50;
    void *f54;
    int f58;
    signed char f5c;
    unsigned char f5d;
    short f5e;
    short f60;
} Obj_31_a2b4;

void *FUN_overlay_31__0219a2b4(Obj_31_a2b4 *self) {
    void *p;
    FUN_02037760(self);
    self->vtbl = &DAT_0219cdf4;
    self->f30 = 0;
    self->f34 = 0;
    self->f38 = 0;
    self->f3c = 0;
    self->f40 = 0;
    self->f44 = 0;
    self->f48 = 0;
    self->f4c = 0;
    self->f50 = 0;
    self->f54 = 0;
    self->f58 = -1;
    self->f5c = -1;
    self->f5e = 0;
    self->f60 = -1;
    p = FUN_020ba894(36); if (p) p = FUN_overlay_31__0219a374(p); self->f30 = p;
    p = FUN_020ba894(16); if (p) p = FUN_overlay_31__0219a398(p); self->f34 = p;
    p = FUN_020ba894(12); if (p) p = FUN_overlay_31__0219a3ac(p); self->f38 = p;
    p = FUN_020ba894(16); if (p) p = FUN_overlay_31__0219a3c0(p); self->f3c = p;
    p = FUN_020ba894(48); if (p) p = FUN_overlay_31__0219a3d4(p); self->f40 = p;
    p = FUN_020ba894(20); if (p) p = FUN_overlay_31__0219a3e8(p); self->f44 = p;
    p = FUN_020ba894(12); if (p) p = FUN_overlay_31__0219a3fc(p); self->f48 = p;
    p = FUN_020ba894(12); if (p) p = FUN_overlay_31__0219a410(p); self->f4c = p;
    return self;
}
