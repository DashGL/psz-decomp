// flags: -O4,p -noThumb
extern void FUN_02011bdc(void *, unsigned int, void *, unsigned int, unsigned int);
extern unsigned int FUN_02011cf4(unsigned int *, unsigned int);

typedef struct {
    unsigned int pad0[6];
    unsigned int r0;
    unsigned int r1;
    unsigned int pad1;
    unsigned int p1;
    unsigned int p2;
    unsigned int z1;
    unsigned int z2;
    unsigned short f34;
    unsigned short flag0 : 1;
    unsigned short rest : 15;
    unsigned int tail;
} S_11d20;

S_11d20 *FUN_02011d20(S_11d20 *self, unsigned int end, unsigned int flags) {
    unsigned int range[2];
    unsigned int p;
    FUN_02011bdc(self, 0x45585048, &self->tail, end, flags);
    self->f34 = 0;
    *(unsigned short *)((char *)self + 0x36) = 0;
    self->flag0 = 0;
    range[0] = self->r0;
    range[1] = self->r1;
    p = FUN_02011cf4(range, 0x4652);
    self->p1 = p;
    self->p2 = p;
    self->z1 = 0;
    self->z2 = 0;
    return self;
}
