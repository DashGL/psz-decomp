// flags: -O4,s
extern void FUN_02037c5c(void *, unsigned int);
extern void FUN_02037b88(void *, unsigned int);
extern void *DAT_02108c84;
typedef struct {
    unsigned short b;
    unsigned short a;
    char pad[0x2c];
} Slot;
typedef struct {
    char pad[0x368];
    Slot slots[4];
} S;
void FUN_0203e9b0(S *s, int index) {
    void *m = DAT_02108c84;
    if (m != 0 && index >= 0 && index < 4) {
        FUN_02037c5c(m, s->slots[index].a);
        s->slots[index].a = 0xffff;
        FUN_02037b88(m, s->slots[index].b);
        s->slots[index].b = 0xffff;
    }
}
