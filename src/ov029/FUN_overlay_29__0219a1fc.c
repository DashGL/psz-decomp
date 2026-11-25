// flags: -O4,s
typedef struct Vec { int x, y, z; } Vec;
extern int DAT_overlay_29__0219be2c;
extern int FUN_02041474(void *, int);
extern void FUN_020439ac(int);
extern int FUN_02036f7c(void *, Vec *);
extern void FUN_overlay_29__021993f8(void *, const Vec *);

void FUN_overlay_29__0219a1fc(char *self) {
    char *owner = *(char **)(self + 4);
    Vec velocity;
    int scale;
    if (FUN_02041474(owner, 0) == 1) {
        (*(unsigned *)(self + 12))++;
    }
    (*(unsigned *)(self + 20))++;
    if (((*(int *)(self + 12) >= 6) | (*(int *)(self + 20) > 300)) == 1) {
        *(int *)(owner + 0xd8) = 1;
        FUN_020439ac(*(int *)(owner + 12));
    }
    if (*(int *)(self + 12) > 0) {
        FUN_02036f7c(owner, &velocity);
        scale = DAT_overlay_29__0219be2c;
        velocity.x = (int)(((long long)velocity.x * scale + 2048) >> 12);
        velocity.y = (int)(((long long)velocity.y * scale + 2048) >> 12);
        velocity.z = (int)(((long long)velocity.z * scale + 2048) >> 12);
        FUN_overlay_29__021993f8(owner, &velocity);
        *(unsigned short *)(owner + 0x44) = *(unsigned short *)(self + 0x10) + *(unsigned short *)(owner + 0x44);
    }
}
