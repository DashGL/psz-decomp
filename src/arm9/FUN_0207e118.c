// flags: -O4,s
typedef struct { int x, y, z; } V323;
typedef struct { unsigned char b[6]; } Info6;
extern int UNK_020f2bf8[], UNK_020f2b80[];
extern unsigned short UNK_020f2a22[], UNK_020f2a28[], UNK_020f2a10[];
extern char UNK_0211c844[];
extern V323 UNK_020f2ab4;

extern void FUN_0207a514(void *, void *, int, int, int);
extern void FUN_0207a3f4(void *, int, int, int);
extern void FUN_0204bf88(void *);
extern void FUN_0207a5b4(void *);
extern void FUN_0200c938(void *, int);
extern void FUN_020be4f8(int, int, int);
extern unsigned FUN_0207b860(void *, unsigned);
extern int FUN_0204dab0(int);
extern int FUN_0204dac4(int);
extern int FUN_02078198(int);
extern int FUN_020be450(void);
extern int FUN_020beccc(int, void *, int, void *, void *);

void FUN_0207e118(char *s, char *desc, int level) {
    V323 op;
    V323 v;
    Info6 copy;
    int args[2];
    Info6 info;
    int scale, range, index, life, value;
    unsigned short yaw, pitch;

    FUN_0207a514(s, desc, level, 1, 5);
    *(int *)(s + 268) = 1;
    scale = 4096;
    *(unsigned short *)(s + 392) = 0;
    range = 0;
    yaw = 0;
    pitch = 0;
    if (*(int *)(s + 280) >= 0 && *(int *)(s + 280) < 3) {
        scale = (UNK_020f2bf8[*(int *)(s + 280)] << 12) / 10;
        range = (UNK_020f2b80[*(int *)(s + 280)] << 12) / 10;
        *(unsigned short *)(s + 392) = UNK_020f2a22[*(int *)(s + 280)];
        yaw = UNK_020f2a28[*(int *)(s + 280)];
        pitch = UNK_020f2a10[*(int *)(s + 280)];
    }
    FUN_0207a3f4(&info, 1, *(int *)(s + 276), 1);
    copy = info;
    life = *(int *)(s + 76);
    value = life * copy.b[2] / *(int *)(s + 272);
    *(int *)(s + 72) = value * life;
    *(int *)(s + 380) = 31 / value;
    value = scale + FUN_0207b860(UNK_0211c844, range);
    v.x = value; v.y = value; v.z = value;
    *(V323 *)(s + 80) = v;
    *(unsigned short *)(s + 104) = (unsigned short)(-yaw + FUN_0207b860(UNK_0211c844, 2 * yaw)) + 16384;
    FUN_0204bf88(s);
    *(unsigned short *)(s + 284) = *(unsigned short *)(s + 104);
    { unsigned short d = (unsigned short)(-pitch + FUN_0207b860(UNK_0211c844, 2 * pitch)); *(unsigned short *)(s + 106) = d + *(unsigned short *)(s + 106); }
    FUN_0204bf88(s);
    *(unsigned short *)(s + 286) = *(unsigned short *)(s + 106);
    *(int *)(s + 384) = 0;
    *(int *)(s + 228) |= 1;
    *(int *)(s + 172) = 2;
    if (FUN_0204dab0(*(int *)(s + 232)) || FUN_0204dac4(*(int *)(s + 232)) || FUN_02078198(*(int *)(s + 232))) {
        op = UNK_020f2ab4;
        if (FUN_02078198(*(int *)(s + 232))) {
            op.x = 2;
            op.y = 1;
            *(int *)(s + 256) = *(int *)(desc + 96);
        } else {
            *(int *)(s + 256) = 22;
        }
        FUN_0200c938(args, 8);
        args[1] = *(int *)(s + 232);
        FUN_0207a5b4(s);
        *(int *)(s + 376) = FUN_020beccc(FUN_020be450(), s + 324, 1, &op, args);
        FUN_020be4f8(FUN_020be450(), *(int *)(s + 376), 0);
    }
}
