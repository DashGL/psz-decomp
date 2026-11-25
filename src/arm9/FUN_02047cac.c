// flags: -O4,s
typedef struct { unsigned int w[3]; } V;
typedef struct { unsigned int w[9]; } M;
typedef struct { unsigned int w[12]; } A;

extern short DAT_020ee83c[];
extern short DAT_020ef83c[];
extern short DAT_020f083c[];
extern short DAT_020f10fc[];
extern M DAT_021057d8;

extern char *FUN_0204daa8(unsigned int);
extern int FUN_0204260c(void *, int, A *, M *);
extern void FUN_02035408(V *, unsigned int, unsigned int, unsigned int);
extern void FUN_0205ab90(M *, int, int);
extern void FUN_0205abac(M *, int, int);
extern void FUN_0205abc8(M *, int, int);
extern void FUN_02047fec(M *);

#pragma thumb off
extern void FUN_020197fc(V *);
extern void FUN_02019784(void);
extern void FUN_0205aa80(M *);
extern void FUN_0205aed0(M *, M *, M *);
#pragma thumb reset

void FUN_02047cac(char *s) {
    char *obj;
    A a;
    M matrix;
    V p, tmp2, p2;
    M saved;
    V tmp;
    M rot0, out0, rot1, out1, rot2, out2, rot3, out3, rot4, out4;
    M rot5, out5, rot6, out6, rot7, out7, rot8, out8, rot9, out9, rot10, out10;

    if (!s || !*(unsigned int *)(s + 48)) return;
    obj = FUN_0204daa8(*(unsigned int *)(s + 232));
    if (obj && *(int *)(s + 72) >= 0) {
        FUN_0204260c(*(void **)(obj + 140), 2, &a, &matrix);
        FUN_02035408(&tmp, a.w[9], a.w[10], a.w[11]);
        *(V *)(s + 92) = tmp;
        p.w[0] = a.w[9];
        p.w[1] = a.w[10];
        p.w[2] = a.w[11];
        FUN_020197fc(&p);
        if (*(unsigned int *)(s + 268) & 1) {
            FUN_0205aa80(&out0);
            FUN_0205aa80(&rot0);
            FUN_0205ab90(&rot0, DAT_020ef83c[0], DAT_020ef83c[1]);
            FUN_0205aed0(&rot0, &DAT_021057d8, &out0);
            FUN_02047fec(&out0);
        }
        if (*(unsigned int *)(s + 268) & 8) {
            FUN_0205aa80(&out1);
            FUN_0205aa80(&rot1);
            FUN_0205ab90(&rot1, DAT_020ee83c[0], DAT_020ee83c[1]);
            FUN_0205aed0(&rot1, &DAT_021057d8, &out1);
            FUN_02047fec(&out1);
        }
        if (*(unsigned int *)(s + 268) & 16) {
            FUN_0205aa80(&out2);
            FUN_0205aa80(&rot2);
            FUN_0205ab90(&rot2, DAT_020f10fc[16], DAT_020f10fc[17]);
            FUN_0205aed0(&rot2, &DAT_021057d8, &out2);
            FUN_02047fec(&out2);
        }
        if (*(unsigned int *)(s + 268) & 32) {
            FUN_0205aa80(&out3);
            FUN_0205aa80(&rot3);
            FUN_0205ab90(&rot3, DAT_020ef83c[0], DAT_020ef83c[1]);
            FUN_0205aed0(&rot3, &DAT_021057d8, &out3);
            FUN_02047fec(&out3);
        }
        if (*(unsigned int *)(s + 268) & 64) {
            FUN_0205aa80(&out4);
            FUN_0205aa80(&rot4);
            FUN_0205ab90(&rot4, DAT_020f083c[0], DAT_020f083c[1]);
            FUN_0205aed0(&rot4, &DAT_021057d8, &out4);
            FUN_02047fec(&out4);
        }
        if (*(unsigned int *)(s + 268) & 128) {
            FUN_0205aa80(&out5);
            FUN_0205aa80(&rot5);
            FUN_0205abac(&rot5, DAT_020ee83c[0], DAT_020ee83c[1]);
            FUN_0205aed0(&rot5, &DAT_021057d8, &out5);
            FUN_02047fec(&out5);
        }
        if (*(unsigned int *)(s + 268) & 256) {
            FUN_0205aa80(&out6);
            FUN_0205aa80(&rot6);
            FUN_0205abac(&rot6, DAT_020ef83c[0], DAT_020ef83c[1]);
            FUN_0205aed0(&rot6, &DAT_021057d8, &out6);
            FUN_02047fec(&out6);
        }
        if (*(unsigned int *)(s + 268) & 512) {
            FUN_0205aa80(&out7);
            FUN_0205aa80(&rot7);
            FUN_0205abac(&rot7, DAT_020f083c[0], DAT_020f083c[1]);
            FUN_0205aed0(&rot7, &DAT_021057d8, &out7);
            FUN_02047fec(&out7);
        }
        if (*(unsigned int *)(s + 268) & 1024) {
            FUN_0205aa80(&out8);
            FUN_0205aa80(&rot8);
            FUN_0205abc8(&rot8, DAT_020ee83c[0], DAT_020ee83c[1]);
            FUN_0205aed0(&rot8, &DAT_021057d8, &out8);
            FUN_02047fec(&out8);
        }
        if (*(unsigned int *)(s + 268) & 2048) {
            FUN_0205aa80(&out9);
            FUN_0205aa80(&rot9);
            FUN_0205abc8(&rot9, DAT_020ef83c[0], DAT_020ef83c[1]);
            FUN_0205aed0(&rot9, &DAT_021057d8, &out9);
            FUN_02047fec(&out9);
        }
        if (*(unsigned int *)(s + 268) & 4096) {
            FUN_0205aa80(&out10);
            FUN_0205aa80(&rot10);
            FUN_0205abc8(&rot10, DAT_020f083c[0], DAT_020f083c[1]);
            FUN_0205aed0(&rot10, &DAT_021057d8, &out10);
            FUN_02047fec(&out10);
        }
        *(M *)(s + 112) = DAT_021057d8;
        FUN_02019784();
    } else {
        tmp2 = *(V *)(s + 92);
        p2.w[0] = tmp2.w[0];
        p2.w[1] = tmp2.w[1];
        p2.w[2] = tmp2.w[2];
        FUN_020197fc(&p2);
        saved = *(M *)(s + 112);
        FUN_02047fec(&saved);
        FUN_02019784();
    }
}
