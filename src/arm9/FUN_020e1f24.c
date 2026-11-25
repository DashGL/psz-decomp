// flags: -O4,s
struct G { void *f0; unsigned int *p; };
extern struct G DAT_0211de44;
void FUN_020e1f24(void) {
    if (DAT_0211de44.p) {
        DAT_0211de44.p[1] = 0;
        DAT_0211de44.p[12] = 0;
    }
}
