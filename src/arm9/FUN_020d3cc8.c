// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x110, exact bytes and relocation targets.
// flags: -O4,p
struct Entry_020d3cc8 {
    int f0;
    int f4;
    int f8;
    unsigned short fc;
    unsigned short fe;
};
extern int FUN_020c6e0c(void *);
extern struct Entry_020d3cc8 *FUN_020c6e10(void *, int);
extern short FUN_020d37c8(int, int);
extern int FUN_020d2ab4(void *);
extern void FUN_020c6e84(void *, struct Entry_020d3cc8 *, void *);
extern void FUN_020d2b30(void *, void *, int);
extern int FUN_020d4a24(void *, unsigned short, unsigned short);
extern void FUN_020d3cbc(void);

int FUN_020d3cc8(int *arg0, int arg1, int arg2, void *arg3, int arg4, int *arg5) {
    int n = FUN_020c6e0c((void *)arg0[0x17]);
    int i;
    struct Entry_020d3cc8 e;

    for (i = 0; i < n; i++) {
        struct Entry_020d3cc8 *cur = FUN_020c6e10((void *)arg0[0x17], i);
        if (cur->fc == arg2) {
            *arg5 = 0;
            return 1;
        }
        if (FUN_020d37c8(cur->fc, arg2) > 0) {
            break;
        }
    }
    if (FUN_020d2ab4((char *)arg0 + 0x44) < arg4) {
        *arg5 = 1;
        return 1;
    }
    e.f0 = arg0[0x13];
    e.f4 = arg4;
    e.f8 = arg1;
    e.fc = (unsigned short)arg2;
    FUN_020c6e84((void *)arg0[0x17], &e, (void *)FUN_020d3cbc);
    if (n + 1 != FUN_020c6e0c((void *)arg0[0x17])) {
        *arg5 = 1;
        return 1;
    }
    FUN_020d2b30((char *)arg0 + 0x44, arg3, arg4);
    if (n == 0) {
        if (!FUN_020d4a24(arg0, *((unsigned short *)arg0 + 0x33), (unsigned short)(arg2 - 1))) {
            return 0;
        }
    } else { struct Entry_020d3cc8 *last = FUN_020c6e10((void *)arg0[0x17], n); if (last->fc == arg2) {
        struct Entry_020d3cc8 *prev = FUN_020c6e10((void *)arg0[0x17], n - 1);
        if ((unsigned short)FUN_020d37c8(arg2, prev->fc) > 1) {
            if (!FUN_020d4a24(arg0, (unsigned short)(prev->fc + 1), (unsigned short)(arg2 - 1))) {
                return 0;
            }
        }
    }
    }
    *arg5 = 0;
    return 1;
}
