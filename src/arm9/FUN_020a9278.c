// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x5c, exact bytes and relocation targets.
// flags: -O4,s
typedef struct { int w[4]; } S_a9278;
extern char *DAT_02108d04;
extern int FUN_0208a094(S_a9278 *);
int FUN_020a9278(int a) {
    S_a9278 s;
    int res = 0;
    if (DAT_02108d04 != 0) {
        s = *(S_a9278 *)(DAT_02108d04 + 0x1a0);
        res = FUN_0208a094(&s);
        switch (a) {
        case 0:
            res = (res + 9) / 10;
            if (res <= 0) {
                res = 1;
            }
            break;
        case 1:
            res = (res + 9) / 20;
            if (res <= 0) {
                res = 1;
            }
            break;
        default:
            res = 0;
            break;
        }
    }
    return res;
}
