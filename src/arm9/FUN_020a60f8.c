// flags: -O4,s
extern void *FUN_020a49e4(void *, void *);
extern void FUN_02071d0c(void *);
#pragma thumb off
extern void FUN_0200c938(void *, int);
#pragma thumb on
extern void *FUN_02096488(void), *FUN_020c1fc8(void), *FUN_020ba894(unsigned int);
extern int FUN_020967a4(void *), FUN_020c2438(void *, void *, void *, int);
extern void FUN_020c2ad4(void *, void *, int, int, int);
extern void FUN_020a6020(void *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
extern void *FUN_020c3564(void *), *FUN_0208f068(void), *FUN_020a5240(void);
extern void FUN_020c35ac(void *, int), FUN_020c35d4(void *, void *), FUN_020c38f0(void *, int);
extern int FUN_0208ef48(void *, void *, int), FUN_02084be4(void *), FUN_020a5fdc(void);
extern void FUN_020a4c3c(void *, void *, int), FUN_020a65d8(void *), FUN_020a73a0(void *, int);
extern void *FUN_020a52d4(void *), *FUN_020aff4c(void *, int);
extern void FUN_02080d20(void *, void *), FUN_020a7490(void *, void *), FUN_020a52dc(void *), FUN_020affc0(void *, unsigned int);
extern void *FUN_0208bcf0(void);
extern void FUN_020c32b4(void *, int), FUN_020a4f28(void *);
extern char DAT_020fc1e8[], DAT_020fc204[], DAT_020fc2e0[], DAT_020fc2fc[], DAT_020fc31c[], DAT_020fc338[];
extern char DAT_020f4f48[], DAT_020f5010[], DAT_020f4e80[], DAT_020fc238[], DAT_020fc218[], DAT_0211a51c[];
extern unsigned char DAT_0211a994[];
extern signed char DAT_020fc1dc[];
struct Desc { int d[8]; };
extern struct Desc DAT_020f4e60;
extern char DAT_020a7479[];
#define W(n) (*(int *)(self + (n)))
#define P(n) (*(void **)(self + (n)))

void *FUN_020a60f8(unsigned char *self, void *parent, int mode)
{
    int row, col, index, i;
    void *object, *source, *panel;
    FUN_020a49e4(self, parent);
    P(0) = DAT_020fc1e8;
    P(32) = DAT_020fc204;
    W(244) = mode; W(248) = -1; W(252) = 0;
    W(304) = 0; W(308) = 0; W(312) = 1; W(316) = 0;
    W(320) = 0; W(324) = -1; W(328) = 0;
    FUN_02071d0c(self + 332);
    FUN_0200c938(self + 348, 8);
    *(void **)(DAT_0211a994 + 4) = self;
    for (i = 0; i < 2; ++i) *(int *)((self + 4 * i) + 348) = -1;
    if (W(244) == 2 && FUN_020967a4(FUN_02096488()) > 0) W(244) = 3;
    FUN_020c2ad4(self + 32, DAT_020fc2e0, 7, 3, 5);
    W(56) = FUN_020c2438(FUN_020c1fc8(), DAT_020fc2fc, DAT_020fc31c, 2);
    for (row = 0; row < 3; ++row)
        for (col = 0; col < 2; ++col) {
            index = row * 2 + col;
            FUN_020a6020(self + 256 + index * 8, 108 + col * 64, 36 + row * 48, 0,
                         0, 0, 0, 0xc0000000U, 0, (29 * 4096 + (index * 4096) / 2) / 128, 0, 0);
        }
    object = FUN_020ba894(60);
    if (object) object = FUN_020c3564(object);
    P(320) = object;
    if (P(320)) {
        struct Desc descriptor;
        FUN_020c35ac(P(320), 1);
        descriptor = DAT_020f4e60;
        FUN_020c35d4(P(320), &descriptor);
        FUN_020c38f0(P(320), 0);
        object = FUN_0208f068();
        if (object) W(324) = FUN_0208ef48(object, DAT_020fc338, 12);
    }
    switch ((unsigned int)W(244)) {
    case 0:
        FUN_020a4c3c(self, DAT_020f4f48, 10);
        i = DAT_0211a994[1];
        panel = FUN_020a5240();
        *(int *)((char *)panel + 24) = i;
        *(int *)((char *)panel + 28) = 1;
        break;
    case 1:
        FUN_020a65d8(self);
        FUN_020a4c3c(self, DAT_020f5010, 10);
        FUN_020a73a0(self, 1);
        break;
    case 2: case 3:
        W(312) = FUN_02084be4(DAT_0211a51c) != 1;
        FUN_020a65d8(self);
        if (!W(312)) FUN_020a4c3c(self, DAT_020f4e80, 10);
        else {
            if (W(244) == 3) DAT_020fc238[20] = 5;
            else DAT_020fc238[20] = 2;
            FUN_020a4c3c(self, DAT_020fc218, 10);
            if (DAT_020fc1dc[0] >= 0 && P(252)) {
                if (FUN_020a5fdc()) {
                    source = FUN_020a52d4(self);
                    i = DAT_020fc1dc[1];
                    if (i >= 0) {
                        FUN_02080d20(FUN_020aff4c(P(252), i), source);
                        FUN_020a7490(self, DAT_020a7479);
                    }
                    FUN_020a52dc(self);
                }
                FUN_020affc0(P(252), DAT_020fc1dc[0]);
            }
        }
        if (DAT_020fc1dc[0] < 0 && P(252)) {
            if (W(244) == 2) FUN_020affc0(P(252), DAT_0211a994[2]);
            else if (W(244) == 3) FUN_020affc0(P(252), DAT_0211a994[0]);
        }
        break;
    }
    DAT_020fc1dc[1] = -1;
    DAT_020fc1dc[0] = -1;
    W(240) = W(312);
    FUN_0208bcf0();
    FUN_020c32b4(self + 332, W(248));
    FUN_020a4f28(self);
    return self;
}
