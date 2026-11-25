// flags: -O4,s
extern void FUN_0200d44c(void);
struct Entry {
    void (*fn)(void);
    int b, c, d, e;
};
extern struct Entry DAT_020ebbc8[];

void FUN_0200d34c(int a, int b) {
    unsigned valid = 0;
    do {
        if (b <= -1) break;
        if (b >= 19) break;
        valid = 1;
    } while (0);
    if (valid) {
        DAT_020ebbc8[b].fn();
        FUN_0200d44c();
    }
}
