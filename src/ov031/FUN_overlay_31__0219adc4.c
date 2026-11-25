//cpp
// flags: -O4,s
extern "C" {
extern void FUN_02040c0c(void *, int, int, int, int);
extern unsigned int FUN_02035b60(int);
}
extern "C" void FUN_overlay_31__0219adc4(int *p) {
    int *c = (int *)p[1];
    unsigned int delay;
    if ((((c[53] & 2) != 0) ? 1 : 0) == 1) {
        FUN_02040c0c(c, 0, 1, 4096, 0);
        delay = FUN_02035b60(1) + 40;
    } else {
        FUN_02040c0c(c, 0, 0, 4096, 0);
        delay = FUN_02035b60(301) + 900;
    }
    p[3] = delay << 12;
}
