// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xb8, exact bytes and relocation targets.
//cpp
// flags: -O4,s
struct S18_v_020b1504 {
    virtual void v0();
    virtual void v4();
    virtual void v8();
    virtual void vc();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual void v1c();
    virtual void v20(int);
};
extern "C" {
extern int DAT_02108c84;
extern void FUN_020b15bc(int);
extern void FUN_020b179c(int);
extern void FUN_020b18c0(int);
extern void FUN_020b1ac8(int);
extern int FUN_0208546c(void);
extern int FUN_0200a3a0(int, int);

void FUN_020b1504(int param_1) {
    switch (*(short *)(param_1 + 0x5c)) {
    case 1:
        FUN_020b15bc(param_1);
        break;
    case 2:
        FUN_020b179c(param_1);
        break;
    case 3:
        FUN_020b18c0(param_1);
        break;
    case 4:
        FUN_020b1ac8(param_1);
        break;
    }
    if (*(int *)(param_1 + 0x2c) == FUN_0208546c()) {
        unsigned short r1 = *(unsigned short *)(param_1 + 0x76);
        if (r1 != 0) {
            unsigned short r5 = *(unsigned short *)(param_1 + 0x7a);
            unsigned short r6 = *(unsigned short *)(param_1 + 0x74);
            if (r6 > r5 - 0xf) {
                int r2 = DAT_02108c84;
                if (r2 != 0) {
                    S18_v_020b1504 *r7 = *(S18_v_020b1504 **)(r2 + (*(int *)(r2 + 0x64) << 2) + 0x40);
                    if (r7 != 0) {
                        short st = *(short *)(param_1 + 0x5c);
                        int target;
                        int step;
                        int val;
                        if (st == 3) {
                            target = 0x7800;
                        } else if (st == 1) {
                            target = 0xc000;
                        } else {
                            target = 0x8000;
                        }
                        step = FUN_0200a3a0(target - 0x5000, r1);
                        val = (r5 - r6) * step + 0x5000;
                        if (val < 0x5000) {
                            val = 0x5000;
                        }
                        r7->v20(val);
                    }
                }
            }
        }
    }
}
}
