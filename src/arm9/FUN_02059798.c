// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x84, exact bytes and relocation targets.
// flags: -O4,p -noThumb
struct Node59798 {
    int f0;
    struct Node59798 *prev;
    struct Node59798 *next;
    int fc;
    int f10;
    int f14;
    int f18;
    unsigned int f1c;
};
struct Glob59798 {
    struct Node59798 *f0;
    struct Node59798 *f4;
    unsigned short f8;
    unsigned short fa;
    int fc;
};
extern struct Glob59798 DAT_02112510;
extern int FUN_020683d4(void);
extern void FUN_020683e8(int);

void FUN_02059798(struct Node59798 *a) {
    int s;
    if (a->f0 == 0) {
        return;
    }
    s = FUN_020683d4();
    if (a->prev != 0) {
        a->prev->next = a->next;
    }
    if (a->next != 0) {
        a->next->prev = a->prev;
    }
    a->f0 = 0;
    a->next = 0;
    a->prev = 0;
    a->f1c &= ~1u;
    if (DAT_02112510.f4 == a) {
        DAT_02112510.f4 = DAT_02112510.f0;
        DAT_02112510.fc = 0;
        DAT_02112510.fa = 0;
        DAT_02112510.f8 = 0;
    }
    FUN_020683e8(s);
}
