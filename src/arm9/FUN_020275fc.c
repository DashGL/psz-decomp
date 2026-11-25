// flags: -O4,p -noThumb
extern int FUN_02027f8c(void *);
extern void FUN_020276a8(void);
extern int FUN_02025f40(void (*)(void), int, int);
extern int FUN_02026098(int, int);

int FUN_020275fc(void *a0) {
    int r5;
    if (FUN_02027f8c(a0) != 0) {
        return -0x1c;
    }
    int b0 = 0;
    if (a0 != 0) {
        short f = *(volatile short *)((char *)a0 + 0x70);
        if (f & 1) {
            b0 = 1;
        }
    }
    if (!b0) {
        return -0x27;
    }
    if (!(*(volatile short *)((char *)a0 + 0x70) & 4) || (*(volatile short *)((char *)a0 + 0x70) & 8)) {
        return -0x38;
    }
    *(volatile short *)((char *)a0 + 0x70) |= 8;
    r5 = *(int *)((char *)a0 + 0x68);
    if (r5 != 0 && *(int *)(r5 + 0x10c) != 0) {
        int req = FUN_02025f40(FUN_020276a8, *(int *)(r5 + 0x10c), *(signed char *)((char *)a0 + 0x72));
        if (req == 0) {
            return -0x21;
        }
        return FUN_02026098(*(int *)(r5 + 0x10c), req);
    }
    return 0;
}
