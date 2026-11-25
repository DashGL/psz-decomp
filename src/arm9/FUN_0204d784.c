// flags: -O4,s
typedef struct {
    int f0;
    char *f4;
    void *slots[2];
} State;
extern void FUN_0204adbc(void *);
extern void FUN_0203955c(void *);
extern void FUN_02039534(void *, void *);
extern int FUN_020a8c38(void *, int);
extern void FUN_0204d83c(void *);
extern void FUN_0204d870(void *, void *);
int FUN_0204d784(State *s, int arg) {
    unsigned int record[4];
    int i, result;
    for (i = 0; i < 2; i++) {
        if (s->slots[i] != 0) {
            FUN_0204adbc(s->slots[i]);
            s->slots[i] = 0;
        }
    }
    FUN_0203955c(record);
    if (s->f4 != 0) {
        FUN_02039534(record, s->f4 + 264);
    }
    result = FUN_020a8c38(record, arg);
    if (result != 0) {
        FUN_0204d83c(s);
    }
    if (s->f4 != 0) {
        FUN_0204d870(s, record);
    }
    return result;
}
