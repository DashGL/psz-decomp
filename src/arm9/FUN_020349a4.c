// flags: -O4,s
struct Pair_020349a4 {
    int idx;
    int val;
};
extern int DAT_020ece78;
extern int DAT_020f6d6c[];
extern struct Pair_020349a4 DAT_020ecebc[];
void FUN_020349a4(void) {
    int i;
    for (i = 0; i < DAT_020ece78; i++) {
        int idx = DAT_020ecebc[i].idx;
        if (idx >= 0 && idx < 40) {
            DAT_020f6d6c[idx] = DAT_020ecebc[i].val;
        }
    }
}
