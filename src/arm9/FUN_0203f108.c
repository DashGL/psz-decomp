// flags: -O4,s
extern void *DAT_02108c84;
extern void *FUN_020bc508(void *, int);
extern unsigned int FUN_02037adc(void *, void *, int);
extern unsigned int FUN_02037c88(void *, void *, int, int);

typedef struct {
    char pad[0x460];
    void *arr0[4];
    struct { void *f0, *f1, *f2; } arr1[4];
    char pad2[0x8];
    struct { unsigned short s0, s1, s2; } arr2[4];
} S_0203f108;
void FUN_0203f108(S_0203f108 *s, int index) {
    void *m = DAT_02108c84;
    if (m != 0 && index >= 0 && index < 4) {
        unsigned short v;
        s->arr1[index].f0 = FUN_020bc508(s->arr0[index], 0);
        if (s->arr1[index].f0 != 0) {
            s->arr2[index].s0 = FUN_02037adc(m, s->arr1[index].f0, 0);
        }
        s->arr1[index].f2 = FUN_020bc508(s->arr0[index], 2);
        v = FUN_02037c88(m, s->arr1[index].f2, 0, 0);
        s->arr2[index].s2 = v;
        s->arr1[index].f1 = FUN_020bc508(s->arr0[index], 1);
        v = FUN_02037c88(m, s->arr1[index].f1, 0, 0);
        s->arr2[index].s1 = v;
    }
}