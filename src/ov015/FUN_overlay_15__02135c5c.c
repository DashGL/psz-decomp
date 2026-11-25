// Overlay 15 asynchronous fade setup; reconstructed from USA ROM.
// check: 2.0/sp2p3 target=0x88 candidate=0x88 words=1 exact_bytes=4 bad_relocs=0
// near: ndiff=1/34 size=0x88 vers=2.0/sp2p3 next="recover stack layout and register scheduling from full ROM extent"
typedef struct { void *task; unsigned short elapsed, duration; unsigned char mode, active; } Fade;
typedef struct { signed char value[4]; } Modes;
extern const struct { unsigned char prefix[8]; Modes modes; } data_0213a804;
extern char *data_0213e8fc;
extern void FUN_0205e4c8(void *, int, int);
extern void FUN_overlay_15__02135ce4(void *, void *);
extern void *FUN_overlay_15__021373d8(int, void (*)(void *, void *), void *, unsigned int);
int FUN_overlay_15__02135c5c(int mode, int screen, int value, unsigned short duration) {
    Modes modes = data_0213a804.modes;
    Fade *fade;
    if (screen == 1) fade = (Fade *)data_0213e8fc;
    else fade = (Fade *)(data_0213e8fc + 12);
    if (fade->active) return 0;
    if (screen == 1) FUN_0205e4c8((void *)0x04001050, value, modes.value[mode]);
    else FUN_0205e4c8((void *)0x04000050, value, modes.value[mode]);
    fade->task = FUN_overlay_15__021373d8(1, FUN_overlay_15__02135ce4, fade, 200);
    fade->elapsed = 0;
    fade->mode = mode;
    fade->duration = duration;
    fade->active = 1;
    return 1;
}
