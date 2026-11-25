//cpp
// flags: -O4,s
extern "C" void FUN_02040c0c(void *, int, int, int, int);
extern "C" void FUN_overlay_27__0219a7a4(int *p) {
    int *parent = (int *)p[2];
    p[3] = 0;
    int flag = (parent[23] & 1) ? 1 : 0;
    if (flag) {
        p[4] = 1;
        FUN_02040c0c((void *)p[1], 0, 5, 4096, 0);
    } else {
        p[4] = 0;
        FUN_02040c0c((void *)p[1], 0, 1, 4096, 0);
    }
}
