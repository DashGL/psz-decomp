// flags: -O4,s -noThumb
typedef struct {
    unsigned int f0;
    unsigned int pad[8];
    unsigned int f24;
    unsigned int f28;
    int f2c;
} State;
extern State DAT_02102820;
extern void FUN_02069678(unsigned int, unsigned int, unsigned int, unsigned int);
extern unsigned int FUN_02069e58(void);
extern void FUN_02069c30(unsigned int);
extern void FUN_02069dec(unsigned int);
void FUN_0200e760(void) {
    State *s = &DAT_02102820;
    unsigned int seq;
    unsigned int mask;
    if (s->f0 == 0) {
        return;
    }
    mask = (s->f2c >= 0) ? (1u << s->f2c) : 0u;
    FUN_02069678(s->f24, s->f28, mask, 0);
    seq = FUN_02069e58();
    FUN_02069c30(1);
    FUN_02069dec(seq);
}
