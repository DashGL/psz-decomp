// flags: -O2,s
typedef struct Vec { int x, y, z; } Vec;
extern const short DAT_020ed83c[];
extern const int DAT_0219ce88[];
extern void FUN_02043f30(void *, int, const Vec *);
extern int FUN_02040ce8(void *, int, int);
extern void FUN_02040d0c(void *, int, int);
extern void FUN_overlay_23__0219a664(void *, int);
extern void FUN_overlay_23__0219a4d8(void *);
extern void FUN_overlay_23__02199d30(void *);

void FUN_overlay_23__02199ac4(char *self) {
    Vec offset;
    unsigned i;
    *(unsigned short *)(self + 0xd4) += 970;
    {
        int angle = *(unsigned short *)(self + 0xd4);
        int y = (int)(((long long)DAT_020ed83c[(angle >> 4) * 2] * 512 + 2048) >> 12) + 512;
        offset.x = 0;
        offset.y = y;
        offset.z = 0;
    }
    FUN_02043f30(self, 0, &offset);
    for (i = 0; i < 4; i++) {
        int event = DAT_0219ce88[i];
        if (**(signed char **)*(char **)(self + 0x14) == 57 && event != 1 && event != 0) continue;
        if (FUN_02040ce8(self, 0, event)) {
            FUN_02040d0c(self, 0, event);
            FUN_overlay_23__0219a664(self, i);
        }
    }
    FUN_overlay_23__0219a4d8(self);
    FUN_overlay_23__02199d30(self);
}
