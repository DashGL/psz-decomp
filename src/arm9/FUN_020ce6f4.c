// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x70, exact bytes and relocation targets.
// flags: -O4,p
typedef struct Node_ce6f4 {
    int f0;
    int f4;
    int f8;
    int fc;
    int f10;
    int f14;
    int f18;
    int f1c;
    struct Node_ce6f4 *f20;
} Node_ce6f4;
extern char DAT_020fde38[];
extern Node_ce6f4 *FUN_020c7bcc(int);
extern void FUN_020d1b74(void *, char *);
int FUN_020ce6f4(char **a, int b, int c, Node_ce6f4 **d, int e, int f, int g) {
    char *r4 = *a;
    Node_ce6f4 *r1 = FUN_020c7bcc(0x24);
    if (r1 == 0) {
        FUN_020d1b74(a, DAT_020fde38);
        return 1;
    }
    r1->f0 = b;
    r1->f4 = c;
    r1->f8 = e;
    r1->f14 = 0;
    if (b == 0) {
        r1->f18 = 1;
    } else {
        int *cnt = (int *)(r4 + 0x234);
        r1->f18 = (*cnt)++;
        if (*cnt < 2) {
            *cnt = 2;
        }
    }
    r1->f1c = 0;
    r1->fc = f;
    r1->f10 = g;
    r1->f20 = *(Node_ce6f4 **)(r4 + 0x5c4);
    *(Node_ce6f4 **)(r4 + 0x5c4) = r1;
    *d = r1;
    return 0;
}
