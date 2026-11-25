// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x96, exact bytes and relocation targets.
extern int FUN_020dd244(void *);
extern int FUN_020dd208(void *);
extern long long FUN_020dd1dc(void *);
extern int FUN_020dd1f4(void *);
extern long long FUN_020dd1f8(void *);

int FUN_020dd920(void *param_1, void *param_2) {
    int t = FUN_020dd244(param_1);
    if (t != FUN_020dd244(param_2)) {
        return 0;
    }
    if (t == 3) {
        int v = FUN_020dd208(param_1);
        if (v == FUN_020dd208(param_2)) {
            return 1;
        }
        return 0;
    }
    if (t == 1) {
        long long v1 = FUN_020dd1dc(param_1);
        if (v1 == FUN_020dd1dc(param_2)) {
            int f1 = FUN_020dd1f4(param_1);
            if (f1 == FUN_020dd1f4(param_2)) {
                return 1;
            }
        }
        return 0;
    }
    if (t == 2) {
        long long v2 = FUN_020dd1f8(param_1);
        if (v2 == FUN_020dd1f8(param_2)) {
            return 1;
        }
        return 0;
    }
    return 0;
}
