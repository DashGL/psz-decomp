// flags: -O4,s
typedef unsigned int u32;
typedef struct { u32 w[7]; } Cfg;
extern void FUN_overlay_12__02134784(u32);
extern void FUN_overlay_12__02133744(void *, u32);
extern void *FUN_overlay_12__02135c50(int);
extern void FUN_overlay_12__0213248c(void *, void *, u32, u32, u32);
extern void FUN_overlay_12__02134a34(void *, int);
extern void *FUN_overlay_12__02135118(void *, int);
extern void FUN_overlay_12__02135084(void *);
extern void FUN_overlay_12__02135094(void *);
extern void FUN_02079120(void);
extern const Cfg DAT_0213be68;
extern char *DAT_0213f2f4;
void FUN_overlay_12__02135924(u32 *self, void *owner, u32 value) {
    Cfg config;
    *self = value;
    FUN_overlay_12__02134784(value);
    FUN_overlay_12__02133744(owner, 2);
    if (DAT_0213f2f4 != 0) {
        *(void *(**)(int))(DAT_0213f2f4 + 372) = FUN_overlay_12__02135c50;
    }
    config = DAT_0213be68;
    FUN_overlay_12__0213248c(owner, &config, 1, 0, 1);
    FUN_overlay_12__02134a34(self + 1, 0);
    FUN_overlay_12__02135084(FUN_overlay_12__02135118(self + 3, 5));
    FUN_overlay_12__02135094(FUN_overlay_12__02135118(self + 3, 13));
    FUN_02079120();
}
