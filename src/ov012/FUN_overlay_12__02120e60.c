// flags: -O4,s
typedef struct { unsigned words[8]; } Config;
extern unsigned DAT_overlay_12__0213d3e4;
extern char DAT_overlay_12__0213d450[];
extern char DAT_overlay_12__0213d470[];
extern char DAT_overlay_12__0213d484[];
extern char DAT_overlay_12__0213d49c[];
extern Config DAT_overlay_12__02137c80;
extern void *FUN_0208f068(void), *FUN_020c1fc8(void), *FUN_020ba894(unsigned), *FUN_020c3564(void *), *FUN_overlay_12__02120f48(void *, int);
extern int FUN_0208ef48(void *, unsigned, unsigned), FUN_020c2438(void *, void *, void *, unsigned);
extern void FUN_020c35d4(void *, Config *), FUN_020c38f0(void *, unsigned), FUN_020c3788(void *, void *, int, int, unsigned);

void FUN_overlay_12__02120e60(char *self)
{
    void *manager, *child;
    Config config;
    int y, i;
    if (*(int *)(self + 40) == -1) {
        manager = FUN_0208f068();
        if (manager) *(int *)(self + 40) = FUN_0208ef48(manager, DAT_overlay_12__0213d3e4, 11);
    }
    if (*(int *)(self + 28) == -1) *(int *)(self + 28) = FUN_020c2438(FUN_020c1fc8(), DAT_overlay_12__0213d450, DAT_overlay_12__0213d470, 1);
    if (*(int *)(self + 32) == -1) *(int *)(self + 32) = FUN_020c2438(FUN_020c1fc8(), DAT_overlay_12__0213d484, DAT_overlay_12__0213d49c, 1);
    *(unsigned *)(self + 68) = 1;
    child = FUN_020ba894(60);
    if (child) child = FUN_020c3564(child);
    *(void **)(self + 36) = child;
    if (!child) return;
    config = DAT_overlay_12__02137c80;
    FUN_020c35d4(*(void **)(self + 36), &config);
    FUN_020c38f0(*(void **)(self + 36), 0);
    for (y = 31, i = 0; i < 4; i++, y += 17) {
        void *text = FUN_overlay_12__02120f48(self, i);
        FUN_020c3788(*(void **)(self + 36), text, 10, y, 2);
    }
    {
        void *text = FUN_overlay_12__02120f48(self, 11);
        FUN_020c3788(*(void **)(self + 36), text, 18, 177, 2);
    }
}
