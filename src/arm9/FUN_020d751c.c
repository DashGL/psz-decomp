// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x4c, exact bytes and relocation targets.
struct Big {
    char buf[0x578];
    int len;
};
extern void FUN_020d6a10(void *, int, void *);
extern void FUN_020c7540(int, void *, int, int, void *, int);
extern int FUN_020c7824(void);

void FUN_020d751c(char *a) {
    struct Big s;
    s.len = 0;
    FUN_020d6a10(s.buf, 8, a + 0x84);
    FUN_020c7540(*(int *)a, s.buf, s.len, 0, a + 0xcc, 8);
    *(int *)(a + 0xb0) = FUN_020c7824();
}
