// flags: -O4,p
extern void FUN_overlay_15__02137458(unsigned int, void *);
extern void FUN_overlay_15__02136e60(void *);
extern void FUN_overlay_15__021366dc(void **);
extern void **DAT_0213e7d8;
extern void *DAT_a_0213e7d8;
void FUN_overlay_15__02125704(void) {
    if (DAT_0213e7d8) {
        FUN_overlay_15__02137458(0, DAT_0213e7d8[1]);
        FUN_overlay_15__02136e60(DAT_0213e7d8[0]);
        FUN_overlay_15__021366dc(&DAT_a_0213e7d8);
    }
}
