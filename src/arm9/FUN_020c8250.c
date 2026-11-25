// flags: -O4,p
struct S25_key {
    unsigned char b[16];
};
struct S25_entry {
    int f0;
    short f4;
    short f6;
    int f8;
    struct S25_key key;
    int tail[11];
};
struct S25_mgr {
    int f0;
    int f4;
    int f8;
    int fc;
    int f10;
    int f14;
    int f18;
    int f1c;
    void (*f20)(int, unsigned short, int, const char *, int, int);
    int f24;
    int f28;
    int f2c;
};
extern struct S25_mgr *FUN_020c7e54(void);
extern void FUN_020c6e28(int, void *);
extern int FUN_020c6f30(int, void *, void *, int, int);
extern void FUN_020c7e68(void);
extern void FUN_020c7ef4(void);
extern void FUN_020c7fb0(void);
extern void FUN_020c8100(void);
extern void FUN_020c8174(void);
extern void FUN_020d34fc(int, void *);
extern void FUN_020d3504(int, int, int);
extern int FUN_020c6e0c(int);
extern void FUN_020c6eb8(int, int);

void FUN_020c8250(int param_1, int param_2, int param_3, unsigned short param_4, int param_5, const char *param_6, int param_7) {
    struct S25_mgr *r4 = FUN_020c7e54();
    struct S25_entry entry;
    void *cbs[4];
    if (param_7 >= 0x10) {
        struct S25_key *dst = (struct S25_key *)(volatile unsigned int)&entry.key;
        const struct S25_key *src = (const struct S25_key *)(volatile unsigned int)param_6;
        *dst = *src;
        entry.f0 = param_3;
        entry.f4 = (short)param_4;
        entry.f8 = param_2;
        FUN_020c6e28(r4->f4, &entry);
        if (FUN_020c6f30(r4->f8, &entry.key, FUN_020c7e68, 0, 0) != -1) {
            cbs[2] = FUN_020c7ef4;
            cbs[0] = FUN_020c7fb0;
            cbs[3] = FUN_020c8100;
            cbs[1] = FUN_020c8174;
            FUN_020d34fc(entry.f8, cbs);
            return;
        }
    }
    if (r4->f20 != 0) {
        r4->f20(param_3, param_4, param_5, param_6, param_7, r4->f2c);
        return;
    }
    FUN_020d3504(param_2, 0, 0);
    FUN_020c6eb8(r4->f4, FUN_020c6e0c(r4->f4) - 1);
}
