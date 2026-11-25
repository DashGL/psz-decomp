// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xac, exact bytes and relocation targets.
// flags: -O4,p
struct S24_key {
    unsigned char b[16];
};
struct S24_q {
    int pad[4];
    struct S24_key key;
    int tail[7];
};
struct S24_item {
    int pad[10];
    void (*f28)(int, int, const char *, int, int, int);
    int f2c;
    int f30;
    int f34;
    int f38;
};
struct S24_mgr {
    int f0;
    int f4;
    int f8;
    int fc;
    int f10;
    int f14;
    int f18;
    void (*f1c)(int, int, const char *, int, int, int);
    int f20;
    int f24;
    int f28;
    int f2c;
};

extern struct S24_mgr *FUN_020c7e54(void);
extern int FUN_020c6f30(int, struct S24_q *, void *, int, int);
extern void FUN_020c7e74(void);
extern struct S24_item *FUN_020c6e10(int, int);
extern int FUN_020d3730(int);
extern int FUN_020d3734(int);

static inline void copy_key(const struct S24_key *src, struct S24_key *dst) {
    *dst = *src;
}

void FUN_020c8174(int param_1, const char *param_2, int param_3, int param_4) {
    struct S24_mgr *r4 = FUN_020c7e54();
    struct S24_q q;
    if (param_3 >= 0x10) {
        int idx;
        const struct S24_key *src = (const struct S24_key *)(volatile unsigned int)param_2;
        struct S24_key *dst = (struct S24_key *)(volatile unsigned int)&q.key;
        *dst = *src;
        idx = FUN_020c6f30(r4->f8, &q, FUN_020c7e74, 0, 0);
        if (idx != -1) {
            struct S24_item *r7 = FUN_020c6e10(r4->f8, idx);
            if (r7->f28 != 0) {
                int a0 = FUN_020d3730(param_1);
                int a1 = FUN_020d3734(param_1);
                param_3 -= 0x10;
                param_2 += 0x10;
                r7->f28(a0, a1, param_2, param_3, param_4, r7->f38);
                return;
            }
        }
    }
    if (r4->f1c != 0) {
        int a0 = FUN_020d3730(param_1);
        int a1 = FUN_020d3734(param_1);
        r4->f1c(a0, a1, param_2, param_3, param_4, r4->f2c);
    }
}
