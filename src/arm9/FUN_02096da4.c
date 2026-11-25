// flags: -O4,s
enum { E0 = 0, E1 = 1 };
typedef struct { unsigned char b[2]; } Pair2;
extern unsigned char UNK_020f4510[];
extern void FUN_020866b4(int, void *), FUN_02097998(void *), FUN_02098e68(void *), FUN_02097088(void *);
extern int FUN_02097078(void *), FUN_020970c4(void *), FUN_02097114(void *), FUN_02097620(void *), FUN_02097200(void *, int *), FUN_02097160(void *, int *), FUN_0209757c(void *, void *), FUN_02097444(void *), FUN_020974c4(void *), FUN_02097820(void *);
extern void FUN_0209794c(void *, int), FUN_02097320(int *, void *, void *), FUN_0209785c(void *, void *), FUN_02096c64(void *), FUN_020972d4(void *, void *, int), FUN_020971dc(void *, void *), FUN_02098214(void *, int, int), FUN_02096c84(void *, void *);
extern int FUN_02097960(void *, short, int, int);
#define I(o) (*(int *)(self + (o)))
#define H(o) (*(short *)(self + (o)))
#define P(o) (*(void **)(self + (o)))
void FUN_02096da4(char *self) {
    int selected, limit0, limit1, limit2, limit3, delay, pair;
    short descriptor0[6], descriptor1[6];
    Pair2 copy, bytes;
    FUN_020866b4(*(int *)P(8), self + 0x40);
    FUN_02097998(self);
    if (P(0x3c) == 0) goto out;
    FUN_02098e68(P(0x3c));
    if (FUN_02097078(self) == 0) return;
    selected = 0;
    if (FUN_020970c4(self)) goto finish;
    if (FUN_02097114(self) && FUN_02097620(self)) {
        if ((H(0x24) == 0 ? E1 : E0) != E0) {
            FUN_0209794c(self, I(0x28));
            FUN_02097320(&limit0, self, self + 0x26);
            if (FUN_02097200(self, &limit0)) goto finish;
            FUN_0209785c(self, self + 0x26);
            FUN_02096c64(self + 0x24);
            goto finish;
        }
        FUN_020972d4(self, descriptor0, H(0x26));
        FUN_0209794c(self, I(0x28));
        FUN_02097320(&limit1, self, descriptor0 + 2);
        if (FUN_02097200(self, &limit1)) goto finish;
        FUN_020971dc(self, descriptor0 + 2);
        FUN_02098214(P(4), I(0), H(0x26));
        FUN_0209785c(self, descriptor0 + 2);
        FUN_02096c64(self + 0x24);
        goto finish;
    }
    if (FUN_02097160(self, &selected)) {
        FUN_020972d4(self, descriptor1, selected);
        delay = FUN_0209757c(self, descriptor1);
        if (delay <= 0) {
            FUN_02097320(&limit2, self, descriptor1 + 2);
            if (FUN_02097200(self, &limit2)) goto finish;
            FUN_020971dc(self, descriptor1 + 2);
            FUN_02098214(P(4), I(0), selected);
            FUN_0209785c(self, descriptor1 + 2);
        } else {
            FUN_02097960(self, (short)selected, I(0xc), delay);
            FUN_02098214(P(4), I(0), selected);
            FUN_0209785c(self, UNK_020f4510);
        }
        goto finish;
    }
    if ((I(0x34) != 0 ? E1 : E0) != E0 || FUN_02097444(self)) goto finish;
    if (FUN_020974c4(self) && FUN_02097620(self)) {
        if (*(signed char *)(self + 0x20) == 0) {
            pair = FUN_02097820(self);
            bytes.b[0] = pair;
            bytes.b[1] = (unsigned int)pair >> 8;
            copy = bytes;
            FUN_02096c84(self + 0x20, &copy);
        }
        FUN_02097320(&limit3, self, self + 0x20);
        if (FUN_02097200(self, &limit3)) goto finish;
        FUN_0209785c(self, self + 0x20);
        FUN_02096c84(self + 0x20, UNK_020f4510);
    } else {
        I(0x34) = 5;
        I(0x38) = 0;
    }
finish:
    FUN_02097088(self);
out: ;
}
