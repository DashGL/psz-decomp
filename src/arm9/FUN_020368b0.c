//cpp
// flags: -O4,s
extern "C" {
extern unsigned int DAT_020ed03c[];
extern char *DAT_02108d04;
extern int FUN_02035d04(void *);
extern void FUN_020376d4(void *, int, int, void *, void *);
extern void FUN_020345f0(void *, void *);
extern void FUN_02090f74(void *, void *, void *, int);
extern void FUN_020c193c(int, int, int, int, int);
extern void FUN_020bf870(void *, void *);
extern void FUN_0203666c(void *);
extern void FUN_02046d94(void *, int, int);
extern char *FUN_0204475c(void *, int);
extern void *FUN_020be450(void);
extern void *FUN_020be5c0(void *, unsigned int, int);
extern void *FUN_02090c20(void);
}

struct Vec3 { unsigned int v[3]; };

struct VObj368b0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10(int, unsigned int *);
};

enum { E0 = 0, E1 = 1 };

extern "C" void FUN_020368b0(char *s, int index, int type, int action, int local) {
    unsigned int desc[25];
    unsigned int point[3];
    Vec3 position;
    int soundtype;
    int soundid;
    short screen[2];
    unsigned int height;
    unsigned int effect;
    char *entry;
    char *owner;
    void *handle;

    if (type < 0 || type >= 3) {
        return;
    }
    effect = DAT_020ed03c[type];
    if (type == 1) {
        soundtype = 1;
        soundid = 18;
    } else {
        FUN_020376d4(s, FUN_02035d04(s), action, &soundtype, &soundid);
    }
    {
        int ok = (action == 0 || action == 3) ? E1 : E0;
        local = (local && ok) ? E1 : E0;
    }
    entry = FUN_0204475c(s, index);
    if (!entry) {
        return;
    }
    handle = FUN_020be5c0(FUN_020be450(), *(unsigned int *)entry, 0);
    if (!handle) {
        return;
    }
    if (local && (owner = DAT_02108d04)) {
        FUN_020345f0(point, owner + 156);
        FUN_02090f74(screen, FUN_02090c20(), point, 0);
        FUN_020c193c(soundtype, soundid, screen[0], screen[1], -1);
        soundid = -1;
    }
    FUN_020bf870(handle, &position);
    ((VObj368b0 *)s)->v10(index, &height);
    position.v[1] = height;
    FUN_0203666c(desc);
    *(Vec3 *)&desc[8] = position;
    if (soundid >= 0) {
        desc[17] = soundtype;
        desc[18] = soundid;
        desc[19] = ~0u;
    }
    desc[21] = effect;
    FUN_02046d94(desc, 0, 0);
}
