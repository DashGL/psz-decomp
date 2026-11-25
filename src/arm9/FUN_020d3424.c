// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x30, exact bytes and relocation targets.
extern void FUN_020c7290(int, void *);
extern void FUN_020c6e28(int, void *);

struct Sub {
    int a, b, c, d, e;
};
struct Obj {
    int a, b;
    struct Sub *sub;
    int state;
};

void FUN_020d3424(struct Obj *p, ...) {
    if (p->state != 7) {
        p->state = 7;
        FUN_020c7290(p->sub->d, (void *)&p);
        FUN_020c6e28(p->sub->e, (void *)&p);
    }
}
