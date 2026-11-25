// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x40, exact bytes and relocation targets.
extern int FUN_02073218(int);
extern int FUN_02084be4(void *);
extern int FUN_020c0f9c(void *);
extern int D_0211a51c;

struct Elem {
    char b[0x3c];
};
struct Obj {
    char pad[0x7c];
    struct Elem elems[1];
};

int FUN_02074a08(struct Obj *p, int a) {
    if (FUN_02073218(a) == 1) {
        switch (FUN_02084be4(&D_0211a51c)) {
        case 0:
            return FUN_020c0f9c(&p->elems[a]);
        case -1:
        case 1:
            break;
        }
    }
    return -1;
}
