// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xb0, exact bytes and relocation targets.
// Concrete player receiver and callback ABI: notes/sessions/matching-continue-2026-11-12-player-abi.md
//cpp
// flags: -O4,s
struct S17_020ae450 {
    virtual void v0();
    virtual void v4();
    virtual void v8();
    virtual void vc();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual void v1c();
    virtual void v20();
    virtual void v24();
    virtual void v28();
    virtual void v2c();
    virtual void v30();
    virtual void v34();
    virtual void v38();
    virtual void v3c();
    virtual void v40();
    virtual void v44();
    virtual void v48();
    virtual void v4c();
    virtual void v50();
    virtual void v54();
    virtual void v58();
    virtual void v5c();
    virtual void v60();
    virtual void v64();
    virtual void v68();
    virtual void v6c();
    virtual void v70();
    virtual void v74();
    virtual void v78();
    virtual void v7c();
    virtual void v80();
    virtual void v84();
    virtual void v88();
    virtual void v8c();
    virtual void v90();
    virtual void v94();
    virtual void v98();
    virtual void v9c();
    virtual void va0();
    virtual void va4();
    virtual void va8();
    virtual void vac();
    virtual void vb0();
    virtual void vb4();
    virtual void vb8();
    virtual void vbc();
    virtual void vc0();
    virtual int vc4();
};
extern "C" {
extern unsigned char *FUN_020384a4(S17_020ae450 *, int);
extern int FUN_020424b4(int, int);
extern void FUN_0208f09c(S17_020ae450 *, int);

void FUN_020ae450(S17_020ae450 *param_1, int param_2) {
    int p = (int)param_1;
    unsigned char *r6 = FUN_020384a4(param_1, *(int *)(p + 0xd0));
    int val;
    if (r6 == 0) {
        return;
    }
    if (*(int *)(p + 0x8c) == 0) {
        return;
    }
    if (param_1->vc4() != 0) {
        unsigned char st = *(unsigned char *)(p + 0x181);
        if (st == 8 && st == 0xb) {
            return;
        }
    }
    val = FUN_020424b4(*(int *)(p + 0x8c), 0);
    if ((r6[4] << 12) <= val && val <= (r6[5] << 12)) {
        *(unsigned int *)(p + 0xf8) &= ~0x80u;
        *(int *)(p + 0xd4) = *(int *)(p + 0xd8);
        switch (param_2) {
        case 1:
            FUN_0208f09c(param_1, 0);
            break;
        case 2:
            FUN_0208f09c(param_1, 1);
            break;
        case 0x800:
            FUN_0208f09c(param_1, 2);
            break;
        }
    } else {
        *(unsigned short *)(p + 0x290) = 0;
    }
}
}
