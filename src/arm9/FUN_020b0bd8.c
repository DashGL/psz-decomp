// flags: -O4,s
typedef struct { int x, y, z; } Vec3;
extern void *DAT_02108c84;
extern short DAT_020ed83c[];
extern void FUN_020345f0(void *, void *);
extern int FUN_02034b8c(void *, int);
void FUN_020b0bd8(char *s) {
    if (*(short *)(s + 0x5c) == 1) {
        (*(unsigned short *)(s + 0x78))++;
        if (*(unsigned short *)(s + 0x78) <= 75 && DAT_02108c84 != 0) {
            Vec3 a, b;
            int idx;
            a = *(Vec3 *)(s + 0x34);
            idx = (*(unsigned short *)(s + 0x58) >> 4) * 2;
            a.x += ((*(int *)(s + 0x60) * *(unsigned short *)(s + 0x78)) * DAT_020ed83c[idx]) >> 12;
            a.z += ((*(int *)(s + 0x60) * *(unsigned short *)(s + 0x78)) * DAT_020ed83c[idx + 1]) >> 12;
            FUN_020345f0(&b, &a);
            if (FUN_02034b8c(&b, 0x100) != 0) {
                *(unsigned short *)(s + 0x7a) = *(unsigned short *)(s + 0x78);
            }
        }
    }
}