// flags: -O4,s
extern int FUN_overlay_21__0219b268(void *, unsigned short *);
extern void FUN_overlay_21__0219b324(void *);
int FUN_overlay_21__0219b424(unsigned char *p) {
    int done = 0;
    unsigned short heading = 0;
    unsigned short difference;
    int side;
    unsigned short step;
    if (*(int *)(p + 124) != -1 && FUN_overlay_21__0219b268(p, &heading)) {
        difference = (unsigned short)(*(unsigned short *)(p + 76) + *(unsigned short *)(*(unsigned char **)(p + 4) + 264) - heading);
        side = 0;
        if (difference >= 32768) {
            difference = (unsigned short)(65536 - difference);
            side = 1;
        }
        if (*(int *)(p + 88) != side) *(unsigned short *)(p + 82) = 0;
        *(int *)(p + 88) = side;
        if (*(unsigned short *)(p + 82) < 182) *(unsigned short *)(p + 82) += 6;
        step = *(unsigned short *)(p + 82);
        if (step > difference) {
            step = difference;
            done = 1;
        }
        if (side) *(unsigned short *)(p + 76) += step;
        else *(unsigned short *)(p + 76) -= step;
        *(int *)(p + 92) = 1;
    } else {
        if (*(int *)(p + 92)) {
            int half;
            difference = (unsigned short)(*(unsigned short *)(p + 78) - *(unsigned short *)(p + 76));
            side = 0;
            if (difference >= 32768) {
                difference = (unsigned short)(65536 - difference);
                side = 1;
            }
            if (*(int *)(p + 88) != side) *(unsigned short *)(p + 82) = 0;
            *(int *)(p + 88) = side;
            if (*(unsigned short *)(p + 82) < 182) *(unsigned short *)(p + 82) += 6;
            step = *(unsigned short *)(p + 82);
            half = (int)((unsigned int)*(unsigned short *)(p + 86) >> 1);
            if (half < (int)difference + (int)step) {
                step = (unsigned short)(half - difference);
                *(unsigned short *)(p + 82) = 0;
            }
            if (side) *(unsigned short *)(p + 76) += step;
            else *(unsigned short *)(p + 76) -= step;
        }
        FUN_overlay_21__0219b324(p);
    }
    return done;
}
