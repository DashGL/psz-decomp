// flags: -O4,s
int FUN_overlay_21__021993ec(char *p, unsigned int step) {
    int reached = 0;
    unsigned int distance = *(unsigned short *)(p + 0x10a);
    int negative = 0;
    if (distance >= 0x8000) {
        distance = (unsigned short)(0x10000 - distance);
        negative = 1;
    }
    if (distance < step) {
        step = distance;
        reached = 1;
    }
    if (negative) *(unsigned short *)(p + 0x10a) += step;
    else *(unsigned short *)(p + 0x10a) -= step;
    return reached;
}
