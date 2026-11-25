// flags: -O4,s
extern unsigned char *DAT_0213f2f4;
extern int FUN_overlay_12__02134000(void);
extern void *FUN_02088c7c(void);
extern int FUN_0208b7d0(void *, void *);
extern int FUN_0203a820(void *, int);
extern int FUN_0203a1a8(void *, int);
extern int FUN_020b707c(void *, void *);
int FUN_overlay_12__02134020(void *item) {
    if (FUN_overlay_12__02134000()) {
        int allowed = FUN_0208b7d0(FUN_02088c7c(), item);
        if (allowed && FUN_0203a820(item, 3) && FUN_0203a1a8(item, 1)) {
            unsigned char *state = DAT_0213f2f4;
            void *record = *(void **)(state + 336);
            if (record)
                return FUN_020b707c(record, item);
        }
        return allowed;
    }
    return 0;
}
