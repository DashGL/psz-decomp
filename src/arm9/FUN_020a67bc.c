// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x48, exact bytes and relocation targets.
// flags: -O4,s
struct S { char d[0x304]; };
extern void FUN_020963b0(struct S *);
extern void FUN_020038ec(char *, int, const char *, ...);
extern void FUN_020ba2d4(char *, struct S *);
extern void FUN_020aff74(int, int, struct S *);
extern const char D_020fc3a0[];

void FUN_020a67bc(void *a) {
    struct S s;
    char buf[0x40];
    int i;
    FUN_020963b0(&s);
    for (i = 0; i < 7; i++) {
        FUN_020038ec(buf, 0x40, D_020fc3a0, i);
        FUN_020ba2d4(buf, &s);
        FUN_020aff74(*(int *)((char *)a + 0xfc), i, &s);
    }
}
