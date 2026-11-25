// FUN_overlay_15__02133f98 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// Overlay 15 asynchronous connection request; reconstructed from USA ROM.
// check: 2.0/sp2p3 target=0x68 candidate=0x68 words=0 exact_bytes=0 bad_relocs=0
typedef void (*Callback)(void *);
extern struct { void *log; char *state; } data_0213e8e0;
extern void FUN_overlay_15__02133d2c(int);
extern void FUN_overlay_15__02133d7c(int);
extern void FUN_overlay_15__02134000(void *);
extern int FUN_02054618(Callback, void *, unsigned short, void *, unsigned short, int);
int FUN_overlay_15__02133f98(void) {
    char *state;
    int result;
    if (*(unsigned int *)(data_0213e8e0.state + 0x40) - 4 <= 2) return 1;
    FUN_overlay_15__02133d2c(4);
    state = data_0213e8e0.state;
    result = FUN_02054618(FUN_overlay_15__02134000, state + 0x1060,
        (unsigned short)*(int *)(state + 0x12a4), state + 0xf80,
        (unsigned short)*(int *)(state + 0x12a0), 1);
    if (result != 2) {
        FUN_overlay_15__02133d7c(result);
        return 0;
    }
    return 1;
}
