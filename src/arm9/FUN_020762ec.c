// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xb6, exact bytes and relocation targets.
// flags: -O4,s

struct Vec3_762EC {
    int x, y, z;
};

struct Mat762EC {
    int m[9];
};

struct Desc762EC {
    char f0;
    char f1;
    char f2;
    char f3;
    char f4;
    char f5;
    unsigned char pad[0x12];
    int f18;
};

struct Arg762EC {
    int f0;
    int f4;
    int f8;
    struct Desc762EC *desc;
};

struct Obj762EC {
    unsigned char pad0[0x50];
    struct Vec3_762EC v50;
    struct Vec3_762EC v5c;
    unsigned char pad68[8];
    struct Mat762EC m70;
};

extern void FUN_0203666c(void *);
extern struct Obj762EC *FUN_02046d94(void *, int, int);
extern int FUN_02074e9c(void *, int, int, int);
extern struct Obj762EC *FUN_02075040(void *, int);
extern void FUN_02076164(void *, struct Desc762EC *, struct Vec3_762EC *, struct Mat762EC *);
extern void FUN_02035408(struct Vec3_762EC *, int, int, int);
extern void FUN_020763a4(struct Obj762EC *, int, int);

void FUN_020762ec(void *self, struct Arg762EC *arg) {
    struct Obj762EC *obj;
    struct Desc762EC *desc = arg->desc;

    if (desc->f0 == 0) {
        unsigned char sp3c[0x64];
        FUN_0203666c(sp3c);
        *(int *)(sp3c + 0x54) = desc->f1;
        obj = FUN_02046d94(sp3c, 0, 0);
    } else {
        obj = FUN_02075040(self, FUN_02074e9c(self, desc->f1, 0, 0));
    }
    if (obj != 0) {
        struct Vec3_762EC v30;
        struct Mat762EC m0c;
        struct Vec3_762EC v00;
        char flags;

        FUN_02076164(self, desc, &v30, &m0c);
        obj->v5c = v30;
        obj->m70 = m0c;
        FUN_02035408(&v00, desc->f18, desc->f18, desc->f18);
        obj->v50 = v00;
        flags = desc->f5;
        FUN_020763a4(obj, 0x10, (flags & 1) ? 1 : 0);
        FUN_020763a4(obj, 0xe, (flags & 2) ? 1 : 0);
    }
}
