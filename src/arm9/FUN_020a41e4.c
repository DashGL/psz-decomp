// flags: -O4,s
typedef union {
    int d[5];
    signed char p[20];
    unsigned char u[20];
} Msg_020a41e4;
extern int FUN_02030700(void *);
extern int FUN_0203068c(void *);
extern void FUN_02030808(void *, int, int);
extern void FUN_02030da8(void *, void *);
extern void FUN_020bce3c(void *);
void FUN_020a41e4(char *s, int mode) {
    if (mode == 0 && !FUN_02030700(s + 316)) {
        Msg_020a41e4 m;
        int kind;
        FUN_02030808(s + 316, 1, 0);
        kind = FUN_0203068c(s);
        FUN_02030da8(&m, s);
        m.p[4] = 1;
        m.p[5] = 0;
        m.p[6] = 0;
        m.p[7] = 0;
        m.p[8] = m.p[0];
        m.p[9] = m.p[1];
        m.p[10] = m.p[2];
        m.p[11] = m.u[3];
        m.d[3] = kind;
        m.p[16] = 0;
        m.p[17] = 0;
        m.p[18] = 0;
        m.p[19] = 0;
        m.p[6] = 5;
        m.p[7] = 11;
        m.p[4] = 4;
        FUN_020bce3c(&m.d[1]);
    }
}
