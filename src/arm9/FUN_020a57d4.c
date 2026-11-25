// flags: -O4,s
enum { E0 = 0, E1 = 1 };
extern char DAT_020fc054[];
extern char DAT_020fc070[];
extern unsigned char DAT_0211a984[];
extern unsigned char DAT_020fc048;
extern void FUN_0208bdb8(void *);
extern void FUN_02080d3c(void *, void *);
extern void FUN_020ba8b4(void *);
extern void FUN_020a75c0(void *);
extern void FUN_020a4b18(void *);
extern int FUN_020a5f7c(void *);
extern char *FUN_020a52d4(void *);

void *FUN_020a57d4(char *s) {
    char *out;
    int mode;
    *(void **)s = DAT_020fc054;
    *(void **)(s + 32) = DAT_020fc070;
    if (*(void **)(s + 7212)) FUN_0208bdb8(*(void **)(s + 7212));
    if (((*(unsigned short *)(s + 88) & 4) ? E1 : E0) != 0) {
        DAT_020fc048 = 0;
    } else {
        DAT_020fc048 = 1;
    }
    DAT_0211a984[0] = FUN_020a5f7c(s);
    mode = *(int *)(s + 7192);
    if (mode == 0) {
        if (*(void **)(DAT_0211a984 + 8)) {
            FUN_02080d3c(*(void **)(DAT_0211a984 + 8), s + 248);
            (*(char **)(DAT_0211a984 + 8))[768] = DAT_0211a984[0];
        }
    } else if (mode == 1 || mode == 3) {
        out = FUN_020a52d4(s);
        if (out) {
            FUN_02080d3c(out, s + 248);
            out[768] = FUN_020a5f7c(s);
        }
    }
    if (*(void **)(s + 6416)) FUN_020ba8b4(*(void **)(s + 6416));
    *(int *)(DAT_0211a984 + 4) = 0;
    FUN_020a75c0(s + 244);
    FUN_020a4b18(s);
    return s;
}
