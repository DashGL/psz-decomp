// flags: -O4,s
extern int FUN_02036c34(void *);
unsigned short FUN_overlay_31__0219b80c(unsigned char *p, unsigned short target, unsigned int speed) {
    unsigned short delta = target - *(unsigned short *)(p + 68);
    int reverse = 0;
    if (delta >= 32768) {
        delta = 65536 - delta;
        reverse = 1;
    }
    speed = (unsigned short)(((long long)speed * FUN_02036c34(p) + 2048) >> 12);
    if (speed > delta)
        speed = delta;
    if (reverse)
        target = *(unsigned short *)(p + 68) - speed;
    else
        target = speed + *(unsigned short *)(p + 68);
    *(unsigned short *)(p + 68) = target;
    return target;
}
