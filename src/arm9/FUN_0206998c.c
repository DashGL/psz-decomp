// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0xd4, exact bytes and relocation targets.
// Full212-byte ARM initializer; consumed buffer argument restored from ROM register flow.
// Evidence: notes/reference/resume2-root-20261112/FUN_0206998c-init-argument-correction.json
// flags: -O2,p -noThumb

struct Node6998C {
    struct Node6998C *next;
    int f4;
    int f8;
    int fc;
    int f10;
    int f14;
};

struct State6998C {
    struct Node6998C *free_head;
    int f4;
    int f8;
    int fc;
    struct Node6998C *free_tail;
    int f14;
    int f18;
    int f1c;
    int f20;
    unsigned char pad24[0x60 - 0x24];
    unsigned char buf60[0x2e0 - 0x60];
    struct Node6998C nodes[256];
};

extern struct State6998C DAT_02118600;
extern int DAT_0211a140;
extern void FUN_02069f8c(void);
extern void FUN_0206a238(void *);
extern struct Node6998C *FUN_02069b70(int);
extern void FUN_02069bf8(struct Node6998C *);
extern void FUN_02069c30(int);

void FUN_0206998c(void) {
    int i;
    struct Node6998C *n;

    FUN_02069f8c();
    DAT_02118600.free_head = &DAT_02118600.nodes[0];
    for (i = 0; i < 0xff; i++) {
        DAT_02118600.nodes[i].next = &DAT_02118600.nodes[i + 1];
    }
    DAT_02118600.nodes[0xff].next = 0;
    DAT_02118600.free_tail = &DAT_02118600.nodes[0xff];
    DAT_02118600.f8 = 0;
    DAT_02118600.fc = 0;
    DAT_02118600.f1c = 0;
    DAT_02118600.f14 = 0;
    DAT_02118600.f18 = 0;
    DAT_02118600.f20 = 1;
    DAT_02118600.f4 = 0;
    DAT_0211a140 = (int)DAT_02118600.buf60;
    FUN_0206a238(DAT_02118600.buf60);
    n = FUN_02069b70(1);
    if (n != 0) {
        n->f4 = 0x1d;
        n->f8 = DAT_0211a140;
        FUN_02069bf8(n);
        FUN_02069c30(1);
    }
}
