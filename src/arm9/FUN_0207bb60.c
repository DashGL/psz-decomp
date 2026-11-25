// flags: -O4,s
typedef struct {
    int x, y, z;
} Vec3;

extern int DAT_02108c84;
extern unsigned char DAT_0211c844[];
extern int DAT_020f2aa8[];

extern void FUN_02034478(int, int);
extern int FUN_0204e8bc(Vec3 *, int, int);
extern void FUN_02036348(Vec3 *, Vec3 *, void *);
extern int FUN_0204a580(void);
extern void FUN_0204a9bc(int, short *, short *);
extern void FUN_0205abac(int *, short, short);
extern void FUN_0205abe0(int *, int *);
extern void FUN_0205e6b0(void);
extern void FUN_0205eb28(short, short);
extern void FUN_0204a954(Vec3 *, Vec3 *, int *, Vec3 *);
extern void FUN_0207be00(int, int, int);
extern void FUN_0207be20(int, int, int);
extern void FUN_0207be40(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
extern void FUN_0207be7c(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
extern void FUN_0207bea0(int);
extern unsigned int FUN_0207b860(void *, unsigned int);
extern void FUN_0207becc(int, int);
extern void FUN_0207beec(short, short, short);

#define REG32(addr) (*(volatile unsigned int *)(addr))

static inline void G3_Translate(int x, int y, int z) {
    REG32(0x04000470) = (unsigned int)x;
    REG32(0x04000470) = (unsigned int)y;
    REG32(0x04000470) = (unsigned int)z;
}

void FUN_0207bb60(char *s, int taper, int lane) {
    Vec3 offset;
    Vec3 target;
    Vec3 diff;
    int matrix[9];
    short trig1_s, trig1_c;
    short trig2_s, trig2_c;
    int k;
    int width;
    int tex;
    int z;
    int neg;
    int amount;
    int x;
    int flip;
    int count;
    int i;

    if (DAT_02108c84 != 0) {
        FUN_02034478(DAT_02108c84, 1);
    }

    offset.x = 0;
    offset.y = 0;
    offset.z = 0;

    if (*(int *)(s + 0x1a4) != -1 && FUN_0204e8bc(&target, *(int *)(s + 0x1a4), *(int *)(s + 0x1a8)) != 0) {
        FUN_02036348(&diff, &target, s + 0x5c);
        trig1_s = 0;
        trig1_c = 0;
        FUN_0204a9bc(FUN_0204a580(), &trig1_s, &trig1_c);
        FUN_0205abac(matrix, trig1_s, trig1_c);
        FUN_0205abe0(matrix, matrix);
        FUN_0204a954(&offset, &offset, matrix, &diff);
    }

    FUN_0205e6b0();
    REG32(0x04000444) = 0;
    G3_Translate(*(int *)(s + 0x5c), *(int *)(s + 0x60), *(int *)(s + 0x64));
    trig2_s = 0;
    trig2_c = 0;
    FUN_0204a9bc(FUN_0204a580(), &trig2_s, &trig2_c);
    FUN_0205eb28(trig2_s, trig2_c);
    REG32(0x04000440) = 3;
    REG32(0x04000454) = 0;
    REG32(0x04000440) = 2;

    FUN_0207be00(0x7fff, 0x7fff, 1);
    FUN_0207be20(0x7fff, 0, 0);
    FUN_0207be40(6, 1, 2, 0, 0, 0, 0, ((unsigned short)*(int *)(s + 0x110)) << 3);
    REG32(0x040004ac) = ((unsigned int)(unsigned short)*(int *)(s + 0x114)) >> 1;
    FUN_0207be7c(1, 0, 1, lane + 10, 24, 0x8000);
    FUN_0207bea0(1);

    flip = (int)FUN_0207b860(DAT_0211c844, 2);
    REG32(0x04000500) = 3;

    count = *(int *)(s + 0x124 + lane * 4);
    if (count > *(int *)(s + 0x11c) + 2) {
        count = *(int *)(s + 0x11c) + 2;
    } else {
        *(int *)(s + 0x124 + lane * 4) = count + 1;
    }

    width = *(short *)(s + 0x11a);
    if (lane == 0 && *(int *)(s + 0x108) >= 0 && *(int *)(s + 0x108) < 3) {
        width = (short)((DAT_020f2aa8[*(int *)(s + 0x108)] << 12) / 10);
    }

    for (i = 0; i < count; i++) {
        short jitter = (short)FUN_0207b860(DAT_0211c844, 0x800);

        if (flip != 0) {
            jitter *= -1;
        }
        k = i;
        if (i == count - 1) {
            k = i - 1;
        }
        amount = (short)(((*(int *)(s + 0x11c) + 2) - i) * taper / (*(int *)(s + 0x11c) + 2));
        x = (short)((offset.x / count) * i);
        z = (short)((offset.z / count) * i);
        tex = k << 17;
        FUN_0207becc(0, tex);
        neg = -k;
        FUN_0207beec((short)(x + (amount + (jitter - width))), (short)(*(short *)(s + 0x118) * neg), (short)z);
        FUN_0207becc(0x20000, tex);
        FUN_0207beec((short)(x + (amount + (jitter + width))), (short)(*(short *)(s + 0x118) * neg), (short)z);
        if (flip == 0) {
            flip = 1;
        } else {
            flip = 0;
        }
    }

    REG32(0x04000504) = 0;
    REG32(0x04000448) = 1;
}
