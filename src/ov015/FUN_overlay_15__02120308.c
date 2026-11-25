// Overlay 15 keyed transform and checksum validation; reconstructed from USA ROM.
typedef struct { unsigned int i, j; void *buffer; unsigned int length; } State;
extern unsigned char DAT_0213d028[];
extern unsigned char DAT_0213d02a[];
extern void *FUN_overlay_15__0211e640(unsigned int);
extern void FUN_overlay_15__0211e650(void *);
extern void FUN_overlay_15__0211f204(int);
extern void FUN_overlay_15__021206c0(void *, const void *, unsigned int);
extern void FUN_overlay_15__02120390(State *, const void *, unsigned int, unsigned int);
extern void FUN_overlay_15__021203f4(State *, void *, const void *, unsigned int);
extern unsigned int FUN_overlay_15__02120460(void *, unsigned int);
int FUN_overlay_15__02120308(const void *input, void *output, unsigned int size,
    unsigned int checksum, const void *prefix, const void *key, unsigned int keylen) {
    State state;
    state.buffer = FUN_overlay_15__0211e640(size);
    if (!state.buffer) {
        FUN_overlay_15__0211f204(2);
        return -1;
    }
    FUN_overlay_15__021206c0(DAT_0213d028, prefix, 2);
    FUN_overlay_15__021206c0(DAT_0213d02a, key, keylen);
    FUN_overlay_15__02120390(&state, DAT_0213d028, keylen + 2, size);
    FUN_overlay_15__021203f4(&state, output, input, size);
    { unsigned int c = FUN_overlay_15__02120460(output, size); if (c != checksum) {
        FUN_overlay_15__0211f204(18);
        FUN_overlay_15__0211e650(state.buffer);
        return -1;
    }
    }
    FUN_overlay_15__0211e650(state.buffer);
    return 0;
}
