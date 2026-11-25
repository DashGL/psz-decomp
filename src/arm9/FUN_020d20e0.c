// flags: -O4,p
extern signed char *DAT_020fe694;
void FUN_020d20e0(signed char *p, int count) {
    signed char *key = DAT_020fe694;
    int i;
    for (i = 0; i < count; i++) {
        p[i] ^= *key++;
        if (*key == 0) {
            key = DAT_020fe694;
        }
    }
}
