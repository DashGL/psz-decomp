// flags: -O4,s
enum { E0 = 0, E1 = 1 };
typedef struct {
    unsigned char header[4];
    int sender;
    unsigned char padding[4];
    signed char value[8];
} Message;
extern int DAT_0211a51c;
extern unsigned int FUN_020bce3c(void *);
extern void FUN_overlay_22__0219f12c(void *);
extern void FUN_overlay_22__0219f14c(void *, int, int);
extern int FUN_02084bd4(void *);
extern int FUN_02084d00(void *);
extern void FUN_overlay_22__0219f2c4(void *, void *);

void FUN_overlay_22__0219f22c(const int *self, const signed char *value) {
    Message m;
    int local;
    FUN_overlay_22__0219f12c(&m);
    m.value[0] = 0; m.value[1] = -1; m.value[2] = 0; m.value[3] = 0;
    m.value[4] = 0; m.value[5] = 0; m.value[6] = 0; m.value[7] = 0;
    FUN_overlay_22__0219f14c(&m, 2, 20);
    m.sender = self[3];
    m.value[0] = value[0]; m.value[1] = value[1]; m.value[2] = value[2]; m.value[3] = value[3];
    m.value[4] = value[4]; m.value[5] = value[5]; m.value[6] = value[6]; m.value[7] = value[7];
    FUN_020bce3c(&m);
    local = (FUN_02084bd4(&DAT_0211a51c) == 1 && FUN_02084d00(&DAT_0211a51c) == 1) ? E1 : E0;
    if (local == 1) FUN_overlay_22__0219f2c4((void *)self, &m);
}
