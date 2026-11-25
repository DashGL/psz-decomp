// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x68, exact bytes and relocation targets.
// flags: -O4,p
typedef struct {
    void **f0;
    int f4;
    int f8;
    int (*fc)(void *, int);
    void *f10;
} S_c7290;
extern void FUN_02000edc(const char *, const char *, const char *, int);
extern int FUN_020c6f30(void *, void *, void *, int, int);
extern void FUN_020c6eec(void *, int);
extern const char DAT_020fcc50[];
extern const char DAT_020fcc24[];
extern const char DAT_020fcbe4[];
int FUN_020c7290(S_c7290 *a, void *b) {
    int h, idx;
    if (a == 0) {
        FUN_02000edc(DAT_020fcc50, DAT_020fcc24, DAT_020fcbe4, 0x82);
    }
    if (a == 0) {
        return 0;
    }
    h = a->fc(b, a->f4);
    idx = FUN_020c6f30(a->f0[h], b, a->f10, 0, 0);
    if (idx == -1) {
        return 0;
    }
    FUN_020c6eec(a->f0[h], idx);
    return 1;
}
