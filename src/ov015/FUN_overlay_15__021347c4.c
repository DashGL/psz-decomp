// FUN_overlay_15__021347c4 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// Overlay 15 connection shutdown dispatch; reconstructed from USA ROM.
// check: 2.0/sp2p3 target=0xb4 candidate=0xb4 words=0 exact_bytes=0 bad_relocs=0
typedef void (*Log)(unsigned int, const char *, ...);
extern struct { Log log; char *state; } data_0213e8e0;
extern const char data_0213c1f4[], data_0213c218[];
extern void FUN_overlay_15__02133d2c(int);
extern void FUN_overlay_15__021347b0(void);
extern int FUN_overlay_15__021341a4(void), FUN_overlay_15__021341dc(void);
extern int FUN_overlay_15__021340f0(void), FUN_overlay_15__02134114(void);
void FUN_overlay_15__021347c4(void) {
    int state = *(int *)(data_0213e8e0.state + 0x40);
    if (state == 1) {
        if (data_0213e8e0.log) data_0213e8e0.log(0x08000000, data_0213c1f4);
        return;
    }
    if (data_0213e8e0.log) data_0213e8e0.log(0x08000000, data_0213c218, state);
    state = *(int *)(data_0213e8e0.state + 0x40);
    if (state != 6 && state != 5 && state != 4) {
        FUN_overlay_15__02133d2c(3);
        FUN_overlay_15__021347b0();
        return;
    }
    FUN_overlay_15__02133d2c(3);
    switch (*(int *)(data_0213e8e0.state + 0x44)) {
    case 3: if (!FUN_overlay_15__021341a4()) FUN_overlay_15__021347b0(); break;
    case 1: case 5: if (!FUN_overlay_15__021341dc()) FUN_overlay_15__021347b0(); break;
    case 2: if (!FUN_overlay_15__021340f0()) FUN_overlay_15__021347b0(); break;
    case 0: case 4: if (!FUN_overlay_15__02134114()) FUN_overlay_15__021347b0(); break;
    }
}
