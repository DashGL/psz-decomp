//cpp
// flags: -O4,s
extern "C" {
extern int DAT_0213ec94;
extern void *FUN_02077f3c(void);
extern void FUN_02077fcc(void *);
extern void FUN_02078018(void *);
void FUN_overlay_12__02121010(void) {
    if ((DAT_0213ec94 != 0 ? 1 : 0) != 0) {
        FUN_02077fcc(FUN_02077f3c());
        FUN_02078018(FUN_02077f3c());
    }
}
}
