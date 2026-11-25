// Verified 2026-11-13: full144-byte body, pinned2.0/sp2p3, exactbytes andeveryrelocation; restoredconsumedarguments.
// Evidence: notes/reference/resume2-root-20261112/FUN_020a73e8-receiver-correction.json
// flags: -O4,s
extern signed char DAT_020fc1dc[];
extern const char DAT_020fc3b8[];
extern void FUN_020a7478(void);
extern char *FUN_020aff4c(void *, int);
extern void FUN_020038ec(char *, int, const char *, int);
extern void FUN_020ba2d4(char *, char *);
extern void FUN_02080d10(void *);
extern void FUN_020a53a8(void *, int);
extern void FUN_020a73a0(void *, int);
extern void FUN_020a7490(void *, void (*)(void));

void FUN_020a73e8(char *a, int b) {
    char buf[0x40];
    char *s;
    DAT_020fc1dc[1] = b + *(int *)(*(char **)(a + 0xfc) + 8);
    s = FUN_020aff4c(*(void **)(a + 0xfc), DAT_020fc1dc[1]);
    if (*(int *)(a + 0xf4) == 3) {
        FUN_020038ec(buf, 0x40, DAT_020fc3b8, DAT_020fc1dc[1]);
        FUN_020ba2d4(buf, s);
        s[0x300] = 0;
    } else {
        FUN_02080d10(s);
    }
    *(int *)(*(char **)(a + 0xfc) + 0x10) = 1;
    *(int *)(a + 0x13c) = 0;
    FUN_020a53a8(a, 2);
    FUN_020a73a0(a, -1);
    FUN_020a7490(a, FUN_020a7478);
}
