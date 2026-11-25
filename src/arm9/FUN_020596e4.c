// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xb4, exact bytes and relocation targets.
// flags: -O4,p -noThumb
struct Node596E4 {
    int f0;
    struct Node596E4 *next;
    struct Node596E4 *prev;
    int fc;
    int f10;
    int f14;
    int f18;
    unsigned int f1c;
};

struct List596E4 {
    struct Node596E4 *head;
    struct Node596E4 *tail;
    unsigned short f8;
    unsigned short fa;
    int fc;
};

extern struct List596E4 DAT_02112510;
extern int FUN_020683d4(void);
extern int FUN_020596a4(int, int);
extern int FUN_0205913c(int, int);
extern void FUN_020683e8(int);

int FUN_020596e4(struct Node596E4 *node, int p1, int p2) {
    int ok = 0;
    int irq = FUN_020683d4();
    if (FUN_020596a4(p1, p2) == 0) {
        struct Node596E4 *cur = DAT_02112510.head;
        if (cur == 0) {
            DAT_02112510.head = node;
            DAT_02112510.tail = node;
            DAT_02112510.fc = 0;
            DAT_02112510.fa = 0;
            DAT_02112510.f8 = 0;
        } else {
            while (cur->next != 0) {
                cur = cur->next;
            }
            cur->next = node;
            node->prev = cur;
        }
        node->f0 = FUN_0205913c(p1, p2);
        node->f1c |= 1;
        ok = 1;
    }
    FUN_020683e8(irq);
    return ok;
}
