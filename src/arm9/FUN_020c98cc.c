// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x90, exact bytes and relocation targets.
// flags: -O4,s
extern const char DAT_020fd0c8[];
extern const char DAT_020fd0d4[];
extern const char DAT_020fd0e0[];
extern const char DAT_020fd0f0[];
extern const char DAT_020fd0f8[];
extern void FUN_020cb184(int *, int, const char *);
extern void FUN_020cb1a0(int *, int, int);

int FUN_020c98cc(int *a, int *b) {
    int r4 = *a;
    FUN_020cb184(a, r4 + 0x210, DAT_020fd0c8);
    FUN_020cb184(a, r4 + 0x210, DAT_020fd0d4);
    FUN_020cb1a0(a, r4 + 0x210, *(int *)(r4 + 0x198));
    FUN_020cb184(a, r4 + 0x210, DAT_020fd0e0);
    FUN_020cb1a0(a, r4 + 0x210, *b);
    FUN_020cb184(a, r4 + 0x210, DAT_020fd0f0);
    FUN_020cb184(a, r4 + 0x210, (const char *)b[5]);
    FUN_020cb184(a, r4 + 0x210, DAT_020fd0f8);
    return 0;
}
