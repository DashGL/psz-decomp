// flags: -O4,s
extern void FUN_020472bc(void *);
extern void FUN_020b0a44(void *);
extern void FUN_02038320(void *, int);

typedef struct {
    unsigned char pad0[0x1b8];
    void *slots[3];
    unsigned char pad1[0x1d0 - 0x1c4];
    void *f1d0;
    unsigned char pad2[0x240 - 0x1d4];
    int f240;
} Obj;

void FUN_0203bfb4(Obj *s) {
    int i;
    for (i = 0; i < 3; i++) {
        if (s->slots[i]) {
            FUN_020472bc(s->slots[i]);
            s->slots[i] = 0;
        }
    }
    if (s->f1d0) {
        FUN_020b0a44(s->f1d0);
        s->f1d0 = 0;
        FUN_02038320(s, 1);
        s->f240 = 28;
    }
}
