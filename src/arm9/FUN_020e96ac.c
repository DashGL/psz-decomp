// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x84, exact bytes and relocation targets.
// flags: -O4,p
struct Node {
    int f0;
    int f4;
    int f8;
    struct Node *fc;
};
struct Head {
    struct Node *head;
    int total;
};
extern struct Head DAT_0211e5dc;
extern void FUN_020e05d8(int, void *, int);

int FUN_020e96ac(int (*a)(int, int, int, int)) {
    struct Node *cur = DAT_0211e5dc.head;
    struct Node *n;
    while (cur != 0) {
        int i = 0;
        for (; i < 3; i++) {
            if (a(cur->f0, cur->f4, cur->f8, 1) == 0) {
                DAT_0211e5dc.total -= cur->f8;
                FUN_020e05d8(4, (void *)cur->f4, cur->f8);
                cur->f4 = 0;
                cur->f8 = 0;
                cur->f0 = 0;
                break;
            }
        }
        if (i == 3) {
            break;
        }
        cur = cur->fc;
    }
    n = DAT_0211e5dc.head;
    while (n != 0) {
        if (n->f4 != 0) {
            break;
        }
        DAT_0211e5dc.head = n->fc;
        FUN_020e05d8(4, n, 0);
        n = DAT_0211e5dc.head;
    }
    if (n != 0) {
        return 0;
    }
    return 1;
}
