// flags: -O4,p -noThumb
extern void FUN_020655d8(const void *, void *, unsigned int);
extern struct {
    int f0, f4;
    void *ptr;
    int f0c, f10;
    unsigned int avail;
    char *cur;
} DAT_0212dfa0;
extern char DAT_02126c88[];
void *FUN_overlay_16__0211fd38(void) {
    if (DAT_0212dfa0.ptr == 0) {
        if (DAT_0212dfa0.avail >= 26012) {
            DAT_0212dfa0.ptr = DAT_0212dfa0.cur;
            FUN_020655d8(DAT_02126c88, DAT_0212dfa0.cur, 26012);
            DAT_0212dfa0.cur += 26012;
            DAT_0212dfa0.avail -= 26012;
        } else {
            return DAT_02126c88;
        }
    }
    return DAT_0212dfa0.ptr;
}
