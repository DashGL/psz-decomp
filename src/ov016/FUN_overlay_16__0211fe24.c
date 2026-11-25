// flags: -noThumb -O4,s
typedef struct {
    void *p0;
    int pad1[2];
    unsigned rem;
    char *cur;
    int pad2[3];
    void *p32;
} State_0212dfa0;
extern State_0212dfa0 DAT_0212dfa0;
extern unsigned char DAT_0212d8f0[];
extern void FUN_020655d8(const void *, void *, unsigned);
void *FUN_overlay_16__0211fe24(void) {
    if (!DAT_0212dfa0.p0) {
        if (DAT_0212dfa0.rem >= 768) {
            DAT_0212dfa0.p0 = DAT_0212dfa0.cur;
            FUN_020655d8(DAT_0212d8f0, DAT_0212dfa0.cur, 768);
            DAT_0212dfa0.cur += 768;
            DAT_0212dfa0.rem -= 768;
        } else {
            return DAT_0212d8f0;
        }
    }
    return DAT_0212dfa0.p0;
}
