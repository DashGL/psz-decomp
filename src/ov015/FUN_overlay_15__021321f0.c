// flags: -O4,p
typedef struct State { void *sprite[5]; void *task; unsigned tail; } State;
typedef struct { int pad; State *state; } Global_15;
extern Global_15 DAT_0213e8cc;
extern const unsigned short DAT_0213a6ce[][2];
extern const unsigned char DAT_0213a6b0[][5];
extern const unsigned char DAT_0213a6bf[][5];
extern void FUN_overlay_15__02135a10(void *, int, unsigned);
extern void FUN_overlay_15__0213596c(void *, int, int, int);
extern void FUN_overlay_15__0213590c(void *, int, unsigned, unsigned);
extern void FUN_overlay_15__021328b0(unsigned);
extern void *FUN_overlay_15__021366c4(unsigned, unsigned);
extern void *FUN_overlay_15__02135b14(unsigned, unsigned, unsigned);
extern void *FUN_overlay_15__021373d8(unsigned, void (*)(void *, unsigned), unsigned, unsigned);
extern void FUN_overlay_15__021322a8(void *, unsigned);
extern int FUN_overlay_15__02132190(unsigned);

void FUN_overlay_15__021321f0(unsigned mode) {
    int i;
    DAT_0213e8cc.state = (State *)FUN_overlay_15__021366c4(28, 4);
    for (i = 0; i < 5; i++) {
        DAT_0213e8cc.state->sprite[i] = FUN_overlay_15__02135b14(1, DAT_0213a6b0[mode][i], 1);
        FUN_overlay_15__02135a10(DAT_0213e8cc.state->sprite[i], -1, 0);
        FUN_overlay_15__0213596c(DAT_0213e8cc.state->sprite[i], -1, -42, DAT_0213a6ce[i][1]);
        FUN_overlay_15__0213590c(DAT_0213e8cc.state->sprite[i], -1, 0, DAT_0213a6bf[mode][i]);
    }
    DAT_0213e8cc.state->task = FUN_overlay_15__021373d8(0, FUN_overlay_15__021322a8, 0, 120);
    FUN_overlay_15__021328b0(mode);
    FUN_overlay_15__02132190(13);
}
