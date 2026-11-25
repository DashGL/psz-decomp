// flags: -O4,s
typedef struct { int x, y, z; } Vec;
typedef struct { int vertical[3], speed[3]; } Frame;
extern unsigned int DAT_0219d288[];
extern int DAT_020ed0a0;
extern const int DAT_0219d170[];
extern void FUN_overlay_19__02198c5c(void *);
extern void *FUN_02035408(void *, int, int, int);
extern void FUN_020bbfbc(void *, unsigned);
extern void *FUN_020991c0(void *, void *);
void *FUN_overlay_19__02198ce4(int *self, void *position, unsigned angle, int index) {
    Frame f;
    const int *table = DAT_0219d170;
    int rem;
    FUN_overlay_19__02198c5c(self);
    self[0] = (int)DAT_0219d288;
    self[12] = -1;
    self[13] = -1;
    self[14] = DAT_020ed0a0;
    FUN_02035408(self + 15, 0, 0, 0);
    self[18] = 0;
    f.speed[0] = table[0]; f.speed[1] = table[7]; f.speed[2] = table[4];
    f.vertical[0] = table[2]; f.vertical[1] = table[6]; f.vertical[2] = table[3];
    rem = index % 3;
    self[18] = f.speed[rem];
    *(Vec *)(self + 3) = *(Vec *)position;
    self[17] = 4096;
    FUN_020bbfbc(self + 15, angle);
    FUN_020991c0(self + 15, self + 18);
    self[16] = f.vertical[rem];
    return self;
}
