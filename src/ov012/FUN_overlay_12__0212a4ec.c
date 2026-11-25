// flags: -O4,s
//cpp
struct Pair { int x, y; };
struct Obj_a4ec {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14();
};
extern "C" {
extern const unsigned DAT_overlay_12__0213e13c[];
extern Pair DAT_020ebb98;
extern const Pair DAT_overlay_12__0213e0cc[];
extern const char DAT_overlay_12__0213e178[];
extern void *FUN_overlay_12__02131d80(void *, void *, unsigned), *FUN_0209e1d4(void *, const void *), *FUN_overlay_12__0212bdc0(void *), *FUN_overlay_12__0212a4a8(void *), *FUN_overlay_12__0212a43c(void);
extern void FUN_overlay_12__0212a49c(void *), FUN_overlay_12__02134868(int), FUN_overlay_12__0212c824(unsigned), FUN_overlay_12__02131b70(unsigned), FUN_02079120(void), FUN_overlay_12__02129908(unsigned);
extern void *FUN_02086e3c(void), *FUN_020870c4(void *), *FUN_020ba8a0(unsigned), *FUN_020b00d0(void *, int);
#pragma thumb off
extern void *FUN_020014d4(void *, const void *, unsigned);
#pragma thumb on
extern int FUN_020b077c(void *), FUN_020b07f4(void *), FUN_020b086c(void *), FUN_020b08e4(void *, unsigned);

void *FUN_overlay_12__0212a4ec(int *self, void *owner)
{
    char *inventory;
    void *player;
    int count, i;
    unsigned size;
    FUN_overlay_12__02131d80(self, owner, 0);
    self[0] = (int)DAT_overlay_12__0213e13c;
    self[16] = 0; self[17] = 0;
    { int x = *(volatile int *)&DAT_020ebb98.x, y = *(volatile int *)&DAT_020ebb98.y; self[18] = x; self[19] = y; }
    { int x = *(volatile int *)&DAT_020ebb98.x, y = *(volatile int *)&DAT_020ebb98.y; self[20] = x; self[21] = y; }
    self[22] = -1;
    FUN_0209e1d4(self + 23, DAT_overlay_12__0213e178);
    self[27] = 0;
    FUN_overlay_12__0212bdc0(self + 28);
    FUN_overlay_12__0212bdc0(self + 68);
    FUN_overlay_12__0212a49c(self + 108);
    self[111] = -1;
    self[112] = 0; self[113] = 0; self[114] = 0; self[115] = 0; self[116] = 0; self[117] = 0; self[118] = 0;
    self[119] = 0; self[120] = 0; self[121] = 0; self[122] = 0; self[123] = 0; self[124] = 0; self[125] = 0;
    FUN_overlay_12__0212a4a8(self + 126);
    FUN_overlay_12__02134868(0);
    FUN_overlay_12__0212c824(0);
    FUN_overlay_12__02131b70(0);
    FUN_overlay_12__0212a43c();
    FUN_02079120();
    inventory = (char *)FUN_02086e3c() + 16;
    player = FUN_02086e3c();
    count = *(short *)(inventory + 8);
    if (count > 0) {
        size = (unsigned)count * 16;
        self[126] = (int)FUN_020ba8a0(size);
        if (self[126]) {
            FUN_020014d4((void *)self[126], FUN_020b00d0(inventory, 0), size);
            self[127] = FUN_020b077c(player);
            self[128] = FUN_020b07f4(player);
            self[129] = FUN_020b086c(player);
            for (i = 0; i < 4; i++) self[130 + i] = FUN_020b08e4(player, (unsigned char)i);
            self[135] = count;
            self[136] = *(int *)((char *)FUN_020870c4(FUN_02086e3c()) + 52);
            self[137] = 1;
        }
    } else self[137] = 1;
    self[18] = DAT_overlay_12__0213e0cc[10].x;
    self[19] = DAT_overlay_12__0213e0cc[10].y;
    ((Obj_a4ec *)self)->v14();
    FUN_overlay_12__02129908((unsigned)self);
    return self;
}
}
