// flags: -O4,p -noThumb
struct S1441C_Inner {
    unsigned int pad[29];
    unsigned int f74;
    unsigned int f78;
    unsigned int f7c;
};
struct S1441C {
    unsigned int f0;
    unsigned int f4;
    struct S1441C_Inner *f8;
};
extern struct S1441C DAT_02104754;
extern void FUN_02016a00(void);

void FUN_0201441c(void) {
    unsigned int flags;
    struct S1441C_Inner *p;
    *(volatile unsigned int *)0x04000448 = 1;
    p = DAT_02104754.f8;
    flags = p->f7c;
    if (flags != 0) {
        if (flags & 1) {
            DAT_02104754.f4 = 0;
        }
        if (flags & 2) {
            p->f74 = 0;
            FUN_02016a00();
        }
        DAT_02104754.f8->f7c = 0;
    }
    DAT_02104754.f8 = 0;
}
