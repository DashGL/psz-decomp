// flags: -O4,s
extern void FUN_020c3a84(void *);

typedef struct {
    unsigned int pad0[6];
    unsigned int status;
    unsigned int pad1;
} Slot;

typedef struct {
    void *ptrs[3];
    Slot banks[3][8];
} Obj;

void FUN_020c3be0(Obj *self) {
    int bank, slot;
    for (bank = 0; bank < 3; bank++) {
        for (slot = 0; slot < 8; slot++) {
            if (self->banks[bank][slot].status == 1) {
                FUN_020c3a84(&self->banks[bank][slot]);
            }
        }
        self->ptrs[bank] = self->banks;
    }
}
