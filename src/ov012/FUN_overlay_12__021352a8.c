// flags: -O4,p
extern void *FUN_0208f068(void);
extern void *FUN_0208efa8(void *, int, int, int);
extern int DAT_0213bd80[6][7];
extern int DAT_0213bcd4[];
void *FUN_overlay_12__021352a8(int *p, int group, int index) {
    if (group >= 0 && group < 6 && index >= 0 && index < 7 && p[0] != -1) {
        void *m = FUN_0208f068();
        if (m) {
            int entry = DAT_0213bd80[group][index];
            if (entry != -1) {
                return FUN_0208efa8(m, p[0], DAT_0213bcd4[group], entry);
            }
        }
    }
    return 0;
}
