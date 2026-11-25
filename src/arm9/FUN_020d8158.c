// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x58, exact bytes and relocation targets.
struct Pair {
    int key;
    int val;
};
extern const char D_020fffcc[];
extern const char D_020fffd4[];
extern const char D_020fffb0[];
extern void FUN_02000edc(const char *, const char *, const char *, int);
extern struct Pair *FUN_020c72f8(int, struct Pair *);
extern int FUN_02003c70(int);

int FUN_020d8158(char *a, int b, int c) {
    struct Pair q;
    struct Pair *p;
    int val;
    if (a == 0) {
        FUN_02000edc(D_020fffcc, D_020fffd4, D_020fffb0, 0x99);
    }
    if (a == 0) {
        return 0;
    }
    q.key = b;
    p = FUN_020c72f8(*(int *)(a + 0x18), &q);
    if (p == 0 || FUN_02003c70(val = p->val) == 0) {
        return c;
    }
    return val;
}
