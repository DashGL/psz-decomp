// flags: -O4,p -noThumb
extern unsigned char DAT_021088ec[];
extern int FUN_02027f48(void *, int);

int FUN_02027f8c(int x) {
    if (x <= 0 || FUN_02027f48(DAT_021088ec, x) == 0) {
        return 1;
    }
    return 0;
}
