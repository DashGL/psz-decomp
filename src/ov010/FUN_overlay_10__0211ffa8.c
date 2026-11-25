// flags: -O4,s
extern int FUN_020ae5a8(void *);
extern void FUN_020c3788(void *, void *, int, int, int);
extern void FUN_020c38f0(void *, int);
void FUN_overlay_10__0211ffa8(char *p, void *text, int shift) {
    if (text) {
        int n = FUN_020ae5a8(text);
        int y = *(int *)(p + 0x8c) - n * 10;
        y >>= shift + 1;
        FUN_020c3788(p + 0x44, text, 100, y, 2);
    } else {
        FUN_020c38f0(p + 0x44, 0);
    }
}
