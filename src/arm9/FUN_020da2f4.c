// flags: -O4,p
extern int FUN_020d8f78(void *, unsigned int, unsigned short);
extern void FUN_020d8ff0(void *, int);
int FUN_020da2f4(void *a, const unsigned char *b, int c) {
    unsigned short s0;
    unsigned int s4;
    unsigned char *p4;
    unsigned char *p0;
    int idx;
    if (c < 6) {
        return 4;
    }
    p4 = (unsigned char *)&s4;
    p4[0] = b[0]; p4[1] = b[1]; p4[2] = b[2]; p4[3] = b[3];
    p0 = (unsigned char *)&s0;
    p0[0] = b[4]; p0[1] = b[5];
    idx = FUN_020d8f78(a, s4, s0);
    if (idx == -1) {
        return 0;
    }
    FUN_020d8ff0(a, idx);
    return 0;
}
