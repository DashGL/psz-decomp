//cpp
// flags: -O4,s
typedef struct {
    int x, y, z;
} Vec;

extern "C" {
extern short DAT_020ed83c[];
extern int DAT_020fc988;
extern int FUN_overlay_21__0219a7c4(void *, Vec *);

void FUN_overlay_21__0219e464(char *self) {
    char *owner = *(char **)(self + 4);
    char *state = *(char **)(self + 8);
    int i;
    Vec target;

    *(void **)(self + 0x10) = *(void **)(owner + 0xec);
    for (i = 0; i < 4; i++) {
        *(int *)(*(char **)(self + 0x10) + i * 0xbc + 0x84) = 1;
    }
    *(unsigned short *)(self + 0x14) = 0;
    if (FUN_overlay_21__0219a7c4(state, &target)) {
        Vec pos = *(Vec *)(owner + 0x38);
        int idx = (*(unsigned short *)(owner + 0x44) >> 4) * 2;
        long long first = (long long)DAT_020ed83c[idx] * (target.z - pos.z);
        long long second = (long long)DAT_020ed83c[idx + 1] * (target.x - pos.x);
        int side = (int)((first + 0x800) >> 12) - (int)((second + 0x800) >> 12);
        if ((side > DAT_020fc988) ? 1 : 0) {
            *(int *)(owner + 0xe8) = 0;
        } else {
            *(int *)(owner + 0xe8) = 1;
        }
        *(int *)(self + 0xc) = 1;
    } else {
        *(int *)(self + 0xc) = 0;
    }
    *(int *)(self + 0x18) = 0;
}
}
