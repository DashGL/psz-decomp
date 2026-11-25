// flags: -O4,s
typedef struct { int w[4]; } Item;
typedef struct { unsigned char b[4]; } Key4;
typedef struct { unsigned short glyph, b, c, pad; int x, y; } Draw;
typedef struct { unsigned short glyph, pad; int x, y; } Row;
typedef struct { Row r[5]; } Row5;
typedef struct { int a[5]; } Int5;
typedef struct {
    unsigned short rank : 5;
    unsigned short pad0 : 11;
    unsigned short pad2;
    unsigned int kind : 4;
    unsigned int pad4 : 28;
    unsigned char pad8[5];
    unsigned char req_lv;
} ArmorDef;

extern const Row5 UNK_020f4084;
extern const Row5 UNK_020f3fd0;
extern const Int5 UNK_020f3efc;

extern void *FUN_02086e3c(void);
extern void *FUN_02079114(void);
extern void *FUN_02077f3c(void);
extern unsigned char *FUN_020870c4(void *);
extern ArmorDef *FUN_020845a8(Key4 *);
extern Item *FUN_020b07b0(void *);
extern Item *FUN_020b0828(void *);
extern Item *FUN_020b08a0(void *);
extern int FUN_02087138(void *);
extern int FUN_02078038(void *);
extern int FUN_02088d74(void *, void *);
extern int FUN_020b5b64(void *, void *, int);
extern int FUN_020b5e54(void *, void *, int);
extern int FUN_020b5c64(void *, void *, int);
extern int FUN_020b5d54(void *, void *, int);
extern int FUN_020b5f5c(void *, void *, int);
extern int FUN_020b5be4(void *, void *, void *, void *, void *);
extern int FUN_020b5eec(void *, void *, void *, void *, void *);
extern int FUN_020b5ce4(void *, void *, void *, void *, void *);
extern int FUN_020b5dd4(void *, void *, void *, void *, void *);
extern int FUN_020b5fdc(void *, void *, void *, void *, void *);
extern int FUN_020b6c68(void *, void *, int);
extern void FUN_02071d0c(void *);
extern void FUN_020b6200(void *, void *);
extern void FUN_0203955c(void *);
extern void FUN_0208971c(void *, void *);
extern void FUN_020c32b4(void *, int);
extern void FUN_02079160(void *, void *, int, int, int, int, int, int, int);
extern void FUN_020c331c(int, int, int, int);
extern void FUN_0208b2a4(void *);
extern void FUN_0208b3e4(void *, int);

#define W(o) (*(int *)(s + (o)))
#define P(o) (*(void **)(s + (o)))
#define NUMBER(v, col, digits) FUN_02079160(renderer, pos, (col), digits, v, -1, -1, 8, 0)
#define GLYPH(obj, id) do { \
    FUN_02071d0c(&(obj)); \
    (obj).glyph = (id); \
    FUN_0208971c(&(obj).x, pos); \
    FUN_020c32b4(&(obj), FUN_02078038(FUN_02077f3c())); \
} while (0)

