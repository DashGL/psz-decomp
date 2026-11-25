// flags: -O4,p
extern const char DAT_020feaac[];
#pragma thumb off
extern int FUN_020015ac(const void *, const void *, int);
#pragma thumb reset
extern int FUN_020c7824(void);
extern int FUN_020d2e74(void *, int);
int FUN_020d4080(char *a, unsigned char *b, int c) {
    int sp;
    unsigned char *p;
    int v;
    if (*(int *)(a + 0x34) == 0) {
        return 1;
    }
    if (c != 8) {
        return 1;
    }
    if (FUN_020015ac(b, DAT_020feaac, 4) != 0) {
        return 1;
    }
    p = (unsigned char *)&sp;
    p[0] = b[4];
    p[1] = b[5];
    p[2] = b[6];
    p[3] = b[7];
    v = FUN_020c7824();
    if (FUN_020d2e74(a, v - sp) != 0) {
        return 1;
    }
    return 0;
}
