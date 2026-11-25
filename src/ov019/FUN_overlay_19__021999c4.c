// flags: -O4,s
typedef struct { int x, y, z; } Vec;
extern void *DAT_0219d33c[];
extern const int DAT_020ed0a0;
extern void FUN_overlay_19__02198c5c(void *);
extern void *FUN_02035408(void *, int, int, int);

void *FUN_overlay_19__021999c4(int *self, Vec *position, unsigned short angle, int index) {
    Vec scale;
    FUN_overlay_19__02198c5c(self);
    *(void **)self = DAT_0219d33c;
    self[12] = -1;
    self[13] = -1;
    self[14] = DAT_020ed0a0;
    self[15] = -1;
    FUN_02035408(self + 16, 0, 0, 0);
    FUN_02035408(self + 19, 0, 0, 0);
    ((unsigned short *)self)[44] = 0;
    ((unsigned short *)self)[45] = 0;
    self[23] = 0;
    self[24] = 0;
    self[25] = 0;
    self[26] = 0;
    self[27] = 0;
    self[28] = 0;
    *(Vec *)(self + 3) = *position;
    self[4] = 0;
    ((unsigned short *)self)[44] = angle;
    ((unsigned short *)self)[45] = angle;
    self[10] = index;
    self[9] = 1;
    self[15] = index + 3;
    self[24] = 6;
    self[25] = 0;
    self[2] = 3;
    self[28] = (index * 2) % 15;
    scale.x = 4096;
    scale.y = 0;
    scale.z = 4096;
    *(Vec *)(self + 19) = scale;
    return self;
}
