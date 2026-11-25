// FUN_overlay_15__02133eb4 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// Overlay 15 connection callback; reconstructed from USA ROM.
// check: 2.0/sp2p3 target=0xe4 candidate=0xe4 words=0 exact_bytes=0 bad_relocs=0
typedef void (*Log)(unsigned int, const char *, ...);
extern struct { Log log; char *state; } data_0213e8e0;
extern const char data_0213c044[], data_0213c070[], data_0213c09c[];
extern void FUN_overlay_15__02133d7c(int), FUN_overlay_15__02133d2c(int);
extern int FUN_overlay_15__02133f98(void);
extern int FUN_0205431c(void *, unsigned short);
void FUN_overlay_15__02133eb4(unsigned short *event) {
    unsigned short aid = event[8];
    unsigned short bit = 1U << aid;
    int result;
    if (event[1]) {
        FUN_overlay_15__02133d7c(event[1]);
        FUN_overlay_15__02133d2c(9);
        return;
    }
    switch (event[4]) {
    case 7:
        if (data_0213e8e0.log) data_0213e8e0.log(0x08000000, data_0213c044, aid);
        if (*(int (**)(void *))(data_0213e8e0.state + 0x4c) &&
            !(*(int (**)(void *))(data_0213e8e0.state + 0x4c))(event)) {
            result = FUN_0205431c(0, event[8]);
            if (result != 2) {
                FUN_overlay_15__02133d7c(result);
                FUN_overlay_15__02133d2c(9);
            }
            return;
        }
        *(unsigned short *)(data_0213e8e0.state + 0x52) |= bit;
        break;
    case 9:
        if (data_0213e8e0.log) data_0213e8e0.log(0x08000000, data_0213c070, aid);
        *(unsigned short *)(data_0213e8e0.state + 0x52) &= ~bit;
        break;
    case 0:
        if (!FUN_overlay_15__02133f98()) FUN_overlay_15__02133d2c(9);
        break;
    case 2: break;
    default:
        if (data_0213e8e0.log) data_0213e8e0.log(0x08000000, data_0213c09c, event[4]);
        break;
    }
}
