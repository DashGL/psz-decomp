// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x36, exact bytes and relocation targets.
extern void FUN_020d910c(void *, int);

struct Obj {
    char pad[0x84];
    int arr[0xff];
    int count;
};

void FUN_020d97c8(struct Obj *p) {
    int i = 0;
    for (; i < p->count; i++) {
        FUN_020d910c(p, p->arr[i]);
    }
    p->count = 0;
}
