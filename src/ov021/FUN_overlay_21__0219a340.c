// flags: -O4,s
void FUN_overlay_21__0219a340(unsigned int *p, const short *amount, const signed char *event) {
    unsigned int *owner = (unsigned int *)p[1];
    int category;
    if (!owner[53]) {
        int half = ((short *)owner)[12] / 2;
        int *slot = (int *)(owner + 13);
        if (half > *slot) *slot = half;
    }
    category = *(const int *)event;
    if (category >= 0 && category <= 3) {
        ++((unsigned int *)((char *)p + 0x90))[category];
        ++p[40];
    }
    switch (event[9]) {
    case 0: {
        unsigned ok = (p[21] == p[2]);
        if (ok) p[41] -= *amount;
        break;
    }
    case 1:
        if (event[11] == 1) {
            ++p[46];
            if ((int)p[46] >= 3) {
                unsigned ok = (p[14] == p[2]);
                if (ok) p[47] = 1;
            }
        }
        break;
    case 11:
    case 13:
        ((unsigned int *)owner[59])[30] -= *amount;
        break;
    case 12:
    case 14:
        ((unsigned int *)owner[59])[77] -= *amount;
        break;
    }
}
