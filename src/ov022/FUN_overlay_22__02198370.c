// flags: -O4,s
extern void FUN_overlay_22__0219addc(void *, int);

typedef struct Cell {
    unsigned char pad0[0x14];
    signed char f14;
    signed char f15;
    unsigned char pad1[2];
} Cell;

typedef struct Obj {
    unsigned char pad0[0x5c];
    Cell cells[9];
    signed char f134;
    signed char f135;
    unsigned char pad1[0x0a];
    int f140;
} Obj;

void FUN_overlay_22__02198370(Obj *self, signed char *record) {
    signed char i;
    if (self->f134 != 0) {
        return;
    }
    if (record[0] < 1 || record[0] > 4) {
        return;
    }
    FUN_overlay_22__0219addc(self, 0x16);
    self->f134 = 0;
    self->f135 = 0;
    self->f134 = 1;
    self->f135 = record[0];
    for (i = 0; i < 9; i++) {
        Cell *c = &self->cells[i];
        c->f14 = 0;
        c->f15 = 0;
    }
    self->f140 = 0;
}
