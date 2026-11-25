// flags: -O4,p
extern struct { int pad[3]; char *p; } DAT_0211de50;
void FUN_020e2be0(void) {
    if (DAT_0211de50.p) {
        *(unsigned int *)DAT_0211de50.p = 0;
        DAT_0211de50.p[30] = 0;
        DAT_0211de50.p[31] = 0;
    }
}