void FUN_0208a0bc(unsigned char *s)
{
    Item all[5];
    Item none[5];
    Draw label;
    Item first;
    Item second;
    Item third;
    Item empty;
    Row5 rows;
    Int5 ids;
    Row5 resrows;
    Draw small0;
    Draw small1;
    Draw small2;
    Draw small3;
    Draw small4;
    Draw small5;
    Draw small6;
    Draw small7;
    int pos[2];
    Key4 head;
    void *renderer;
    unsigned char *player;
    ArmorDef *data;
    int i;
    int same;
    int base;
    int value;
    int color;

    FUN_02071d0c(&label);
    renderer = FUN_02079114();
    if (!renderer || !P(92) || !FUN_02087138(FUN_02086e3c())) {
        return;
    }

    player = FUN_020870c4(FUN_02086e3c());
    first = *FUN_020b07b0(FUN_02086e3c());
    second = *FUN_020b0828(FUN_02086e3c());
    third = *FUN_020b08a0(FUN_02086e3c());
    FUN_020b6200(P(92), all);
    FUN_0203955c(&empty);
    for (i = 0; i < 5; i++) {
        FUN_0203955c(&none[i]);
    }

    head = *(Key4 *)s;
    data = FUN_020845a8(&head);
    if (!data) {
        return;
    }

    if (!W(40) && FUN_02088d74(s, &second)) {
        same = 1;
    } else {
        same = 0;
    }

    switch (W(36)) {
    case 0:
        rows = UNK_020f4084;
        for (i = 0; i < sizeof(rows.r) / sizeof(rows.r[0]); i++) {
            label.glyph = ((volatile Row *)rows.r)[i].glyph;
            FUN_0208971c(&label.x, &rows.r[i].x);
            FUN_020c32b4(&label, W(32));
        }

        base = FUN_020b5e54(P(92), &second, -1);
        if (same) {
            value = base;
        } else if (W(40)) {
            value = FUN_020b5eec(P(92), &first, &third, &empty, none);
        } else {
            value = FUN_020b5eec(P(92), &first, &third, s, none);
        }
        pos[0] = 0xb0000;
        pos[1] = rows.r[0].y + 0xc000;
        NUMBER(base, 2, 4);
        pos[0] = 0xd0000;
        GLYPH(small0, 38);
        pos[0] = 0xd8000;
        if (value < base) color = 4;
        else if (value > base) color = 3;
        else color = 2;
        NUMBER(value, (unsigned short)color, 4);

        base = FUN_020b5f5c(P(92), &second, -1);
        if (same) {
            value = base;
        } else if (W(40)) {
            value = FUN_020b5fdc(P(92), &first, &third, &empty, none);
        } else {
            value = FUN_020b5fdc(P(92), &first, &third, s, none);
        }
        pos[0] = 0xb0000;
        pos[1] = 0x11f000;
        NUMBER(base, 2, 4);
        pos[0] = 0xd0000;
        GLYPH(small1, 38);
        pos[0] = 0xd8000;
        if (value < base) color = 4;
        else if (value > base) color = 3;
        else color = 2;
        NUMBER(value, (unsigned short)color, 4);

        switch (data->kind) {
        case 1:
            base = FUN_020b5b64(P(92), &first, -1);
            if (same) {
                value = base;
            } else if (W(40)) {
                value = FUN_020b5be4(P(92), &first, &third, &empty, none);
            } else {
                value = FUN_020b5be4(P(92), &first, &third, s, none);
            }
            FUN_020c331c(47, 0xb0000, 0x12b000, W(32));
            pos[0] = 0xb0000;
            pos[1] = 0x137000;
            NUMBER(base, 2, 4);
            pos[0] = 0xd0000;
            GLYPH(small2, 38);
            pos[0] = 0xd8000;
            if (value < base) color = 4;
            else if (value > base) color = 3;
            else color = 2;
            NUMBER(value, (unsigned short)color, 4);
            break;
        case 4:
            base = FUN_020b5c64(P(92), &first, -1);
            if (same) {
                value = base;
            } else if (W(40)) {
                value = FUN_020b5ce4(P(92), &first, &third, &empty, none);
            } else {
                value = FUN_020b5ce4(P(92), &first, &third, s, none);
            }
            FUN_020c331c(37, 0xb0000, 0x12b000, W(32));
            pos[0] = 0xb0000;
            pos[1] = 0x137000;
            NUMBER(base, 2, 4);
            pos[0] = 0xd0000;
            GLYPH(small3, 38);
            pos[0] = 0xd8000;
            if (value < base) color = 4;
            else if (value > base) color = 3;
            else color = 2;
            NUMBER(value, (unsigned short)color, 4);
            break;
        case 5:
            base = FUN_020b5d54(P(92), &first, -1);
            if (same) {
                value = base;
            } else if (W(40)) {
                value = FUN_020b5dd4(P(92), &first, &third, &empty, none);
            } else {
                value = FUN_020b5dd4(P(92), &first, &third, s, none);
            }
            FUN_020c331c(51, 0xb0000, 0x12b000, W(32));
            pos[0] = 0xb0000;
            pos[1] = 0x137000;
            NUMBER(base, 2, 4);
            pos[0] = 0xd0000;
            GLYPH(small4, 38);
            pos[0] = 0xd8000;
            if (value < base) color = 4;
            else if (value > base) color = 3;
            else color = 2;
            NUMBER(value, (unsigned short)color, 4);
            break;
        }

        pos[0] = 0xf0000;
        pos[1] = 0x143000;
        NUMBER((W(4) & (7 << 22)) >> 22, 2, 1);

        pos[0] = 0xe0000;
        pos[1] = 0x14f000;
        value = data->req_lv;
        player += 0x56;
        {
            int ok = !(value > *player);
            if (ok == 1) color = 2;
            else color = 4;
            NUMBER(value, color, 3);
        }

        FUN_0208b2a4(s);
        FUN_0208b3e4(s, data->rank + 1);
        break;
    case 1:
        ids = UNK_020f3efc;
        resrows = UNK_020f3fd0;
        for (i = 0; i < sizeof(resrows.r) / sizeof(resrows.r[0]); i++) {
            int key = ids.a[i];
            int y, x;
            base = FUN_020b6c68(P(92), &second, key);
            if (W(40)) {
                value = 0;
            } else {
                value = FUN_020b6c68(P(92), s, key);
            }
            y = resrows.r[i].y;
            x = resrows.r[i].x;
            FUN_020c331c(resrows.r[i].glyph, x + 0xa000, y, W(32));
            FUN_020c331c(73, x, y, W(32));
            pos[0] = 0xd0000;
            pos[1] = y + 0xc000;
            GLYPH(small5, 38);
            pos[0] = 0xb0000;
            NUMBER(base, 2, 2);
            pos[0] = 0xc0000;
            GLYPH(small6, 2);
            pos[0] = 0xe0000;
            if (value < base) color = 4;
            else if (value > base) color = 3;
            else color = 2;
            NUMBER(value, (unsigned short)color, 2);
            pos[0] = 0xf0000;
            GLYPH(small7, 2);
        }
        break;
    }
}
