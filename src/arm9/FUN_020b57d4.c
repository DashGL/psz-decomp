// flags: -O4,s
extern short DAT_020ed83c[];
extern int DAT_020f5848[];
extern unsigned char *FUN_0204daa8(int);
extern void FUN_020345f0(int *, void *);
extern void FUN_0205aa80(int *);
extern void FUN_0205abac(int *, int, int);
extern void FUN_0204a954(int *, int *, int *, int *);
extern void FUN_02047ae8(int *);
extern int FUN_0200a3a0(int, int);
extern void *FUN_0204fc0c(int, int *, int *, int);
extern void FUN_0204ff00(void *, int, int, int, int);

void FUN_020b57d4(void *p0, int p1, int *p2, int p3) {
    int sp4[2];
    int sp7c[3];
    int sp70[3];
    int sp4c[9];
    int sp40[3];
    int spc[13];

    unsigned char *r5 = FUN_0204daa8(p1);
    if (r5 != 0) {
        FUN_020345f0(sp7c, r5 + 0x9c);
        sp70[0] = 0;
        sp70[1] = 0;
        sp70[2] = 0x4000;
        unsigned short ang = *(unsigned short *)(r5 + 0xc0);
        FUN_0205aa80(sp4c);
        FUN_0205abac(sp4c, DAT_020ed83c[(ang >> 4) * 2], DAT_020ed83c[(ang >> 4) * 2 + 1]);
        FUN_0204a954(sp40, sp7c, sp4c, sp70);
        FUN_02047ae8(spc);
        spc[0] = p1;
        spc[5] = p2[0];
        spc[6] = p2[2];
        int *arr = sp4;
        arr[0] = DAT_020f5848[11];
        arr[1] = DAT_020f5848[12];
        for (int i = 0; i < 2; i++) {
            spc[3] = i + 8;
            void *obj = FUN_0204fc0c(FUN_0200a3a0(arr[i] << 12, p3), spc, sp40, 0x4000);
            if (obj != 0) {
                FUN_0204ff00(obj, 5, 15, 0x4b << 14, 100);
            }
        }
    }
}
