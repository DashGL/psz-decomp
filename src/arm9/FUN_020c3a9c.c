// flags: -O4,s
extern void FUN_0200c938(void *, unsigned int);
extern void FUN_020c3a70(void *);
extern void FUN_020c3a84(void *);
typedef struct { unsigned int data[8]; } Elem;
typedef struct { unsigned int ptrs[3]; Elem elems[3][8]; } Obj;
static inline void init_base(Obj *self) { FUN_0200c938(self, 12); }
static inline void init_arr(Elem *p, Elem *end) { do { FUN_020c3a70(p); p++; } while (p < end); }
void *FUN_020c3a9c(Obj *self) {
    int i, j;
    init_base(self);
    init_arr(&self->elems[0][0], (Elem *)((unsigned char *)self + 0x30c));
    for (i = 0; i < 3; i++) {
        self->ptrs[i] = 0;
        for (j = 0; j < 8; j++) FUN_020c3a84(&self->elems[i][j]);
    }
    return self;
}