// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x58, exact bytes and relocation targets.
extern const char D_020fe878[];
extern const char D_020fe848[];
extern const char D_020fe7ec[];
extern int FUN_02003c70(const void *);
extern void FUN_02000edc(const char *, const char *, const char *, int);
extern void FUN_020014d4(void *, const void *, int);

void FUN_020d2b30(int *a, const void *b, int c) {
    if (b != 0 && c != 0) {
        if (c == -1) {
            c = FUN_02003c70(b);
        }
        if (a[2] + c > a[1]) {
            FUN_02000edc(D_020fe878, D_020fe848, D_020fe7ec, 0x40);
        }
        FUN_020014d4((char *)a[0] + a[2], b, c);
        a[2] += c;
    }
}
