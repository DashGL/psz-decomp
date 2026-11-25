// flags: -O4,s
typedef struct {
    int x, y, z;
} Vec;

extern const short DAT_020ed83c[];
extern int DAT_0219d9c4;
extern int G_0219d9c4[];
extern int DAT_020fc988;

extern void FUN_02040c0c(void *, int, int, int, int);
extern int FUN_overlay_23__0219a364(void *, Vec *);
extern void FUN_02036348(Vec *, const Vec *, const Vec *);
extern void FUN_02036368(Vec *);
#pragma thumb off
extern unsigned short FUN_0205cc08(int);
#pragma thumb on
extern unsigned int FUN_02035b60(unsigned int);
extern void FUN_02092654(Vec *, const int *);
extern void FUN_0203647c(Vec *, const Vec *, const Vec *);

void FUN_overlay_23__0219b0cc(char *self) {
    char *owner = *(char **)(self + 4);
    char *state = *(char **)(self + 8);
    Vec *pos;
    Vec target, direction, offset, result;
    unsigned short angle;
    int idx;

    FUN_02040c0c(owner, 0, 4, 4096, 0);
    *(int *)(self + 12) = 0;
    *(int *)(self + 16) = *(int *)(state + 0x64);
    pos = (Vec *)(owner + 0x38);
    angle = *(unsigned short *)(owner + 0x44);
    *(Vec *)(self + 20) = *pos;
    *(unsigned short *)(self + 0x20) = angle;

    if (FUN_overlay_23__0219a364(state, &target)) {
        FUN_02036348(&direction, &target, pos);
        direction.y = 0;
        FUN_02036368(&direction);
        angle = FUN_0205cc08(direction.z);
        if (direction.x < 0) {
            angle = (unsigned short)(0x10000 - angle);
        }
        angle = (unsigned short)(angle + (FUN_02035b60(0x8000) - 0x4000));
        *(unsigned short *)(self + 0x30) = angle;
        idx = ((int)(unsigned short)(angle + 0x8000) >> 4) * 2;
        offset.x = DAT_020ed83c[idx];
        offset.y = 0;
        offset.z = DAT_020ed83c[idx + 1];
        FUN_02092654(&offset, &DAT_0219d9c4);
        FUN_0203647c(&result, &target, &offset);
        *(Vec *)(self + 0x24) = result;
        *(int *)(self + 0x34) = G_0219d9c4[2];
        *(int *)(self + 0x38) = DAT_020fc988;
    } else {
        *(Vec *)(self + 0x24) = *(Vec *)(self + 0x14);
        *(unsigned short *)(self + 0x30) = *(unsigned short *)(self + 0x20);
        *(int *)(self + 0x34) = G_0219d9c4[2];
        *(int *)(self + 0x38) = DAT_020fc988;
    }
}
