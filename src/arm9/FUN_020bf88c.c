// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xac, exact bytes and relocation targets.
// flags: -O4,s
extern int FUN_020bf938(int *, int *, void *);
extern int FUN_020bfb84(int *, int *, void *);
extern int FUN_020bfdf4(int *, int *, void *);
extern int FUN_020bfdc8(int *, int *, void *);
extern int FUN_020bfa28(int *, int *, void *);
extern int FUN_020c0340(int *, int *, void *);
extern int FUN_020c0220(int *, int *, void *);
extern int FUN_020c03a4(int *, int *, void *);
extern int FUN_020c024c(int *, int *, void *);

int FUN_020bf88c(int *a, int *b, void *c) {
    switch (*a) {
    case 0:
        switch (*b) {
        case 0:
            return FUN_020bf938(a + 1, b + 1, c);
        case 1:
            return FUN_020bfb84(a + 1, b + 1, c);
        case 2:
            return FUN_020bfdf4(a + 1, b + 1, c);
        default:
            return 0;
        }
    case 1:
        switch (*b) {
        case 0:
            return FUN_020bfdc8(a + 1, b + 1, c);
        case 1:
            return FUN_020bfa28(a + 1, b + 1, c);
        case 2:
            return FUN_020c0340(a + 1, b + 1, c);
        default:
            return 0;
        }
    case 2:
        switch (*b) {
        case 0:
            return FUN_020c0220(a + 1, b + 1, c);
        case 1:
            return FUN_020c03a4(a + 1, b + 1, c);
        case 2:
            return FUN_020c024c(a + 1, b + 1, c);
        default:
            return 0;
        }
    default:
        return 0;
    }
}
