// flags: -O4,s
extern void FUN_020c38f0(void *, int);
extern int FUN_020ae5a8(const char *);
extern void FUN_020c3788(void *, const char *, int, int, int);
void FUN_overlay_14__02120d34(char *p, const char *text) {
    FUN_020c38f0(p + 0x14, 0);
    if (text) {
        int y = (2 - FUN_020ae5a8(text)) * 5;
        FUN_020c3788(p + 0x14, text, 0x80, y, 2);
    }
}
