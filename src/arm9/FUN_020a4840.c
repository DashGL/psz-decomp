// flags: -O4,s
typedef struct { int pad[3]; void *slots[4]; } S;
extern void FUN_020c38f0(void *, int);
extern void FUN_020c38a0(void *, void *, int, int, int);
extern void FUN_020c3864(void *, void *, int, int, int);
void FUN_020a4840(S *s, int index, void *primary, void *secondary) {
    if (index >= 0 && index < 4 && s->slots[index]) {
        void *s2;
        FUN_020c38f0(s->slots[index], 0);
        FUN_020c38a0(s->slots[index], primary, 0, 0, 2);
        s2 = s->slots[index];
        if (secondary) FUN_020c3864(s2, secondary, 0, 12, 2);
    }
}
