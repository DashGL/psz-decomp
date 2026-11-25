// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x42, exact bytes and relocation targets.
struct Obj {
    char pad[0x60];
    int f60;
};
struct Elem {
    char pad[0xc];
    unsigned int fc;
};
extern int FUN_020c6e0c(int);
extern struct Elem *FUN_020c6e10(int, int);
extern int FUN_020d4b14(struct Obj *, struct Elem *);

int FUN_020d3314(struct Obj *a, unsigned int b) {
    int n = FUN_020c6e0c(a->f60);
    int i;
    for (i = 0; i < n; i++) {
        struct Elem *e = FUN_020c6e10(a->f60, i);
        if (b - e->fc > 1000) {
            if (FUN_020d4b14(a, e) == 0) {
                return 0;
            }
        }
    }
    return 1;
}
