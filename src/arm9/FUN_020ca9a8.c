// Verified 2026-11-13: full242-byte body, pinned2.0/sp2p3, exactbytes andeveryrelocation; restoredconsumedarguments.
// flags: -O4,p
extern int *FUN_020cf0d8(void *, void *);
extern int FUN_020cf7a8(void *, void *, void **);
extern int FUN_020ca8dc(void *, void *, int, int);
extern int *FUN_020cf138(void *, void *, int);
extern int FUN_020cf198(void *, int *);
extern int FUN_020cf1d0(void *, int *);
extern void FUN_020cf4c8(int *, int);
extern int FUN_020cf268(void *, int *, int, int);

int FUN_020ca9a8(void *arg0, void *arg1, int arg2, int arg3, int arg4, int arg5) {
    void *obj;
    int *p = FUN_020cf0d8(arg0, arg1);
    if (p == 0) {
        if (FUN_020cf7a8(arg0, arg1, &obj) == 0 || *(int *)((char *)obj + 0xc) == 0 || *(unsigned short *)(*(int *)((char *)obj + 0xc) + 0x20) == 0) {
            if (arg4 == 0x0b00) {
                return 3;
            }
            return FUN_020ca8dc(arg0, arg1, arg2, arg3);
        }
        p = FUN_020cf138(arg0, arg1, 1);
        if (p == 0) {
            return 1;
        }
        if (*(int *)((char *)obj + 0x1c) == 0) {
            int r = FUN_020cf198(arg0, p);
            if (r != 0) {
                return r;
            }
        } else {
            int r = FUN_020cf1d0(arg0, p);
            if (r != 0) {
                return r;
            }
        }
    } else {
        if (*p == 0x6a && FUN_020cf7a8(arg0, arg1, &obj) != 0) {
            int sub = *(int *)((char *)obj + 0xc);
            if (sub != 0) {
                *(unsigned short *)(sub + 0x20) = 0;
            }
            if (arg4 == 0x0b00) {
                return 3;
            }
            if (arg2 < 100) {
                return FUN_020ca8dc(arg0, arg1, arg2, arg3);
            }
        }
    }
    if (arg5 != 0) {
        FUN_020cf4c8(p, arg5);
    }
    {
        int r = FUN_020cf268(arg0, p, arg2, arg3);
        if (r != 0) {
            return r;
        }
        return 0;
    }
}
