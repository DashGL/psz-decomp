// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x4c, exact bytes and relocation targets.
// flags: -O4,s
extern int FUN_0209ed38(short *);
extern void FUN_020662b4(char *, int, const char *, int, ...);
extern int FUN_020ba0c8(char *, int, void (*)(void), void *);
extern void FUN_0209f060(void);
extern const char *D_020f4b28[];

int FUN_0209f014(void *a, short *b) {
    char buf[0x80];
    if (*(int *)((char *)a + 0x34) != 0 && FUN_0209ed38(b) != 0) {
        FUN_020662b4(buf, 0x80, D_020f4b28[b[0]], b[1]);
        return FUN_020ba0c8(buf, *(int *)((char *)a + 0x34), FUN_0209f060, a);
    }
    return 0;
}
