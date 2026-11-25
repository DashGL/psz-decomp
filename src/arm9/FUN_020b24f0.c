// flags: -O4,s
enum { E0 = 0, E1 = 1 };
extern unsigned char *FUN_02083534(void *, unsigned int);
void *FUN_020b24f0(int *s, unsigned int *source) {
    int i;
    unsigned int j, limit;
    unsigned char *p;
    s[20] = 0;
    s[21] = 0;
    for (i = 0; i < 20; i++) s[i] = -1;
    limit = source[20];
    if (limit > 19) limit = 19;
    else if (limit < 2) limit = 2;
    s[21] = limit - 2;
    for (j = 0; j < limit; j++) {
        p = FUN_02083534(source, j);
        if (p) {
            if ((p[0] & 4) ? E1 : E0) p[0] |= 64;
            else if (p[2] == 1 && s[20] < 20) {
                p[0] |= 32;
                s[s[20]] = ((signed char *)p)[1];
                ++s[20];
            }
        }
    }
    return s;
}
