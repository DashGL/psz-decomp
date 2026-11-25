// flags: -O4,s
typedef struct { unsigned short v[4]; } U16x4;
typedef struct {
    unsigned short icon;
    unsigned short angle;
    int f04;
    int x;
    int y;
    int active;
} Slot;
typedef struct {
    int f00;
    char pad04[20];
    Slot slots[37];
    int f2fc;
    char pad300[12];
    int f30c;
    int baseX;
    int baseY;
    int pad318;
    int f31c;
} Obj;
extern void *data_02108c64;
extern char data_0211a51c[];
extern U16x4 data_0212e2cc, data_0212e2dc;
extern int data_0212e2fc[], data_0212e2ec[];
extern void FUN_02032dfc(int *, void *);
extern void FUN_02090b44(void *);
extern void FUN_overlay_4__0212a574(void *, const int *);
extern int FUN_020855bc(int);
extern int FUN_0206d428(int *);
extern unsigned short FUN_02032854(void *);
extern int FUN_02084cc0(void *);
extern int FUN_0206d36c(const int *, int *);

void FUN_overlay_4__0212a010(Obj *self, int x, int y, unsigned short heading, int slot) {
    int event[5];
    U16x4 diagonal, straight;
    int kind;
    int dx, dy;
    int baseX, baseY;
    unsigned short orientation;
    unsigned short angle;

    FUN_02032dfc(event, data_02108c64);
    if (FUN_020855bc(slot) == 3 && !FUN_0206d428(event)) {
        FUN_02090b44(&self->slots[slot]);
        self->slots[slot].active = 0;
        return;
    }

    diagonal = data_0212e2cc;
    straight = data_0212e2dc;
    orientation = FUN_02032854(data_02108c64);
    if (!self->slots[slot].active) {
        self->slots[slot].active = 1;
        self->f00 = FUN_02084cc0(data_0211a51c);
        kind = -1;
        if (FUN_0206d36c(event, &kind) == 1) {
            self->f31c = data_0212e2fc[kind] + 0x8e000 - data_0212e2ec[kind];
        } else if (self->f30c == 1) {
            FUN_02090b44(&self->f2fc);
            self->f30c = 0;
        }
    }

    baseX = self->baseX << 12;
    baseY = self->baseY << 12;
    angle = (unsigned short)((unsigned short)(-(unsigned short)(heading - 0x8000)) + orientation);
    dx = 0;
    dy = 0;
    switch (orientation) {
    case 0:
        dx = x;
        dy = y;
        break;
    case 0x4000:
        dx = y;
        dy = -x;
        angle = (unsigned short)(angle + 0x8000);
        break;
    case 0x8000:
        dx = -x;
        dy = -y;
        break;
    case 0xc000:
        dx = -y;
        dy = x;
        angle = (unsigned short)(angle + 0x8000);
        break;
    }

    orientation = (unsigned short)(((unsigned short)(angle + 0x1000) / 0x2000) * 0x2000);
    if (orientation == 0x2000 || orientation == 0x6000 || orientation == 0xa000 || orientation == 0xe000) {
        self->slots[slot].icon = diagonal.v[slot];
        switch (orientation) {
        case 0x2000: orientation = 0; break;
        case 0x6000: orientation = 0x4000; break;
        case 0xa000: orientation = 0x8000; break;
        case 0xe000: orientation = 0xc000; break;
        }
    } else {
        self->slots[slot].icon = straight.v[slot];
    }

    if (FUN_0206d36c(event, 0) != 1) {
        self->slots[slot].x = baseX + (int)(((long long)dx * 4681 + 2048) >> 12);
        self->slots[slot].y = baseY + (int)(((long long)dy * 4681 + 2048) >> 12);
    } else {
        self->slots[slot].x = dx + baseX;
        self->slots[slot].y = dy + baseY - self->f31c;
        FUN_overlay_4__0212a574(self, event);
    }

    if (orientation == 0) {
        orientation++;
    }
    self->slots[slot].angle = orientation;
}
