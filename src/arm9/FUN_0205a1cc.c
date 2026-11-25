// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x58, exact bytes and relocation targets.
// flags: -O4,p -noThumb
typedef struct { int a, b, c; } V3;
extern V3 D_02112514;
extern void FUN_02059cd4(void *);
extern int FUN_02059cfc(void *, int, int, V3 *);
int FUN_0205a1cc(int a) {
    V3 res;
    int buf[18];
    FUN_02059cd4(buf);
    if (FUN_02059cfc(buf, a, 0, &res) == 0) {
        return 0;
    }
    D_02112514 = res;
    return 1;
}
