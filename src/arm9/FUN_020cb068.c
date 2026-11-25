// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x64, exact bytes and relocation targets.
// flags: -O4,p
extern void FUN_02000edc(const char *, const char *, const char *, int);
extern void *FUN_020c7bdc(void *, int);
extern void FUN_020d1b74(void *, const char *);
extern const char DAT_020fd370[];
extern const char DAT_020fd388[];
extern const char DAT_020fd31c[];
extern const char DAT_020fd394[];
typedef struct { char *f0; int f4; int f8; } S_cb068;
int FUN_020cb068(void *a, S_cb068 *b, char c) {
    char *p; int cap, len;
    if (b == 0) {
        FUN_02000edc(DAT_020fd370, DAT_020fd388, DAT_020fd31c, 0x29);
    }
    len = b->f8;
    cap = b->f4;
    p = b->f0;
    if (cap == len) {
        cap += 0x800;
        p = FUN_020c7bdc(p, cap + 1);
        if (p == 0) {
            FUN_020d1b74(a, DAT_020fd394);
            return 1;
        }
    }
    p[len] = c;
    p[len + 1] = 0;
    b->f8++;
    b->f4 = cap;
    b->f0 = p;
    return 0;
}
