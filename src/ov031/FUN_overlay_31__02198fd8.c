//cpp
// flags: -O4,s
extern "C" void FUN_020bc610(int *, const int *, const int *);
extern "C" unsigned short FUN_overlay_31__02198fd8(int *p) {
    unsigned short heading, delta;
    unsigned int step;
    int reverse, result, numerator;
    if (((*(int *)0x020fc988 >= p[4]) ? 1 : 0) != 0) return ((unsigned short *)p)[7];
    reverse = 0;
    heading = *(unsigned short *)((char *)p[1] + 68);
    delta = ((unsigned short *)p)[7] - heading;
    if (delta > 32768) {
        delta = 65536 - delta;
        reverse = 1;
    }
    numerator = (int)delta << 12;
    FUN_020bc610(&result, &numerator, p + 4);
    step = ((unsigned int)result << 4) >> 16;
    if (reverse == 1) heading -= step;
    else heading += step;
    return heading;
}
