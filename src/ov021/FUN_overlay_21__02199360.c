// flags: -O4,s
extern void FUN_02036348(int *, const int *, const int *);
#pragma thumb off
extern unsigned short FUN_0205c9e4(int, int);
#pragma thumb on

int FUN_overlay_21__02199360(unsigned char *p, const int *target, unsigned int step, int relative) {
    int vec[3];
    int done = 0;
    unsigned short current, delta;
    int positive;
    FUN_02036348(vec, target, (const int *)(p + 56));
    if (relative == 0) current = *(unsigned short *)(p + 264);
    else current = (unsigned short)(*(unsigned short *)(p + 264) + *(unsigned short *)(p + 266));
    delta = (unsigned short)(current - FUN_0205c9e4(vec[0], vec[2]));
    positive = 0;
    if (delta >= 32768) {
        delta = (unsigned short)(65536 - delta);
        positive = 1;
    }
    if (delta < step) {
        step = delta;
        done = 1;
    }
    if (positive) current += step;
    else current -= step;
    if (relative == 0) *(unsigned short *)(p + 264) = current;
    else *(unsigned short *)(p + 266) = current - *(unsigned short *)(p + 264);
    return done;
}
