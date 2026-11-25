// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x74, exact bytes and relocation targets.
// flags: -O4,p
typedef struct {
    int a;
    int b;
} Pair_cb81c;
typedef struct Node_cb81c {
    Pair_cb81c f0;
    int f8;
    int fc;
    int f10;
    struct Node_cb81c *f14;
    int f18;
} Node_cb81c;
extern char DAT_020fd560[];
extern Node_cb81c *FUN_020c7bcc(int);
extern void FUN_020d1b74(void *, char *);
int FUN_020cb81c(char **a, Pair_cb81c b, int d, Node_cb81c *e, int f) {
    char *r4 = *a;
    Node_cb81c *r0 = FUN_020c7bcc(0x18);
    if (r0 == 0) {
        FUN_020d1b74(a, DAT_020fd560);
        return 1;
    }
    r0->f0 = b;
    r0->f8 = d;
    r0->f10 = e ? e->f18 : 0;
    r0->fc = f;
    r0->f14 = 0;
    if (*(Node_cb81c **)(r4 + 0x5d8) == 0) {
        *(Node_cb81c **)(r4 + 0x5d8) = r0;
    }
    Node_cb81c *tail = *(Node_cb81c **)(r4 + 0x5dc);
    if (tail != 0) {
        tail->f14 = r0;
    }
    *(Node_cb81c **)(r4 + 0x5dc) = r0;
    return 0;
}
