// flags: -O4,s
typedef struct Vec { int x, y, z; } Vec;
extern Vec DAT_overlay_31__0219c554;
extern int FUN_02047440(void *);
extern int FUN_0204770c(void *);
extern void *FUN_02090c20(void);
extern void *FUN_020be450(void);
extern void FUN_02090f74(short *, void *, const Vec *, int);
extern void FUN_020c1d7c(int, int, int, int, int);
extern void FUN_0204ac24(int, int, int, int);
extern void FUN_020bed1c(void *, int);
#pragma thumb off
extern void FUN_0200c938(void *, int);
#pragma thumb on
extern int FUN_020beccc(void *, void *, int, const Vec *, const int *);
extern void FUN_020be4f8(void *, int, int);

int FUN_overlay_31__0219858c(char *self) {
    int status = FUN_02047440(self);
    int handle;
    short screen[2];
    Vec mask;
    int payload[2];

    if (!status) {
        if (FUN_0204770c(self)) {
            FUN_02090f74(screen, FUN_02090c20(), (Vec *)(self + 0x5c), 1);
            FUN_020c1d7c(28, *(int *)(self + 0x108), screen[0], screen[1], 4);
            FUN_0204ac24(*(int *)(self + 0xe8), *(int *)(self + 0x164), *(int *)(self + 0x60), *(int *)(self + 0x104));
            if (*(int *)(self + 0x94) > 61440) {
                handle = *(int *)(self + 0x164);
                if (handle != -1) {
                    FUN_020bed1c(FUN_020be450(), handle);
                    *(int *)(self + 0x164) = -1;
                }
            } else if (*(int *)(self + 0x94) > 40960 && *(int *)(self + 0x164) == -1 && *(int *)(self + 0x104) >= 0) {
                mask = DAT_overlay_31__0219c554;
                FUN_0200c938(payload, 8);
                payload[1] = *(int *)(self + 0xe8);
                *(int *)(self + 0x164) = FUN_020beccc(FUN_020be450(), self + 0x130, 1, &mask, payload);
                FUN_020be4f8(FUN_020be450(), *(int *)(self + 0x164), 0);
            }
        }
    }
    return status;
}
