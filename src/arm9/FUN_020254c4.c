// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x58, exact bytes and relocation targets.
// flags: -noThumb
extern void FUN_02024028(int);
extern void FUN_02023f9c(void);
extern void FUN_02023fc8(int, int, int);
extern int FUN_02024fa8(void);
extern int FUN_02025174(int, int);
extern void FUN_0202405c(void);
int FUN_020254c4(int a) {
    int r4, i;
    FUN_02024028(a);
    FUN_02023f9c();
    FUN_02023fc8(0x44, 0x43, -1);
    for (i = 0; i < 4; i++) {
        r4 = FUN_02025174(FUN_02024fa8(), i);
        if (r4 == 1) {
            break;
        }
    }
    FUN_0202405c();
    return r4 == 1;
}
