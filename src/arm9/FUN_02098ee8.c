// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x36, exact bytes and relocation targets.
extern int FUN_02098108(int, int, int);
extern int FUN_020980dc(int, int, int);

struct Sub {
    int a, b;
};
struct Obj {
    int a, b, c;
    struct Sub *sub;
};

int FUN_02098ee8(struct Obj *p, int a) {
    if (p->sub != 0) {
        if (FUN_02098108(p->sub->b, p->sub->a, a) != 0) {
            return 1;
        }
        if (FUN_020980dc(p->sub->b, p->sub->a, a) != 0) {
            return 1;
        }
    }
    return 0;
}
