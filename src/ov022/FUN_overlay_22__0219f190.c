//cpp
// flags: -O4,s
typedef struct {
    unsigned char header[4];
    int sender;
    unsigned char padding[4];
    volatile signed char value[4];
} Message;
extern "C" {
extern unsigned int FUN_020bce3c(void *);
extern void FUN_overlay_22__0219f12c(void *);
extern void FUN_overlay_22__0219f14c(void *, int, int);
extern int FUN_02084bd4(void *);
extern int FUN_02084d00(void *);
extern void FUN_overlay_22__0219f21c(void *, void *);
extern void FUN_overlay_22__0219f1f0(void *);
extern void FUN_overlay_22__0219f200(void *, const void *);
}
extern "C" void FUN_overlay_22__0219f190(const int *self, const signed char *value) {
    Message m;
    FUN_overlay_22__0219f12c(&m);
    FUN_overlay_22__0219f1f0((void *)m.value);
    FUN_overlay_22__0219f14c(&m, 1, 16);
    m.sender = self[3];
    FUN_overlay_22__0219f200((void *)m.value, value);
    FUN_020bce3c(&m);
    if ((((FUN_02084bd4((void *)0x0211a51c) == 1 && FUN_02084d00((void *)0x0211a51c) == 1) ? 1 : 0)) == 1) {
        FUN_overlay_22__0219f21c((void *)self, &m);
    }
}
