// flags: -O4,p
// Overlay 15 channel cleanup; reconstructed from USA ROM.
extern void **data_0213e7e0;
extern void **DAT_a_0213e7e0;
extern void FUN_overlay_15__02137440(unsigned int, unsigned int);
extern void FUN_overlay_15__02135820(void *);
extern void FUN_overlay_15__02135f78(void *);
extern void FUN_overlay_15__02136e60(void *);
extern void FUN_overlay_15__021366dc(void **);
void FUN_overlay_15__021278b4(unsigned int value) {
    int i;
    FUN_overlay_15__02137440(0, value);
    for (i = 0; i < 4; i++) {
        FUN_overlay_15__02135820(data_0213e7e0[18+i]);
        FUN_overlay_15__02135f78(data_0213e7e0[i]);
    }
    for (i = 0; i < 2; i++) FUN_overlay_15__02135820(data_0213e7e0[16+i]);
    for (i = 0; i < 2; i++) FUN_overlay_15__02136e60(data_0213e7e0[14+i]);
    for (i = 0; i < 10; i++) FUN_overlay_15__02136e60(data_0213e7e0[4+i]);
    FUN_overlay_15__021366dc((void **)&DAT_a_0213e7e0);
}
