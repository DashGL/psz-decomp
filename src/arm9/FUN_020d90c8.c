// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x42, exact bytes and relocation targets.
struct Entry {
    int f0;
    int f4;
};
extern void *FUN_020d8090(void *);
extern struct Entry *FUN_020c72f8(void *, struct Entry *);
extern int FUN_020c77cc(int);
extern void FUN_020c7228(void *, struct Entry *);

int FUN_020d90c8(void *a, int b) {
    struct Entry e;
    struct Entry *p;
    e.f0 = b;
    p = FUN_020c72f8(FUN_020d8090(a), &e);
    if (p != 0) {
        p->f4++;
        return p->f0;
    }
    e.f0 = FUN_020c77cc(b);
    e.f4 = 1;
    FUN_020c7228(FUN_020d8090(a), &e);
    return e.f0;
}
