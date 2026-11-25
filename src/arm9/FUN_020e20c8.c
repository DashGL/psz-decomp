// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x124, exact bytes and relocation targets.
// flags: -O4,p
struct GlobalE20c8 {
    int f0;
    char *f4;
    int f8;
};
extern struct GlobalE20c8 DAT_0211de44;
extern void FUN_020656b8(void *, int, int);
extern int FUN_020dd6b8(void *);
extern void FUN_020dd528(void *, int, void *);
extern int FUN_020dd6a4(void *);
extern int FUN_020dd654(void *);
extern void FUN_020dd5e0(void *);
extern unsigned long long FUN_02067e0c(void);
extern void FUN_020dd224(void *, unsigned int);
extern int FUN_020e0c38(int);
extern void FUN_02065774(const void *, void *, int);
extern void FUN_02003c8c(void *, const void *);
extern int FUN_020e05b8(int, int, int);
extern void FUN_020dd9c4(void *, int);
extern void FUN_020e05ac(void);
extern void FUN_020e05d8(void);

struct Vec12_e20c8 {
    int a, b, c;
};

void FUN_020e20c8(int arg0, int arg1) {
    unsigned char sp_buf[0x48];
    FUN_020656b8(sp_buf, 0, 0x48);
    DAT_0211de44.f8 = arg0;
    DAT_0211de44.f0 = arg1;
    if (FUN_020dd6b8(*(void **)(DAT_0211de44.f4 + 0x1c)) != 0) {
        char *s = DAT_0211de44.f4;
        char *sub = *(char **)(s + 0x1c);
        FUN_020dd528(sub + 0x10, *(int *)(sub + 0x24), s + 0x248);
    } else {
        if (FUN_020dd6a4(DAT_0211de44.f4 + 0x3c) == 0) {
            if (FUN_020dd654(*(char **)(DAT_0211de44.f4 + 0x1c) + 4) != 0) {
                char *s = DAT_0211de44.f4;
                *(struct Vec12_e20c8 *)(s + 0x3c) = *(struct Vec12_e20c8 *)(*(char **)(s + 0x1c) + 4);
            } else {
                FUN_020dd5e0(DAT_0211de44.f4 + 0x3c);
            }
        } else {
            FUN_020dd224(DAT_0211de44.f4 + 0x3c, (unsigned int)((FUN_02067e0c() * 0x5d588b656c078965ULL + 0x269ec3ULL) >> 32));
        }
        {
            char *s = DAT_0211de44.f4;
            FUN_020dd528(s + 0x3c, *(int *)(s + 0xc), s + 0x248);
        }
    }
    {
        int len = FUN_020e0c38(*(int *)(DAT_0211de44.f4 + 0x10));
        FUN_02065774(*(const void **)(DAT_0211de44.f4 + 0x10), sp_buf, len * 2 + 2);
        FUN_02003c8c(sp_buf + 0x34, DAT_0211de44.f4 + 0x251);
        *(void **)(sp_buf + 0x40) = (void *)FUN_020e05ac;
        *(void **)(sp_buf + 0x44) = (void *)FUN_020e05d8;
        {
            int v = FUN_020e05b8(0, 0x1c14, 4);
            *(int *)(DAT_0211de44.f4 + 0x24) = v;
            *(unsigned long long *)(DAT_0211de44.f4 + 0x28) = FUN_02067e0c();
            FUN_020dd9c4(sp_buf, v);
        }
    }
}
