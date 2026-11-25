// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x80, exact bytes and relocation targets.
// flags: -O4,p
extern int FUN_020daf6c(void *);
extern int FUN_02003f38(const void *, const void *, int);
int FUN_020db038(char *a, char *b) {
    int i;
    int cnt;
    if (*(unsigned short *)(a + 0xa) == 0x20) {
        int res = FUN_020daf6c(a);
        if (res > 0) {
            return res;
        }
    }
    i = 0;
    cnt = *(unsigned char *)(b + 0xd12);
    if (cnt > 0) {
        char *r4 = b;
        char *r5 = b + 0x47c;
        unsigned short r6 = *(unsigned short *)(a + 0xa);
        char *p = a + 0xc;
        do {
            if (r6 == *(unsigned short *)(r4 + 0x47a) &&
                FUN_02003f38(p, r5, r6) == 0) {
                return *(unsigned char *)(b + i * 4 + 0x445);
            }
            i++;
            r4 += 0xc0;
            r5 += 0xc0;
        } while (i < cnt);
    }
    return -1;
}
