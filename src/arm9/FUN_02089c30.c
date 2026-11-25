// flags: -O4,s
typedef struct { unsigned int w[4]; } Item;
typedef struct { unsigned short glyph, b, c, pad; int x, y; } Draw;
typedef struct { unsigned short glyph, pad; int x, y; } Row;
typedef struct { Row row[10]; } Row10;
typedef struct { int w[5]; } Int5;
typedef struct { int w[12]; } Int12;

extern Row DAT_020f3f70[];
extern const Row10 DAT_020f415c;
extern const Int5 DAT_020f3f24;
extern const Int12 DAT_020f3fa0;

extern void *FUN_02086e3c(void);
extern void *FUN_02079114(void);
extern void *FUN_02077f3c(void);
extern void *FUN_02077930(void);
extern void *FUN_0208f068(void);
extern Item *FUN_020b07b0(void *);
extern Item *FUN_020b0828(void *);
extern Item *FUN_020b08a0(void *);
extern int FUN_02087138(void *);
extern int FUN_0203a1fc(void *);
extern int FUN_02078038(void *);
extern int FUN_0208a094(void *);
extern int FUN_02077d98(void *);
extern int FUN_020a8bb0(void *);
extern int FUN_020b5b64(void *, void *, int);
extern int FUN_020b5e54(void *, void *, int);
extern int FUN_020b5c64(void *, void *, int);
extern int FUN_020b5d54(void *, void *, int);
extern int FUN_020b5be4(void *, void *, void *, void *, void *);
extern int FUN_020b5eec(void *, void *, void *, void *, void *);
extern int FUN_020b5ce4(void *, void *, void *, void *, void *);
extern int FUN_020b5dd4(void *, void *, void *, void *, void *);
extern void FUN_02071d0c(void *);
extern void FUN_020b6200(void *, void *);
extern void FUN_0203955c(void *);
extern void FUN_0208971c(void *, void *);
extern void FUN_020c32b4(void *, int);
extern void FUN_02079160(void *, void *, unsigned short, int, int, int, int, int, int);
extern void FUN_0208b444(void *, int, void *, int, int, int);
extern void FUN_020c331c(int, int, int, int);
extern void FUN_020c3788(void *, void *, int, int, int);
extern void *FUN_0208efa8(void *, int, int, int);

#define W(o) (*(int *)(s + (o)))
#define P(o) (*(void **)(s + (o)))

