// flags: -O4,s
extern int FUN_overlay_13__0211f198(void);
int FUN_overlay_13__0211ecc8(int *p, unsigned short *out) {
    int ready = 0;
    switch (p[2]) {
    case 0:
        if (p[1] == 0) ready = FUN_overlay_13__0211f198();
        break;
    case 1:
        if (p[1] == 0) ready = 1;
        break;
    case 2:
        out[0] = 8;
        out[1] = 0;
        *(int *)(out + 2) = p[1];
        ready = 1;
        break;
    case 3:
        break;
    }
    return ready;
}
