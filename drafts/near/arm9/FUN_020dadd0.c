// near: 6w/6b (r6/r7 swap between loop limit and self index)
// flags: -O4,p
extern char *DAT_0211dbb4[];
int FUN_02003f38(const void *, const void *, int);

int FUN_020dadd0(void) {
    unsigned char r4;
    char *r5 = DAT_0211dbb4[4];
    unsigned char r6;
    unsigned char r7 = *(unsigned char *)(r5 + 0xd13);
    char *p = r5 + 0x474 + r7 * 0xc0;
    if (*(unsigned char *)(r5 + 0xd0d) >= 6) {
        return 1;
    }
    r6 = *(unsigned char *)(r5 + 0xd12);
    for (r4 = 0; r4 < r6; r4++) {
        if (r4 != r7 && *(unsigned char *)(r5 + (r4 << 2) + 0x445) < 6) {
            int off = r4 * 0xc0;
            if (FUN_02003f38(p, r5 + 0x474 + off, *(unsigned short *)(r5 + off + 0x47a)) == 0) {
                return 2;
            }
        }
    }
    return 1;
}
