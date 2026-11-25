// flags: -O4,p
enum { E0 = 0, E1 = 1 };
extern void *DAT_02108c54;
extern unsigned char *FUN_02030a98(void *, void *);
void FUN_020a3100(signed char *s) {
    unsigned char *p;
    if (s[9] == 0) {
        p = FUN_02030a98(DAT_02108c54, s + 4);
        if (((*p & 1) ? E1 : E0) == 0) {
            *p |= 1;
        }
    } else if (s[9] == 1) {
        p = FUN_02030a98(DAT_02108c54, s + 4);
        *p |= 4;
    } else if (s[9] == 2) {
        p = FUN_02030a98(DAT_02108c54, s + 4);
        *p |= 8;
    }
}
