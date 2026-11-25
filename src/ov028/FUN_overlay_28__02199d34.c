// flags: -O4,s
extern void FUN_02040c0c(void *, int, int, int, int);
extern int FUN_02037578(void *);
extern unsigned int FUN_02037208(void *, int);
void FUN_overlay_28__02199d34(int *p) {
    void *c = (void *)p[1];
    int length, mode;
    unsigned int timer;
    FUN_02040c0c(c, 0, 4, 4096, 0);
    length = 60;
    mode = FUN_02037578(c);
    if (mode == 0) length = 60;
    else if (mode == 1) length = 45;
    else if (mode == 2) length = 30;
    if (FUN_02037208(c, 3) < 1) {
        length += 15;
        p[4] = 0;
        timer = (FUN_02037208(c, length) + 15) << 12;
    } else {
        p[4] = 1;
        timer = length << 12;
    }
    p[6] = timer;
    p[3] = 0;
    p[5] = 0;
}
