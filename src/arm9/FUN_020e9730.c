// flags: -O4,p
struct Node {
    int f0;
    void *f4;
    int f8;
    struct Node *fc;
};

struct G {
    struct Node *f0;
    int f4;
};

extern struct G DAT_0211e5dc;
extern struct Node *data_0211e5dc;
extern void *FUN_020e05ac(int, int);
extern void FUN_020e05d8(int, void *, int);
extern void FUN_02065774(void *, void *, int);

int FUN_020e9730(int r6, void *r7, int r5) {
    struct Node **r4 = &data_0211e5dc;
    if (DAT_0211e5dc.f4 + r5 > 0x8000) {
        return 0;
    }
    if (DAT_0211e5dc.f0 != 0) {
        struct Node *cur = DAT_0211e5dc.f0;
        do {
            r4 = &cur->fc;
            cur = cur->fc;
        } while (cur != 0);
    }
    *r4 = (struct Node *)FUN_020e05ac(4, 0x10);
    if (*r4 == 0) {
        return 0;
    }
    (*r4)->f4 = FUN_020e05ac(4, r5);
    if ((*r4)->f4 == 0) {
        FUN_020e05d8(4, *r4, 0x10);
        *r4 = 0;
        return 0;
    }
    (*r4)->f0 = r6;
    (*r4)->f8 = r5;
    (*r4)->fc = 0;
    FUN_02065774(r7, (*r4)->f4, r5);
    DAT_0211e5dc.f4 += r5;
    return 1;
}
