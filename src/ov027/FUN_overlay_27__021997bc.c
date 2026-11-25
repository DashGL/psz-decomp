//cpp
// flags: -O4,s
extern "C" int FUN_020375f0(void *);
extern "C" void FUN_02044570(void *, int, int);
extern "C" void FUN_overlay_27__021997bc(int *p) {
    if (!FUN_020375f0(p)) {
        int first = 1;
        int second = 0;
        int valid = (p[53] != -1) ? 1 : 0;
        if (valid) {
            first = 0;
            second = 1;
        }
        FUN_02044570(p, 0, first);
        FUN_02044570(p, 1, second);
    }
}
