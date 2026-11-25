// flags: -O4,p
extern unsigned int FUN_02053840(void);
extern void FUN_overlay_15__021366dc(void **);
extern void *DAT_0213e8c0;
extern void *DAT_a_0213e8c0;
void FUN_overlay_15__0213155c(void) {
    if (DAT_0213e8c0) {
        while (FUN_02053840() != 32768) {}
        FUN_overlay_15__021366dc(&DAT_a_0213e8c0);
    }
}
