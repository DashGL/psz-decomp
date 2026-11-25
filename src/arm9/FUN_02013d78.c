// flags: -O4,p -noThumb
struct Elem {
    int f0, f4, f8, fc, f10, f14;
};
struct State {
    int f0, f4, f8, fc;
};
struct D {
    int f0, f4, f8, fc, f10, f14, f18, f1c;
};
extern struct State DAT_02104754;
extern struct Elem DAT_021048e4[];
extern struct D DAT_020f66d4;

void FUN_02013d78(int a, int b, int c) {
    int r0 = DAT_02104754.f8;
    int r1 = *(int *)(r0 + 0x74);
    void *r5;
    if (*(int *)(r1 + 0x44) == 0) {
        return;
    }
    if (DAT_02104754.f4 != 0) {
        DAT_020f66d4.f18 = DAT_021048e4[DAT_02104754.fc].f10;
        DAT_020f66d4.f1c = DAT_021048e4[DAT_02104754.fc].f14;
        r5 = &DAT_020f66d4.f8;
    } else {
        r5 = &DAT_021048e4[DAT_02104754.fc];
    }
    (*(void (**)(int, int, int, int, void *))(r1 + 0x44))(r0, r1, b, c, r5);
}
