// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x98, exact bytes and relocation targets.
// flags: -noThumb
struct S12 {
    int f0;
    unsigned short f4;
    unsigned short f6;
    int f8;
};
extern int FUN_020587ec(void *, void *, int);

int FUN_02058938(void *param_1) {
    struct {
        int f0;
        unsigned short f4;
        unsigned short f6;
    } local_8;
    void *local_10[2];
    char *r4 = *(char **)((char *)param_1 + 8);
    struct S12 *r5 = (struct S12 *)((char *)param_1 + 0x30);
    int res;
    local_10[0] = r4;
    local_10[1] = *(char **)(r4 + 0x34) + (r5->f4 << 3);
    res = FUN_020587ec(local_10, &local_8, 8);
    if (res == 0) {
        *(struct S12 *)((char *)param_1 + 0x20) = *r5;
        if (r5->f6 == 0 && r5->f8 == 0) {
            *(unsigned short *)((char *)param_1 + 0x26) = local_8.f4;
            *(int *)((char *)param_1 + 0x28) = *(int *)(r4 + 0x34) + local_8.f0;
        }
        *(int *)((char *)param_1 + 0x2c) = local_8.f6 & 0xfff;
    }
    return res;
}
