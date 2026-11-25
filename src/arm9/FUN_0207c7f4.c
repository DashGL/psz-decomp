// flags: -O4,s
typedef struct {
    int x, y, z;
} Vec3;

typedef struct {
    unsigned char b[6];
} Part6;

extern int DAT_020f2afc[];
extern int DAT_020f2b2c[];
extern short DAT_020ed83c[];

extern void FUN_0207a514(void *, void *, int, int, int);
extern int FUN_02078188(int);
extern int FUN_02078198(int);
extern int FUN_0207a3ac(int, int);
extern unsigned int FUN_0207a3d0(int, int);
extern void FUN_0207a1ec(Vec3 *, void *, int);
extern int FUN_0204e8bc(Vec3 *, int, unsigned int);
extern void FUN_0203647c(Vec3 *, Vec3 *, Vec3 *);
extern void FUN_02034680(Vec3 *, void *);
extern char *FUN_0204daa8(int);
extern void FUN_0207a3f4(Part6 *, int, int, int);
extern void FUN_0204b450(void *, int);
extern void FUN_0203666c(void *);
extern void FUN_020472cc(void *, int);
extern void FUN_020456bc(void *, int);
extern void *FUN_02047314(void *, int);
extern void FUN_0207cb24(void *, void *);
extern void FUN_0204b3ac(void *, void (*)(void *, void *), void *, int);

#pragma thumb off
extern void FUN_0200c938(void *, unsigned int);
extern int FUN_0200a3a0(int, int);
#pragma thumb on

void FUN_0207c7f4(char *s, char *d, int level) {
    unsigned int descriptor[25];
    Vec3 position;
    Vec3 base;
    Vec3 v;
    Vec3 adjusted;
    Vec3 added;
    Vec3 delta;
    Vec3 offset;
    Part6 copy;
    Part6 part;
    int scale;
    int vscale;
    int index, handle;
    unsigned int sub;

    FUN_0207a514(s, d, level, 3, 14);
    *(int *)(s + 268) = 1;
    scale = 4096;
    vscale = 4096;
    index = *(int *)(s + 280);
    if (index >= 0 && index < 3) {
        scale = DAT_020f2afc[index];
        vscale = DAT_020f2b2c[index];
    }
    v.x = vscale;
    v.y = vscale;
    v.z = vscale;
    *(Vec3 *)(s + 80) = v;

    if (FUN_02078188(*(int *)(s + 232))) {
        int found;
        FUN_0207a1ec(&adjusted, s + 92, *(unsigned short *)(s + 106));
        *(Vec3 *)(s + 92) = adjusted;
        handle = FUN_0207a3ac(*(int *)(s + 232), 0);
        sub = FUN_0207a3d0(*(int *)(s + 232), 0);
        position.x = 0;
        position.y = 0;
        position.z = 0;
        found = 0;
        if (handle != -1) {
            found = FUN_0204e8bc(&position, handle, sub);
        }
        if (found) {
            delta.x = 0;
            delta.y = 4096;
            delta.z = 0;
            FUN_0203647c(&added, &position, &delta);
            *(Vec3 *)(s + 92) = added;
            *(int *)(s + 384) = handle;
            *(unsigned int *)(s + 388) = sub;
        } else {
            char *actor = FUN_0204daa8(*(int *)(s + 232));
            int angle = 0;
            int distance;
            FUN_0200c938(&base, 12);
            if (actor) {
                angle = *(unsigned short *)(actor + 192);
                FUN_02034680(&base, actor + 156);
            }
            FUN_0207a3f4(&part, 3, *(int *)(s + 276), 0);
            copy = part;
            distance = (int)copy.b[2] << 12;
            index = (angle >> 4) * 2;
            offset.x = base.x + ((DAT_020ed83c[index] * distance) >> 12);
            offset.y = 4096;
            offset.z = base.z + ((DAT_020ed83c[index + 1] * distance) >> 12);
            *(Vec3 *)(s + 92) = offset;
        }
    }

    *(int *)(s + 228) |= 1;
    FUN_0204b450(s, 5);
    FUN_0203666c(descriptor);
    *(Vec3 *)((char *)descriptor + 32) = *(Vec3 *)(s + 92);
    descriptor[6] = scale;
    descriptor[4] = FUN_0200a3a0(*(int *)(s + 68), *(int *)(s + 76));
    descriptor[22] = *(int *)(d + 88);
    descriptor[21] = 22;
    FUN_020472cc(descriptor, 22);
    FUN_020456bc(descriptor, descriptor[21]);
    *(void **)(s + 380) = FUN_02047314(descriptor, 0);
    if (*(void **)(s + 380)) {
        FUN_0204b3ac(*(void **)(s + 380), FUN_0207cb24, s, 0);
    }
    if (FUN_02078198(*(int *)(s + 232))) {
        *(int *)(s + 256) = *(int *)(d + 96);
    } else {
        *(int *)(s + 256) = 25;
    }
}
