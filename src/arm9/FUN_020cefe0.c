// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x9c, exact bytes and relocation targets.
// flags: -O4,p
struct Elem {
    int f0;
    char pad[0xc];
    int f10;
    int f14;
};

struct Node {
    char pad[0x10];
    int f10;
    char pad2[0x28];
    void *f3c;
    char pad3[0xc];
    struct Node *f4c;
};

struct S {
    char *f0;
};

extern char DAT_020fdf30[];
extern char DAT_020fdf34[];
extern char DAT_020fde6c[];
extern void FUN_02000edc(char *, char *, char *, int);
extern int FUN_020c6e0c(void *);
extern struct Elem *FUN_020c6e10(void *, int);
extern void FUN_020ca8dc(struct S *, int, int, int);
extern void FUN_020c6eec(void *, int);
extern void FUN_020cefb0(struct S *, struct Node *);

void FUN_020cefe0(struct S *r5, struct Node *r4) {
    char *r2 = r5->f0;
    if (r4 == 0) {
        return;
    }
    struct Node *r1 = *(struct Node **)(r2 + 0x5d4);
    if (r1 == 0) {
        return;
    }
    if (r1 == r4) {
        *(struct Node **)(r2 + 0x5d4) = r4->f4c;
    } else {
        struct Node *r0 = r1->f4c;
        while (r0 != r4) {
            if (r0 == 0) {
                FUN_02000edc(DAT_020fdf30, DAT_020fdf34, DAT_020fde6c, 0x299);
                return;
            }
            r1 = r0;
            r0 = r0->f4c;
        }
        r1->f4c = r4->f4c;
    }
    if (FUN_020c6e0c(r4->f3c) != 0) {
        int zero = 0;
        do {
            struct Elem *e = FUN_020c6e10(r4->f3c, zero);
            if (e->f10 < 100) {
                FUN_020ca8dc(r5, r4->f10, e->f10, e->f0 + e->f14);
            }
            FUN_020c6eec(r4->f3c, 0);
        } while (FUN_020c6e0c(r4->f3c) != 0);
    }
    FUN_020cefb0(r5, r4);
}
