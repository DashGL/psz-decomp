// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x50, exact bytes and relocation targets.
// flags: -O4,s
typedef struct {
    int f0;
    int f4;
    int f8;
    unsigned short fc;
} Item;
typedef struct {
    char pad[0x44];
    int f44;
    char pad2[0x14];
    void *f5c;
    int f60;
    short f64;
    unsigned short f66;
} Obj;
extern int FUN_020c6e0c(void *);
extern Item *FUN_020c6e10(void *, int);
extern int FUN_020d3c24(Obj *, int, int, int);
extern void FUN_020d3dd8(Obj *, Item *, int);
int FUN_020d3e34(Obj *a) {
    int i;
restart:
    i = FUN_020c6e0c(a->f5c) - 1;
    if (i >= 0) {
        do {
            Item *it = FUN_020c6e10(a->f5c, i);
            if (it->fc == a->f66) {
                if (FUN_020d3c24(a, it->f8, a->f44 + it->f0, it->f4) == 0) {
                    return 0;
                }
                FUN_020d3dd8(a, it, i);
                goto restart;
            }
            i--;
        } while (i >= 0);
    }
    return 1;
}