void FUN_02089c30(unsigned char *s) {
    Item all[5];
    Row10 rows;
    Draw label;
    Item first;
    Item second;
    Item empty;
    int base[4];
    int blank[4];
    int with[4];
    int values[10];
    Int5 ability;
    Int12 names;
    Draw small;
    int pos[2];
    int i;
    void *renderer;
    int table;
    int g;

    if (!FUN_02087138(FUN_02086e3c()) || !P(0x5c)) {
        return;
    }
    FUN_02071d0c(&label);
    renderer = FUN_02079114();
    if (!renderer || !P(0x5c)) {
        return;
    }
    first = *FUN_020b07b0(FUN_02086e3c());
    second = *FUN_020b0828(FUN_02086e3c());
    FUN_020b08a0(FUN_02086e3c());
    FUN_020b6200(P(0x5c), all);
    FUN_0203955c(&empty);
    if (FUN_0203a1fc(s)) {
        return;
    }

    switch (W(0x24)) {
    case 0: {
        base[0] = FUN_020b5b64(P(0x5c), &first, -1);
        base[1] = FUN_020b5e54(P(0x5c), &second, -1);
        base[2] = FUN_020b5c64(P(0x5c), &first, -1);
        base[3] = FUN_020b5d54(P(0x5c), &first, -1);
        blank[0] = FUN_020b5be4(P(0x5c), &first, &empty, &second, all);
        blank[1] = FUN_020b5eec(P(0x5c), &first, &empty, &second, all);
        blank[2] = FUN_020b5ce4(P(0x5c), &first, &empty, &second, all);
        blank[3] = FUN_020b5dd4(P(0x5c), &first, &empty, &second, all);
        with[0] = FUN_020b5be4(P(0x5c), &first, s, &second, all);
        with[1] = FUN_020b5eec(P(0x5c), &first, s, &second, all);
        with[2] = FUN_020b5ce4(P(0x5c), &first, s, &second, all);
        with[3] = FUN_020b5dd4(P(0x5c), &first, s, &second, all);
        for (i = 0; i < 4; i++) {
            int color;
            label.glyph = ((volatile Row *)DAT_020f3f70)[i].glyph;
            FUN_0208971c(&label.x, &DAT_020f3f70[i].x);
            FUN_020c32b4(&label, W(0x20));
            pos[1] = label.y + 0xc000;
            pos[0] = 0xd0000;
            FUN_02071d0c(&small);
            small.glyph = 0x26;
            FUN_0208971c(&small.x, pos);
            FUN_020c32b4(&small, FUN_02078038(FUN_02077f3c()));
            pos[0] = 0xb0000;
            FUN_02079160(renderer, pos, 2, 4, base[i], -1, -1, 8, 0);
            pos[0] = 0xd8000;
            if (W(0x28)) {
                int v = blank[i];
                if (v < base[i]) color = 4;
                else if (v > base[i]) color = 3;
                else color = 2;
                FUN_02079160(renderer, pos, (unsigned short)color, 4, v, -1, -1, 8, 0);
            } else {
                int v = with[i];
                if (v < base[i]) color = 4;
                else if (v > base[i]) color = 3;
                else color = 2;
                FUN_02079160(renderer, pos, (unsigned short)color, 4, v, -1, -1, 8, 0);
            }
        }
        break;
    }
    case 1: {
        int k;
        rows = DAT_020f415c;
        values[0] = FUN_0208a094(s);
        values[1] = ((W(4) & (int)0xfe000000) >> 25) & 0x7f;
        values[2] = (W(4) & (0x7f << 18)) >> 18;
        values[3] = W(4) & 0xf;
        values[4] = (W(4) & (0x7f << 11)) >> 11;
        values[5] = (W(8) & (0xf << 20)) >> 20;
        values[6] = (W(4) & (0x7f << 4)) >> 4;
        values[7] = (W(8) & (0xf << 16)) >> 16;
        values[8] = (W(8) & (0x7f << 24)) >> 24;
        values[9] = (W(8) & (0xf << 12)) >> 12;
        k = 0;
        for (i = 0; i < 10; i++) {
            g = rows.row[i].glyph;
            if (!g) {
                pos[0] = rows.row[i].x + 0x2000;
                pos[1] = rows.row[i].y + 0x2000;
                FUN_0208b444(s, k, pos, 10, values[i], values[i - 1]);
                k++;
            } else {
                pos[0] = 0xe0000;
                pos[1] = rows.row[i].y;
                FUN_02079160(renderer, pos, 2, 3, values[i], -1, -1, 8, 0);
            }
            label.glyph = g;
            FUN_0208971c(&label.x, (void *)&((volatile Row *)rows.row)[i].x);
            FUN_020c32b4(&label, W(0x20));
        }
        break;
    }
    case 2: {
                void *strings;
        int total, valid, kind, key;
        table = FUN_02077d98(FUN_02077930());
        ability = DAT_020f3f24;
        names = DAT_020f3fa0;
        strings = FUN_0208f068();
        if (!strings) {
            return;
        }
        total = FUN_0208a094(s);
        valid = 0;
        FUN_020c331c(0x5d, 0xb0000, 0xfc000, W(0x20));
        kind = FUN_020a8bb0(s);
        if (total >= 10 && kind >= 0 && kind < 5) {
            key = ability.w[kind];
            if (key != 0) {
                valid = 1;
            }
        } else {
            key = 0;
        }
        if (!W(0x38)) {
            FUN_020c3788(P(0x34), FUN_0208efa8(strings, table, 3, key), 0x48, 0xc, 2);
        }
        FUN_020c331c(0x5e, 0xb0000, 0x113000, W(0x20));
        kind = (W(8) & (0xf << 8)) >> 8;
        if (total >= 10 && kind >= 0 && (unsigned int)kind < 12 && valid == 1) {
            key = names.w[kind];
        } else {
            key = 1;
        }
        if (!W(0x38)) {
            FUN_020c3788(P(0x34), FUN_0208efa8(strings, table, 3, key), 0x48, 0x24, 2);
        }
        W(0x38) = 1;
        break;
    }
    }
}
