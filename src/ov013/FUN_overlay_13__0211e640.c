// flags: -O4,s
typedef struct Config { int w[8]; } Config;
typedef struct Elem { char b[60]; } Elem;
typedef struct Obj { void *vt; int a, b, c, d; Elem arr[4]; Elem extra; } Obj;
extern unsigned char DAT_0211fa68[];
extern const Config DAT_0211f95c;
extern const Config DAT_0211f93c;
extern void *FUN_020af01c(void *, int, int), *FUN_020c3564(void *), *FUN_0209081c(void);
extern void FUN_020c3578(void *), FUN_020907d4(void), FUN_020c35d4(void *, const Config *), FUN_020c38f0(void *, int), FUN_overlay_13__0211e950(void *, int, int);
extern int FUN_02090834(void), FUN_020c38c8(void *, int, int);
#pragma thumb off
extern void FUN_0200c394(void *, unsigned, unsigned, void *(*)(void *), void (*)(void *));
extern void *FUN_0205e0c4(void);
extern void FUN_0206557c(unsigned, void *, unsigned);
#pragma thumb on

void *FUN_overlay_13__0211e640(char *self) {
    Config config, final, template;
    int total, i, y, width;
    FUN_020af01c(self, 0, 1);
    *(void **)self = DAT_0211fa68;
    *(unsigned *)(self + 16) = 0;
    FUN_0200c394(self + 20, 4, 60, FUN_020c3564, FUN_020c3578);
    FUN_020c3564(self + 260);
    if (!FUN_02090834()) FUN_020907d4();
    FUN_0206557c(0, FUN_0205e0c4(), 2048);
    total = 0;
    i = 0;
    template = DAT_0211f95c;
    do {
        config = template;
        config.w[0] = total + 1;
        y = i * 22 + 61;
        config.w[4] = y;
        FUN_020c35d4(self + 20 + i * 60, &config);
        width = FUN_020c38c8(self + 20 + i * 60, 90, 24);
        total += width * FUN_020c38c8(self + 20 + i * 60, 10, y);
        i++;
    } while (i < 4);
    final = DAT_0211f93c;
    final.w[0] = total + 1;
    FUN_020c35d4(self + 260, &final);
    FUN_020c38f0(self + 260, 0);
    ((int *)FUN_0209081c())[5] = 146;
    FUN_overlay_13__0211e950(self, 3, 0);
    return self;
}
