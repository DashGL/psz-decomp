// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x48, exact bytes and relocation targets.
struct Entry {
    unsigned char f0;
    unsigned char f1;
    unsigned char f2;
    unsigned char f3;
    char f4[0x20];
};
struct Obj {
    char pad0[0x300];
    struct Entry entries[1];
    char pad1[0x9e8];
    unsigned char st : 4;
};
extern int FUN_020dbaf4(struct Obj *);
extern void FUN_02065774(const void *, void *, int);
extern const int D_020f5f44;

int FUN_020dba0c(struct Obj *a) {
    int idx;
    struct Entry *rec = a->entries;
    idx = FUN_020dbaf4(a);
    rec += idx;
    unsigned int st = a->st;
    if (st == 0 || st == 6) {
        FUN_02065774(&D_020f5f44, rec->f4, 8);
        rec->f3 = 8;
        rec->f1 = 8;
        idx = (unsigned char)(idx + 1);
    }
    return idx;
}
