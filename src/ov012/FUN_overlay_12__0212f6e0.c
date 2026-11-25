// flags: -O4,s
typedef struct { int x, y, z; } Vec;
typedef struct { int x, y, cam, anim; unsigned short rot, pad; } Entry20;
extern void *DAT_02108d5c;
extern int *DAT_02108c84;
extern const unsigned DAT_overlay_12__0213e544[];
extern const Entry20 DAT_overlay_12__0213b348[];
extern const int *FUN_overlay_12__0212cbe4(int *);
extern void FUN_0203fb00(void *, int), FUN_02035598(void *), FUN_020357e8(void *), FUN_02043ea4(void *, int, int), FUN_02035880(void *, int, int, int, int), FUN_020358e8(void *, int, int, int), FUN_02040c0c(void *, int, int, int, unsigned);
extern void *FUN_020ba894(unsigned), *FUN_020352dc(void *, unsigned, unsigned);

void FUN_overlay_12__0212f6e0(int *self)
{
    int key = ((short *)((char *)self + 80))[self[59]];
    int count, index, i;
    const int *keys;
    int *object, *manager, *child;
    Vec position;
    unsigned field;
    if ((key >= 61 && key <= 68) || key < 0 || key >= 69) return;
    index = -1;
    count = 0;
    keys = FUN_overlay_12__0212cbe4(&count);
    for (i = 0; i < count; i++) {
        if (keys[i] == key) { index = i; break; }
    }
    if (index < 0) return;
    FUN_0203fb00(DAT_02108d5c, key);
    object = (int *)FUN_020ba894(212);
    if (object) {
        FUN_020352dc(object, 4, key);
        object[0] = (int)DAT_overlay_12__0213e544;
    }
    self[66] = (int)object;
    if (self[66]) {
        FUN_02035598((void *)self[66]);
        FUN_020357e8((void *)self[66]);
        switch (key) {
        case 48:
        case 49:
        case 50:
        case 51:
            FUN_02043ea4((void *)self[66], 1, 0);
            break;
        case 28:
            FUN_02035880((void *)self[66], 0, 4, 0, 0);
            FUN_020358e8((void *)self[66], 0, 4, 15 << 12);
            break;
        }
        self[65] = DAT_overlay_12__0213b348[index].anim;
        FUN_02040c0c((void *)self[66], 0, self[65], 4096, 0);
        position.x = DAT_overlay_12__0213b348[index].x;
        position.y = DAT_overlay_12__0213b348[index].y;
        position.z = 0;
        *(Vec *)(self[66] + 56) = position;
        *(unsigned short *)(self[66] + 68) = DAT_overlay_12__0213b348[index].rot;
        manager = DAT_02108c84;
        if (manager) {
            child = *(int **)((char *)manager + manager[25] * 4 + 0x40);
            if (child) {
                child[31] = DAT_overlay_12__0213b348[index].cam;
                child[30] |= 2;
            }
        }
        field = (*(volatile unsigned *)0x04000000 & 0x1f00u) >> 8;
        *(volatile unsigned *)0x04000000 = (*(volatile unsigned *)0x04000000 & 0xffffe0ffu) | ((field & ~1u) << 8);
        self[56] = 3;
    }
    self[16] = 4;
}
