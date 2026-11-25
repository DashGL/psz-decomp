// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x9a, exact bytes and relocation targets.
extern int FUN_020c6e0c(void *);
extern int *FUN_020c6e10(void *, int);
extern int FUN_020d37c8(unsigned short, int);
extern void FUN_020c6eec(void *, int);
extern void FUN_020d2b88(void *, int, int);

struct S9 {
    char pad[0x50];
    int f50[2];
    int f58;
    int f5c;
    void *f60;
};

int FUN_020d3850(struct S9 *param_1, int param_2) {
    int count;
    int i;
    int first_val;

    count = FUN_020c6e0c(param_1->f60);
    if (count == 0) {
        return 1;
    }
    for (i = 0; i < count; i++) {
        int *elem = FUN_020c6e10(param_1->f60, i);
        if (FUN_020d37c8(*(unsigned short *)((char *)elem + 8), param_2) >= 0) {
            break;
        }
    }
    if (i == 0) {
        return 1;
    }
    while (i-- != 0) {
        FUN_020c6eec(param_1->f60, i);
    }
    count = FUN_020c6e0c(param_1->f60);
    if (count == 0) {
        param_1->f58 = 0;
        return 1;
    }
    first_val = *FUN_020c6e10(param_1->f60, 0);
    for (i = 0; i < count; i++) {
        int *elem = FUN_020c6e10(param_1->f60, i);
        *elem -= first_val;
    }
    FUN_020d2b88(&param_1->f50, 0, first_val);
    return 1;
}
