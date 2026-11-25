// flags: -O4,s
#pragma opt_propagation off
struct Desc {
    unsigned w[6];
};
struct Entry {
    unsigned f0;
    unsigned f4;
    unsigned f8;
    unsigned fc;
    unsigned f10;
    unsigned short f14;
    unsigned short f16;
};
struct Scene {
    char pad0[0x40];
    int *objs[9];
    int idx;
};
extern void FUN_overlay_12__0212d7b8(void), FUN_0204f298(void), FUN_020457f0(void), FUN_020459c8(void), FUN_0204641c(void);
extern void *FUN_020c1fc8(void), *FUN_02086e3c(void), *FUN_020870c4(void *);
extern int FUN_020c2438(void *, const void *, const void *, int);
extern void *FUN_02033b9c(void *), *FUN_0203e6d8(void *), *FUN_02078dac(void *, int, int);
extern void FUN_02038000(void *, unsigned, unsigned, unsigned), FUN_02038084(void *, unsigned short);
extern void *FUN_02045990(void *, const void *);
extern void FUN_overlay_12__02131b10(int), FUN_overlay_12__0212c6b4(const void *), FUN_overlay_12__0212c694(const void *);
extern const struct Desc DAT_0213b814;
extern const struct Entry DAT_0213b82c[];
extern unsigned char DAT_0213e664[], DAT_0213e648[], DAT_021387ec[], DAT_0213882c[];
extern struct Scene *DAT_02108c84;
void FUN_overlay_12__02130494(int *self)
{
    const unsigned char *key = (unsigned char *)self[39] + 4 * self[44];
    unsigned kind = key[1];
    struct Desc descriptor;
    struct Scene *scene;
    int *object;
    const void *p;
    FUN_overlay_12__0212d7b8();
    p = DAT_0213e664;
    self[46] = FUN_020c2438(FUN_020c1fc8(), p, DAT_0213e648, 1);
    descriptor = DAT_0213b814;
    FUN_02033b9c(&descriptor);
    scene = DAT_02108c84;
    if (scene) {
        object = scene->objs[scene->idx];
        if (object) {
            object[30] |= 2;
            object[31] = DAT_0213b82c[kind].fc;
        }
    }
    FUN_0203e6d8(0);
    FUN_0204f298();
    FUN_020457f0();
    FUN_020459c8();
    FUN_0204641c();
    self[48] = (int)FUN_02078dac(FUN_020870c4(FUN_02086e3c()), 0, 0);
    self[49] = 0;
    if (self[48]) {
        FUN_02038000((void *)self[48], DAT_0213b82c[kind].f0, DAT_0213b82c[kind].f4, 0);
        FUN_02038084((void *)self[48], DAT_0213b82c[kind].f14);
    }
    FUN_02045990(self + 40, key);
    self[41] = 1;
    FUN_overlay_12__02131b10(0);
    FUN_overlay_12__02131b10(1);
    FUN_overlay_12__02131b10(4);
    FUN_overlay_12__0212c6b4(DAT_021387ec);
    FUN_overlay_12__0212c694(DAT_0213882c);
    self[47] = 1;
    self[18] = 1;
    self[54] = 0;
    self[55] = 0;
}
