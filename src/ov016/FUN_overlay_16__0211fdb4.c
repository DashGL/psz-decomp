// flags: -noThumb -O4,s
typedef struct {
    int pad0;
    void *p4;
    int pad1;
    unsigned rem;
    char *cur;
} State_0212dfa0;
extern State_0212dfa0 DAT_0212dfa0;
extern unsigned char DAT_02124b88[];
extern void FUN_020655d8(const void *, void *, unsigned);
void *FUN_overlay_16__0211fdb4(void) {
    if (!DAT_0212dfa0.p4) {
        if (DAT_0212dfa0.rem >= 0x2100) {
            DAT_0212dfa0.p4 = DAT_0212dfa0.cur;
            FUN_020655d8(DAT_02124b88, DAT_0212dfa0.cur, 0x2100);
            DAT_0212dfa0.cur += 0x2100;
            DAT_0212dfa0.rem -= 0x2100;
        } else {
            return DAT_02124b88;
        }
    }
    return DAT_0212dfa0.p4;
}
