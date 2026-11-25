// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x50, exact bytes and relocation targets.
// flags: -O4,p -noThumb
typedef struct Node { int f0, f4, f8; struct Node *fc; } Node;
typedef struct { int f0; Node *f4; } Head;
extern char *FUN_0202e424(void);
Node *FUN_0202fc68(int a) {
    char *p = FUN_0202e424();
    Head *h = *(Head **)(p + 0x2270);
    Node *n = 0;
    if (h != 0 && *(unsigned int *)(p + 0x2274) > 0xc) {
        n = h->f4;
        if (n != 0) {
            do {
                if (n->f4 == a) break;
                n = n->fc;
            } while (n != 0);
        }
    }
    return n;
}
