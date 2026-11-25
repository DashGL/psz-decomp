// FUN_020ddb54 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_020ddb54 @ 0x020ddb54 (0x3c, thumb)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
extern void FUN_020decec(int);
extern char * volatile D_0211dbd8[];
extern const char D_02100268[];

void FUN_020ddb54(void) {
    char *p = D_0211dbd8[2];
    if (p != 0) {
        void (*fn)(const char *, char *, int) = *(void (**)(const char *, char *, int))(p + 0x1210);
        int v = *(int *)(p + 0x1314);
        if (v != 0) {
            FUN_020decec(v);
        }
        fn(D_02100268, D_0211dbd8[2], 0);
        D_0211dbd8[2] = 0;
    }
}
