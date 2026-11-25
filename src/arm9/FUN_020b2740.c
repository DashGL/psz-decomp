// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xac, exact bytes and relocation targets.
// flags: -O4,s
struct MgrB2740 {
    void *f0;
    unsigned char *f4;
    unsigned int f8;
    unsigned int fc;
};

struct NodeB2740 {
    int f0;
    int f4;
    int f8;
};

extern int FUN_020b2630(void *, int);
extern struct NodeB2740 *FUN_020b23d4(void *, int);
extern int FUN_02083308(struct NodeB2740 *, int);
extern int FUN_020b2978(struct MgrB2740 *, struct NodeB2740 *, struct NodeB2740 *);
extern int FUN_020834c0(int);
extern void FUN_020b2868(struct MgrB2740 *, void *, struct NodeB2740 *, int);
extern void *FUN_020b245c(void *, void *);
extern void *FUN_020b27ec(struct MgrB2740 *, struct NodeB2740 *, int, void *);
extern void FUN_020b2920(struct MgrB2740 *, void *, void *);
extern int FUN_020b257c(void *, int, void *);

int FUN_020b2740(struct MgrB2740 *p0) {
    unsigned char buf[0x60];
    int i = 0;
    int count = *(int *)(p0->f4 + 0x50);
    for (; i < count; i++) {
        struct NodeB2740 *n;
        int id;
        int idx;
        if (p0->fc >= p0->f8) {
            return 0;
        }
        n = FUN_020b23d4(p0->f0, FUN_020b2630(p0->f4, i));
        if (n == 0) {
            return 0;
        }
        id = n->f8;
        idx = FUN_02083308(n, id);
        if (idx >= 0) {
            struct NodeB2740 *n2 = FUN_020b23d4(p0->f0, idx);
            if (n2 != 0 && FUN_020b2978(p0, n, n2) != 0) {
                int v7 = FUN_020834c0(id);
                void *v3;
                FUN_020b2868(p0, buf, n2, v7);
                v3 = FUN_020b245c(buf, p0->f0);
                if (v3 != 0) {
                    void *v2 = FUN_020b27ec(p0, n2, v7, v3);
                    if (v2 != 0) {
                        FUN_020b2920(p0, buf, v2);
                    }
                }
            }
        }
        if (FUN_020b257c(p0->f4, i, p0->f0) == 0) {
            return 0;
        }
    }
    return 1;
}
