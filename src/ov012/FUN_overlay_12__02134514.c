// flags: -O4,s
extern short *FUN_overlay_12__02134550(void *, void *);
extern int *FUN_overlay_12__021345c4(void *, void *);
extern int FUN_overlay_12__021345f8(void *, int);
int FUN_overlay_12__02134514(void *p, void *item) {
    int result = 0;
    short *category = FUN_overlay_12__02134550(p, item);
    int *entry = FUN_overlay_12__021345c4(category, item);
    if (entry[1] > 0) {
        result = entry[1];
    } else if (entry[1] == 0) {
        int value = FUN_overlay_12__021345f8(item, entry[0]);
        result = (value * category[1]) / 100;
    }
    return result;
}
