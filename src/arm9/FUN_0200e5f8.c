// flags: -noThumb -O4,p
typedef struct {
    unsigned int f0;
    unsigned int f4;
    unsigned int pad1[7];
    unsigned int f24;
    unsigned int pad2[5];
    unsigned int f3c[4];
    unsigned int f4c;
    int f50;
} State_e5f8;
extern State_e5f8 DAT_02102820;
extern void FUN_02011944(void *);
extern int FUN_0201195c(void *);
extern void FUN_0200e678(void);
extern int FUN_02011910(void *);
extern void FUN_0206975c(unsigned int, int, int);
void FUN_0200e5f8(void) {
    State_e5f8 *g = &DAT_02102820;
    int gain;
    if (!g->f0) return;
    if (g->f4) return;
    FUN_02011944(g->f3c);
    if (g->f4c && FUN_0201195c(g->f3c)) {
        FUN_0200e678();
        return;
    }
    gain = FUN_02011910(g->f3c) >> 8;
    if (gain == g->f50) return;
    FUN_0206975c(g->f24, gain, 0);
    g->f50 = gain;
}
