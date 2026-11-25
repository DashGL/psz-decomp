// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x44, exact bytes and relocation targets.
extern int FUN_02003c70(const char *);
extern void FUN_020014d4(char *, const char *, int);

int FUN_020d6770(char *a, const char *b) {
    int len = FUN_02003c70(b) + 1;
    int rem = 0x578 - *(int *)(a + 0x578);
    if (len > rem) {
        len = rem;
    }
    if (len <= 0) {
        return 0;
    }
    FUN_020014d4(a + *(int *)(a + 0x578), b, len);
    *(int *)(a + 0x578) += len;
    a[*(int *)(a + 0x578) - 1] = 0;
    return 1;
}
