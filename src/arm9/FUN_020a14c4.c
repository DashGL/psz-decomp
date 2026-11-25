// flags: -O4,s
struct Tbl29 { short a[29]; };
extern char DAT_0211a51c[];
extern struct Tbl29 DAT_020f4c4c;
extern int FUN_02084bf8(void *);
void FUN_020a14c4(char *s, int id, int category) {
    int i;
    if (category < 0 || category > 2) return;
    if (FUN_02084bf8(DAT_0211a51c)) id -= 120000;
    for (i = 0; i < 29; i++) if (id == DAT_020f4c4c.a[i]) {
        short *p = (short *)(s + 14 + 58 * category);
        if (p[i] < 9999) p[i]++;
        return;
    }
}
