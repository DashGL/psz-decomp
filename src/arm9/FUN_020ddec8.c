// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x124, exact bytes and relocation targets.
// flags: -O4,p
struct GlobalDdec8 {
    int f0;
    int f4;
    char *f8;
};
extern struct GlobalDdec8 DAT_0211dbd8;
extern int DAT_0211dbe4;
extern const char DAT_02100298[];
extern const char DAT_021002a8[];
extern int FUN_020df248(int, int);
extern int FUN_020ddfec(void);
extern int FUN_020eace4(void *, unsigned int);
extern void FUN_020ead1c(void *);
extern void FUN_020eacb4(unsigned int);

int FUN_020ddec8(void) {
    char *p = DAT_0211dbd8.f8;
    void *(*alloc_fn)(const char *, int) = *(void *(**)(const char *, int))(p + 0x120c);
    void (*free_fn)(const char *, void *, int) = *(void (**)(const char *, void *, int))(p + 0x1210);

    if (FUN_020df248(*(int *)(p + 0x1314), 0) != 1) {
        *(int *)(DAT_0211dbd8.f8 + 0x1008) = 0x4e84;
        return 0xe;
    }
    if (FUN_020ddfec() != 0) {
        return 0xe;
    }
    {
        int code = *(int *)(DAT_0211dbd8.f8 + 0x1008);
        if (code < 0x4e84) {
            if (code == 0x4e22) {
                void *buf = alloc_fn(DAT_02100298, 0x71f);
                if (buf == 0) {
                    *(int *)(DAT_0211dbd8.f8 + 0x1008) = 0x4e84;
                    return 2;
                }
                if (FUN_020eace4(&DAT_0211dbe4, ((unsigned int)buf + 0x1f) & ~0x1fu) != 1) {
                    free_fn(DAT_021002a8, buf, 0);
                    *(int *)(DAT_0211dbd8.f8 + 0x1008) = 0x4e84;
                    return 0xf;
                }
                free_fn(DAT_021002a8, buf, 0);
            }
            return 0x15;
        }
        switch (code) {
        case 0x4e88:
            FUN_020ead1c(&DAT_0211dbe4);
            *(int *)(DAT_0211dbd8.f8 + 0x1008) = 0x4e88;
            return 0x10;
        case 0x4e8c: {
            void *buf = alloc_fn(DAT_02100298, 0x700);
            if (buf == 0) {
                *(int *)(DAT_0211dbd8.f8 + 0x1008) = 0x4e8c;
                return 0x11;
            }
            FUN_020eacb4(((unsigned int)buf + 0x1f) & ~0x1fu);
            free_fn(DAT_021002a8, buf, 0);
            *(int *)(DAT_0211dbd8.f8 + 0x1008) = 0x4e8c;
            return 0x11;
        }
        default:
            return 0x12;
        }
    }
}
