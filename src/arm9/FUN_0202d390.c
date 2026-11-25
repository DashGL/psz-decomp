// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x128, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern void FUN_02065774(const void *, void *, int);
extern void FUN_0202cd50(void *, void *, int);
extern void FUN_0202cc2c(void *, void *, int, int);
extern void FUN_020656b8(void *, int, int);
extern void FUN_0202c970(void *, void *, void *, int);
extern void FUN_020014f4(void *, const void *, int);
extern int FUN_0202cbc0(void *, void *, int);
extern void FUN_0202cab0(void *, void *, void *, int);

void FUN_0202d390(unsigned short *dst, unsigned short *src, int exp, int len, int shift, void *mod, int inv, unsigned short *tmp1, void *tmp2) {
    FUN_02065774(dst, src, len << 1);
    if (exp == 1) {
        FUN_0202cd50(dst, src, len);
    } else if (exp != 0) {
        FUN_0202cc2c(dst, src, exp, len);
    }
    FUN_0202cc2c(tmp1, dst, inv, shift);
    FUN_020656b8(tmp1 + shift, 0, (len - shift) << 1);
    FUN_0202cc2c(tmp2, tmp1, (int)mod, len);
    FUN_0202c970(dst, dst, tmp2, len);
    FUN_020014f4(dst, dst + shift, (len - shift) << 1);
    FUN_020656b8(dst + len - shift, 0, shift << 1);
    switch (FUN_0202cbc0(dst, mod, len)) {
    case 0:
        FUN_020656b8(dst, 0, len << 1);
        return;
    case 1:
        FUN_0202cab0(dst, dst, mod, len);
        return;
    }
}
