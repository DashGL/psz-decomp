// flags: -O4,s
extern void *FUN_02096488(void);
extern void FUN_02096948(void *);
extern void FUN_02096920(void *, int);
extern int DAT_0213ec9c[];
extern int DAT_0213eca8[];
void FUN_overlay_12__02122904(void) {
    FUN_02096948(FUN_02096488());
    if (DAT_0213ec9c[2] > 0) {
        int i;
        for (i = 0; i < DAT_0213ec9c[2]; i++) {
            FUN_02096920(FUN_02096488(), DAT_0213eca8[i]);
        }
    }
}
