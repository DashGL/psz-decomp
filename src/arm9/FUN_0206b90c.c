// flags: -O4,p -noThumb
extern int FUN_0206b63c(int, unsigned short *);
int FUN_0206b90c(int *a, int *b) {
    unsigned short sp0;
    int err = FUN_0206b63c(0, &sp0);
    if (err != 0) {
        return err;
    }
    if (a != 0) {
        *a = (sp0 & 8) ? 1 : 0;
    }
    if (b != 0) {
        *b = (sp0 & 4) ? 1 : 0;
    }
    return err;
}
