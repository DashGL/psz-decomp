// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xe0, exact bytes and relocation targets.
// Concrete actor resolver and callback ABI: notes/sessions/matching-continue-2026-11-12-resolver-abi.md
//cpp
// flags: -O4,s
extern "C" {
extern int FUN_020855bc(int);
extern void *FUN_0208555c(int);
extern int FUN_0203b820(void *);
extern int FUN_0203b844(void *);
extern void FUN_0208deb4(void *);
extern void FUN_0208dd10(void *, int, void *, int, int);
extern void FUN_0208dec0(void *);
extern void *DAT_02108d08;

struct SubObjB1d10_020b1d10 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual int v3(void *);
};

void FUN_020b1d10(void *a0, int a1, int a2) {
    if (FUN_020855bc(a1) == 1 || FUN_020855bc(a1) == 3) {
        void *r6 = FUN_0208555c(a1);
        if (r6 != 0) {
            void *r4 = 0;
            if (DAT_02108d08 != 0) {
                r4 = *(void **)((char *)DAT_02108d08 + 0x4c0);
            }
            if (r4 != 0) {
                struct {
                    int f0;
                    int f4;
                    int f8;
                    int fc;
                } sp0c;
                int r5;
                if (((SubObjB1d10_020b1d10 *)((char *)r6 + 0x20))->v3(&sp0c) == 1) {
                    r5 = *(unsigned char *)((char *)r4 + 0x6a) * 0x1e + (*(unsigned char *)((char *)r4 + 0x6b) * (((sp0c.f4 & (0x7f << 25)) >> 25) & 0x7f) * 0x1e) / 100;
                } else {
                    r5 = *(unsigned char *)((char *)r4 + 0x6a) * 0x1e;
                }
                {
                    int v = FUN_0203b820(r6);
                    if (v > 0 && v <= 4) {
                        struct {
                            int vtbl;
                            unsigned char b[4];
                        } sp04;
                        int idx = v - 1;
                        sp04.b[0] = *((unsigned char *)r4 + idx + 0x6c);
                        sp04.b[1] = *((unsigned char *)r4 + idx + 0x70);
                        sp04.b[2] = *((unsigned char *)r4 + idx + 0x74);
                        sp04.b[3] = *((unsigned char *)r4 + idx + 0x78);
                        FUN_0208deb4(&sp04);
                        FUN_0208dd10(&sp04, FUN_0203b844(r6), sp04.b, r5, a2);
                        FUN_0208dec0(&sp04);
                    }
                }
            }
        }
    }
}
}
