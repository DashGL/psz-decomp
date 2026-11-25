// flags: -O4,s
struct Tbl3 { int a[3]; };
extern char DAT_0211a51c[];
extern struct Tbl3 DAT_02137be0;
extern int FUN_02084bf8(const void *);
int FUN_overlay_12__02120600(void *unused, int value) {
    if (FUN_02084bf8(DAT_0211a51c)) {
        int i;
        for (i = 0; i < 3; i++) if (value == DAT_02137be0.a[i]) return 1;
    }
    return 0;
}
