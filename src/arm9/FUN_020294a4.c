// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x6c, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern int FUN_02029480(signed char *);
int FUN_020294a4(signed char *a, signed char *b) {
    while (1) {
        signed char c2;
        signed char c1;
        while ((c2 = *b++, c1 = *a++, c1 == c2)) {
            if (c1 == 0) {
                return 0;
            }
        }
        if (c2 != '*') {
            return 1;
        }
        a--;
        int len_a = FUN_02029480(a);
        int len_b = FUN_02029480(b);
        if (len_b > len_a) {
            return 1;
        }
        a += len_a - len_b;
    }
}
