//cpp
// flags: -O4,s
extern "C" {
extern int DAT_0213ec94;
extern void *FUN_02077f3c(void);
extern void FUN_02077fa4(void *);
extern void FUN_02077ff0(void *);
void FUN_overlay_12__02120fe4(void) {
    if ((DAT_0213ec94 != 0 ? 1 : 0) != 0) {
        FUN_02077fa4(FUN_02077f3c());
        FUN_02077ff0(FUN_02077f3c());
    }
}
}
