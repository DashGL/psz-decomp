//cpp
// flags: -O4,s
extern "C" {
extern int DAT_overlay_29__0219bd54[];
int FUN_overlay_29__02199b60(unsigned char *s, int *p) {
    if (*(int *)(s + 0x58) == 1) {
        *(int *)(s + 0x58) = 0;
        return 0;
    }
    if ((*p > DAT_overlay_29__0219bd54[0] ? 1 : 0) != 0) return 0;
    *(int *)(s + 0x58) = 1;
    return 1;
}
}
