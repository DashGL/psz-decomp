// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xb8, exact bytes and relocation targets.
// flags: -O4,p

struct Base12 {
    int a, b, c;
};

struct ItemE2E4C {
    struct Base12 sub;
};

struct SubE2E4C {
    unsigned char pad[0x1d];
    unsigned char f1d;
};

struct GlobalE2E4C {
    int f0;
    int f4;
    int f8;
    struct SubE2E4C *fc;
};

extern struct GlobalE2E4C DAT_0211de50;
extern int FUN_020e2a24(int);
extern int FUN_020dd2c8(void *);
extern void FUN_020dd8f0(void *, int);
extern int FUN_020dd270(void *);
extern void FUN_020dd2fc(void *);
extern void FUN_020e2db0(void *, int, int);

int FUN_020e2e4c(struct ItemE2E4C *arr, int count, int target) {
    int found = -1;
    int i;
    for (i = 0; i < count; i++) {
        int v = FUN_020e2a24(i);
        if (v != 0) {
            int j;
            if (v == target) {
                found = i;
            }
            for (j = i + 1; j < count; j++) {
                if (v == FUN_020e2a24(j)) {
                    if (FUN_020dd2c8((struct Base12 *)arr + i) == 2 && FUN_020dd2c8(&arr[j]) == 3) {
                        FUN_020dd8f0(&arr[i], v);
                    }
                    if (FUN_020dd270(&arr[j]) != 0) {
                        FUN_020dd2fc(&arr[i]);
                    }
                    FUN_020e2db0(arr, j, i);
                    DAT_0211de50.fc->f1d = 1;
                }
            }
        }
    }
    return found;
}
