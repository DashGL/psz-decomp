// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x114, exact bytes and relocation targets.
// flags: -O4,s -noThumb
typedef int (*Cb1_020139f4)(void *, void *, void *);
typedef void (*Cb2_020139f4)(void *, void *, void *, void *);
struct Entry_020139f4 {
    int f0, f4, f8, fc, f10, f14;
};
struct Dest_020139f4 {
    int f0, f4, f8, fc, f10, f14, f18, f1c;
};
extern int DAT_02104754[];
extern struct Entry_020139f4 DAT_021048e4[];
extern struct Dest_020139f4 DAT_020f66d4;
extern int DAT_020f66dc[];

void FUN_020139f4(int *arg0, void *arg1) {
    int *sub = *(int **)(DAT_02104754[2] + 0x74);
    if (sub[0xd] != 0) {
        void *p1;
        if (DAT_02104754[1] == 0) {
            p1 = &DAT_021048e4[DAT_02104754[3]];
        } else {
            int idx = DAT_02104754[3];
            DAT_020f66d4.f18 = DAT_021048e4[idx].f10;
            DAT_020f66d4.f1c = DAT_021048e4[idx].f14;
            p1 = &DAT_020f66d4.f8;
        }
        if (((Cb1_020139f4)sub[0xd])(arg1, p1, sub) == 0) {
            arg0[0xc] = 0;
            return;
        }
        arg0[0xc] = 1;
    }
    if (sub[0xe] != 0) {
        void *p3;
        if (DAT_02104754[1] == 0) {
            p3 = &DAT_021048e4[DAT_02104754[3]];
        } else {
            int idx = DAT_02104754[3];
            DAT_020f66d4.f18 = DAT_021048e4[idx].f10;
            DAT_020f66d4.f1c = DAT_021048e4[idx].f14;
            p3 = &DAT_020f66d4.f8;
        }
        ((Cb2_020139f4)sub[0xe])((void *)DAT_02104754[2], sub, arg1, p3);
    }
}
