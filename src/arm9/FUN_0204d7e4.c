// flags: -O4,s
typedef struct {
    int f0;
    char *f4;
    void *slots[2];
} State;
extern void FUN_0204adbc(void *);
extern void FUN_0204d83c(void *);
extern void FUN_0203955c(void *);
extern void FUN_02039534(void *, void *);
extern void FUN_0204d870(void *, void *);
void FUN_0204d7e4(State *s, int reset) {
    int i;
    for (i = 0; i < 2; i++) {
        if (s->slots[i] != 0) {
            FUN_0204adbc(s->slots[i]);
            s->slots[i] = 0;
        }
    }
    if (reset != 0) {
        FUN_0204d83c(s);
    }
    if (s->f4 != 0) {
        unsigned int record[4];
        FUN_0203955c(record);
        if (s->f4 != 0) {
            FUN_02039534(record, s->f4 + 264);
        }
        FUN_0204d870(s, record);
    }
}
