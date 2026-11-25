// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x44, exact bytes and relocation targets.
// flags: -O4,s
extern void FUN_0206557c(int, char *, int);
extern void FUN_020038ec(char *, int, const char *, int);
extern void FUN_020ba2d4(char *, char *);
extern const char D_020fa6f8[];

void FUN_02080e90(char *p) {
    char buf[0x40];
    FUN_0206557c(0, p, 0x151c);
    for (int i = 0; i < 7; i++) {
        FUN_020038ec(buf, 0x40, D_020fa6f8, i);
        FUN_020ba2d4(buf, p + i * 0x304);
    }
}
