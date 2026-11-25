// flags: -O4,s
extern void FUN_0208d7e4(void *, int, short, int, int);
extern void FUN_0207f4fc(void *);
extern void FUN_020472bc(void *);

typedef struct {
    unsigned char pad0[0xfc];
    int ffc;
    unsigned char pad1[0x158 - 0x100];
    unsigned char f158[0x1b8 - 0x158];
    void *slots[3];
    unsigned char pad2[0x24c - 0x1c4];
    unsigned char f24c[4];
} Obj;

void FUN_020b860c(Obj *s, short *value) {
    int i;
    FUN_0208d7e4(s->f24c, s->ffc, *value, 0, 4);
    FUN_0207f4fc(s->f158);
    for (i = 0; i < 3; i++) {
        if (s->slots[i]) {
            FUN_020472bc(s->slots[i]);
            s->slots[i] = 0;
        }
    }
}
