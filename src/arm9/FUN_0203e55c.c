// flags: -O4,s
extern int FUN_0203b3e4(void *);
extern void FUN_020472bc(void *);
extern void FUN_020946a0(void *);

typedef struct {
    unsigned char pad0[0x1b8];
    void *slots[3];
    unsigned char pad1[0x250 - 0x1c4];
    unsigned int flags;
} Obj;

void FUN_0203e55c(Obj *s) {
    if (FUN_0203b3e4(s)) {
        int i;
        for (i = 0; i < 3; i++) {
            if (s->slots[i]) {
                FUN_020472bc(s->slots[i]);
                s->slots[i] = 0;
            }
        }
        FUN_020946a0(s);
    }
    s->flags |= 8;
}
