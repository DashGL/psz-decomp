// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xf0, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern void FUN_02065e30(int);
extern unsigned long long FUN_02067e0c(void);
extern void FUN_02067ebc(void *);
extern void FUN_02067fe8(void *, long long);
extern struct {
    int f0;
    void *f4;
    void *f8;
} DAT_021184e4;

void FUN_02068288(void) {
    unsigned long long now;
    void *r4;
    *(volatile unsigned short *)0x04000106 = 0;
    FUN_02065e30(0x10);
    {
        volatile unsigned int *p = (volatile unsigned int *)0x027e0000;
        p[0xffe] |= 0x10;
    }
    now = FUN_02067e0c();
    r4 = DAT_021184e4.f4;
    if (r4 == 0) {
        return;
    }
    if (now < *(unsigned long long *)((char *)r4 + 0xc)) {
        FUN_02067ebc(r4);
        return;
    }
    {
        void *r1 = *(void **)((char *)r4 + 0x18);
        DAT_021184e4.f4 = r1;
        if (r1 == 0) {
            DAT_021184e4.f8 = 0;
        } else {
            *(void **)((char *)r1 + 0x14) = 0;
        }
    }
    {
        void (*r5)(void *) = *(void (**)(void *))r4;
        if (*(long long *)((char *)r4 + 0x1c) == 0) {
            *(void **)r4 = 0;
        }
        if (r5 != 0) {
            r5(*(void **)((char *)r4 + 4));
        }
        if (*(long long *)((char *)r4 + 0x1c) != 0) {
            *(void (**)(void *))r4 = r5;
            FUN_02067fe8(r4, 0);
        }
    }
    if (DAT_021184e4.f4 != 0) {
        FUN_02067ebc(DAT_021184e4.f4);
    }
}
