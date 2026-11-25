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
extern unsigned char DAT_0212d770[];
extern void FUN_020655d8(const void *, void *, unsigned);
void *FUN_overlay_16__0211fe94(void) {
    if (!DAT_0212dfa0.p32) {
        if (DAT_0212dfa0.rem >= 384) {
            DAT_0212dfa0.p32 = DAT_0212dfa0.cur;
            FUN_020655d8(DAT_0212d770, DAT_0212dfa0.cur, 384);
            DAT_0212dfa0.cur += 384;
            DAT_0212dfa0.rem -= 384;
        } else {
            return DAT_0212d770;
        }
    }
    return DAT_0212dfa0.p32;
}
