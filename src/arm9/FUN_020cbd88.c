// Verified 2026-11-13: full344-byte body, pinned2.0/sp2p3, exactbytes andeveryrelocation; restoredconsumedarguments.
// flags: -O4,p
struct S_cbd88_node {
    int f0;
    int f4;
    int f8;
    int fc;
    int f10;
    int f14;
    int f18;
    int f1c;
};
struct S_cbd88 {
    unsigned char *f0;
};
extern int FUN_020c9344(unsigned char **);
extern void FUN_020d1b74(struct S_cbd88 *, const void *);
extern void FUN_020d183c(void *, const char *, int);
extern void FUN_020c77f0(void *);
extern unsigned char *FUN_020c7bcc(int);
extern void FUN_02001540(void *, int, int);
extern int FUN_020ce6f4(struct S_cbd88 *, int, void *, struct S_cbd88_node **, int, int, int);
extern int FUN_020cbb28(struct S_cbd88 *, struct S_cbd88_node *);
extern void FUN_020ce474(struct S_cbd88 *, struct S_cbd88_node *);
extern void FUN_020ccaa0(struct S_cbd88 *, int);
extern int FUN_020c979c(struct S_cbd88 *, int);
extern const char DAT_020fd78c[];
extern const char DAT_020fd7a0[];

int FUN_020cbd88(struct S_cbd88 *p0, const char *p1, const char *p2, const char *p3,
                 const char *p4, const char *p5, const char *p6, const char *p7,
                 int p8, int p9, int p10, int p11, int p12) {
    struct S_cbd88_node *node;
    int result;
    unsigned char *r4 = p0->f0;
    if (*(int *)(r4 + 0x1f4) == 4 && (result = FUN_020c9344((unsigned char **)p0)) != 0) {
        return result;
    }
    if (*(int *)(r4 + 0x1f4) != 0) {
        FUN_020d1b74(p0, DAT_020fd78c);
        return 2;
    }
    *(int *)(r4 + 0x10c) = 1;
    FUN_020d183c(r4 + 0x110, p1, 0x1f);
    FUN_020d183c(r4 + 0x12f, p2, 0x15);
    FUN_020d183c(r4 + 0x144, p3, 0x33);
    FUN_020d183c(r4 + 0x177, p4, 0x1f);
    FUN_020c77f0(r4 + 0x144);
    r4 = FUN_020c7bcc(0x308);
    if (r4 == 0) {
        FUN_020d1b74(p0, DAT_020fd7a0);
        return 1;
    }
    FUN_02001540(r4, 0, 0x308);
    *(int *)(r4 + 0x304) = p9;
    if (p5[0] != 0 && p6[0] != 0) {
        FUN_020d183c(r4 + 0xc2, p5, 0x100);
        FUN_020d183c(r4 + 0x1c2, p6, 0x100);
    }
    if (p7 != 0) {
        FUN_020d183c(r4 + 0x2c2, p7, 0x41);
    }
    if ((result = FUN_020ce6f4(p0, 0, r4, &node, p10, p11, p12)) == 0) {
        int id = FUN_020cbb28(p0, node);
        if (id != 0) {
            node->f1c = id;
            FUN_020ce474(p0, node);
            FUN_020ccaa0(p0, 0);
            return id;
        }
        if (node->f8 != 0) {
            if ((result = FUN_020c979c(p0, node->f18)) != 0) {
                return result;
            }
        }
        return 0;
    }
    return result;
}
