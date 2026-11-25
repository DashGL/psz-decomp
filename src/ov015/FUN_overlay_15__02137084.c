// flags: -O4,p
int FUN_overlay_15__02137084(const unsigned char *p, int max) {
    int i;
    for (i = 0; i < max; i++) {
        if (p[i] == 0) {
            break;
        }
    }
    return i;
}
