// flags: -O4,s
extern int *FUN_02072a14(void *, int, int);
extern void FUN_overlay_31__021988b4(void *);
extern void FUN_020445a8(void *, int, int);
extern char *DAT_0210e24c;
void FUN_overlay_31__02199c5c(int *self) {
    int *record = FUN_02072a14(DAT_0210e24c + 0x74, self[3], 1);
    if (record) {
        int *st = &record[3];
        if (*st != 0 && *st == 3) {
            self[53] |= 1;
            FUN_overlay_31__021988b4(self + 60);
            FUN_020445a8(self, self[58], 0);
            *st = 0;
        }
    }
}
