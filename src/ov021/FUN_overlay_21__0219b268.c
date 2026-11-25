// flags: -O4,s
typedef struct { int x, y, z; } Vec;
extern const Vec DAT_020fc958;
extern int FUN_02086760(int, Vec *);
extern void FUN_02036348(Vec *, const Vec *, const Vec *);
extern void FUN_0205c8cc(const Vec *, Vec *);
extern unsigned short FUN_0205c9e4(int, int);
int FUN_overlay_21__0219b268(unsigned char *p, unsigned short *out) {
    Vec origin;
    Vec target;
    Vec delta;
    unsigned short diff; int side; int mode;
    origin = *(Vec *)(*(unsigned char **)(p + 4) + 0xfc);
    target = DAT_020fc958;
    if (FUN_02086760(*(int *)(p + 0x7c), &target)) {
        FUN_02036348(&delta, &target, &origin);
        if (delta.x != 0 || delta.y != 0 || delta.z != 0) {
            FUN_0205c8cc(&delta, &delta);
        }
        *out = FUN_0205c9e4(delta.x, delta.z);
        diff = (unsigned short)((unsigned short)(*(unsigned short *)(*(unsigned char **)(p + 4) + 0x108) + *(unsigned short *)(p + 0x4e)) - *out); side = 0;
        if (diff >= 0x8000) {
            diff = (unsigned short)(0x10000 - diff);
            side = 1;
        }
        mode = *(int *)(p + 0x20);
        if ((mode == 1 && side != 0) || (mode == 2 && side == 0)) {
            return 0;
        }
        if (diff < (*(unsigned short *)(p + 0x54) >> 1)) {
            return 1;
        }
    }
    return 0;
}
