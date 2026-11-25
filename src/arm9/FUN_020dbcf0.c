// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x78, exact bytes and relocation targets.
// flags: -O4,p
extern int FUN_020dac74(int);
extern int FUN_020dad04(void);
extern int FUN_0202e358(void);
extern int FUN_020dbe88(int);
extern int FUN_020dc1cc(int, int);
extern int FUN_020dbecc(int);
extern int FUN_020dbf88(int);
extern int FUN_020dc064(int);

int FUN_020dbcf0(void) {
    int r4 = FUN_020dac74(0x10);
    int r5 = FUN_020dad04();
    int r0 = FUN_0202e358();
    if (r5 == 2 && r0 == 3) {
        r5 = FUN_020dbe88(r4);
    } else if (r5 == 6) {
        r5 = FUN_020dc1cc(r4, r5);
    } else if (r0 == 3 || r0 == 6) {
        r5 = FUN_020dc1cc(r4, r5);
        if (r5 != 7) {
            if (r5 == 3) {
                r5 = FUN_020dbecc(r4);
            } else if (r5 == 4) {
                r5 = FUN_020dbf88(r4);
            } else if (r5 == 5) {
                r5 = FUN_020dc064(r4);
            }
        }
    }
    return r5;
}
