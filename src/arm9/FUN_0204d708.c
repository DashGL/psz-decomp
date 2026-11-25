// flags: -O4,s
typedef struct { void *vtbl; int pad; void *slots[2]; } S;
extern int DAT_020f91b8[];
extern void FUN_0204adbc(void *);
void *FUN_0204d708(S *s) {
    int i;
    s->vtbl = DAT_020f91b8;
    for (i = 0; i < 2; i++) {
        if (s->slots[i]) {
            FUN_0204adbc(s->slots[i]);
            s->slots[i] = 0;
        }
    }
    return s;
}
