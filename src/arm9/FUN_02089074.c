// flags: -O4,s
typedef struct { unsigned int w[4]; } Item;
typedef struct { unsigned short glyph, b, c, pad; int x, y; } Draw;
typedef struct { unsigned short glyph, pad; int x, y; } Row;
typedef struct { int x, y; } Pos;
typedef struct { unsigned char b[4]; } Key4;
typedef struct {
    unsigned char pad0[6];
    signed char f6;
    unsigned char f7;
    unsigned short kind : 6;
    unsigned short pad8 : 10;
    unsigned short f10;
} ItemData;

extern int UNK_020f3e04[], UNK_020f3e84[];
extern Row UNK_020f3ed4, UNK_020f3ee0;

extern void *FUN_02086e3c(void);
extern void *FUN_02079114(void);
extern void *FUN_02077f3c(void);
extern Item *FUN_020b07b0(void *);
extern Item *FUN_020b0828(void *);
extern Item *FUN_020b08a0(void *);
extern int FUN_02087138(void *);
extern int FUN_02078038(void *);
extern unsigned char *FUN_020870c4(void *);
extern ItemData *FUN_02084568(void *);
extern int FUN_020848e0(int, int);

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

extern void FUN_02071d0c(void *);
extern void FUN_020b6200(void *, void *);
extern void FUN_0203955c(void *);
extern void FUN_0208971c(void *, void *);
extern void FUN_020c32b4(void *, int);
extern void FUN_02079160(void *, void *, int, int, int, int, int, int, int);
extern void FUN_020c331c(int, int, int, int);
extern void FUN_020c38f0(void *, int);
extern void FUN_0208bbc0(void *, int, int, int, int, int);
extern void FUN_0207803c(void *, void *);
extern void FUN_0207920c(void *, int, int, unsigned short, int, int, int);
extern void FUN_0208b2a4(void *);
extern void FUN_0208b3e4(void *, int);

#define W(o) (*(int *)(s + (o)))
#define P(o) (*(void **)(s + (o)))

void FUN_02089074(unsigned char *s)
{
    Item all[5];
    Item first, second, third, empty;
    Draw draw;
    Row row1, row2;
    Draw small2, small3;
    Pos pos;
    Pos left, mid, right;
    Pos mid2, pos2, pos3;
    Key4 head;
    void *renderer;
    unsigned char *player;
    int extraBase, extraValue, offset;
    int base, value, color, mode, glyph, kind;
    ItemData *data;
    int flag;

    renderer = FUN_02079114();
    if (!renderer || !FUN_02087138(FUN_02086e3c()) || !P(92)) {
        return;
    }

    player = FUN_020870c4(FUN_02086e3c());
    first = *FUN_020b07b0(FUN_02086e3c());
    second = *FUN_020b0828(FUN_02086e3c());
    third = *FUN_020b08a0(FUN_02086e3c());
    FUN_020b6200(P(92), all);
    FUN_0203955c(&empty);
    if (!P(92)) {
        return;
    }

    FUN_02071d0c(&draw);
    if (!W(56)) {
        FUN_020c38f0(P(48), 0);
        FUN_020c38f0(P(52), 0);
        FUN_0208bbc0(s, 8, s[1] - 1, 0, 0, 0);
        W(56) = 1;
    }

    left = *(Pos *)(UNK_020f3e04 + 27);
    *(volatile Pos *)&mid = *(Pos *)(UNK_020f3e04 + 45);
    right = *(Pos *)(UNK_020f3e04 + 41);

    if ((int)s[1] >= 14 && (int)s[1] <= 16) flag = 1; else flag = 0;
    if (flag != 0) {
        base = FUN_020b5d54(P(92), &first, -1);
        value = FUN_020b5d54(P(92), s, -1);
        if (W(40)) {
            value = FUN_020b5dd4(P(92), &empty, &third, &second, all);
        }
        FUN_020c331c(51, 720896, 0x107000, W(32));
        FUN_02079160(renderer, &left, 2, 4, base, -1, -1, 8, 0);
        FUN_0207803c(FUN_02077f3c(), &mid);
        if (value < base) color = 4;
        else if (value > base) color = 3;
        else color = 2;
        FUN_02079160(renderer, &right, (unsigned short)color, 4, value, -1, -1, 8, 0);
    } else {
        base = FUN_020b5b64(P(92), &first, -1);
        value = FUN_020b5b64(P(92), s, -1);
        if (W(40)) {
            value = FUN_020b5be4(P(92), &empty, &third, &second, all);
        }
        FUN_020c331c(47, 720896, 0x107000, W(32));
        FUN_02079160(renderer, &left, 2, 4, base, -1, -1, 8, 0);
        FUN_0207803c(FUN_02077f3c(), &mid);
        if (value < base) color = 4;
        else if (value > base) color = 3;
        else color = 2;
        FUN_02079160(renderer, &right, (unsigned short)color, 4, value, -1, -1, 8, 0);
    }

    FUN_020c331c(50, 720896, 0x11f000, W(32));
    base = FUN_020b5c64(P(92), &first, -1);
    pos.x = 720896;
    pos.y = 0x12b000;
    FUN_02079160(renderer, &pos, 2, 4, base, -1, -1, 8, 0);
    pos.x = 851968;
    FUN_0207803c(FUN_02077f3c(), &pos);
    value = FUN_020b5c64(P(92), s, -1);
    if (W(40)) {
        value = FUN_020b5ce4(P(92), &empty, &third, &second, all);
    }
    pos.x = 884736;
    if (value < base) color = 4;
    else if (value > base) color = 3;
    else color = 2;
    FUN_02079160(renderer, &pos, (unsigned short)color, 4, value, -1, -1, 8, 0);

    mode = 0;
    glyph = 255;
    extraBase = 0;
    extraValue = 0;
    offset = 0;
    head = *(Key4 *)s;
    data = FUN_02084568(&head);
    if (data) {
        kind = data->kind;
        switch (kind) {
        case 2:
            mode = 1;
            glyph = 48;
            extraBase = FUN_020b5e54(P(92), &second, -1);
            if (W(40)) extraValue = FUN_020b5eec(P(92), &empty, &third, &second, all);
            else extraValue = FUN_020b5e54(P(92), s, -1);
            break;
        case 3:
            mode = 1;
            glyph = 49;
            extraBase = FUN_020b5f5c(P(92), &second, -1);
            if (W(40)) extraValue = FUN_020b5fdc(P(92), &empty, &third, &second, all);
            else extraValue = FUN_020b5fdc(P(92), s, &third, &second, all);
            break;
        case 5:
            mode = 1;
            glyph = 51;
            extraBase = FUN_020b5d54(P(92), &first, -1);
            if (W(40)) extraValue = FUN_020b5dd4(P(92), &empty, &third, &second, all);
            else extraValue = FUN_020b5d54(P(92), s, -1);
            break;
        case 6:
            mode = 2;
            glyph = 64;
            extraBase = FUN_020848e0(kind, data->f6);
            offset = 102400;
            break;
        case 7:
            mode = 2;
            glyph = 65;
            extraBase = FUN_020848e0(kind, data->f6);
            offset = 81920;
            break;
        case 8:
            mode = 2;
            glyph = 66;
            extraBase = FUN_020848e0(kind, data->f6);
            offset = 163840;
            break;
        case 9:
            mode = 2;
            glyph = 67;
            extraBase = FUN_020848e0(kind, data->f6);
            offset = 122880;
            break;
        case 10:
            mode = 2;
            glyph = 68;
            extraBase = FUN_020848e0(kind, data->f6);
            offset = 102400;
            break;
        case 41:
            mode = 3;
            extraBase = FUN_020848e0(kind, data->f6);
            break;
        case 42:
            mode = 3;
            extraBase = FUN_020848e0(kind, data->f6);
            break;
        case 43:
            mode = 3;
            extraBase = FUN_020848e0(kind, data->f6);
            break;
        }

        switch (mode) {
        case 1:
            FUN_020c331c(glyph, 720896, 0x137000, W(32));
            FUN_0207920c(renderer, 720896, 0x143000, 2, 4, extraBase, 0);
            *(volatile Pos *)&mid2 = *(Pos *)(UNK_020f3e04 + 31);
            FUN_0207803c(FUN_02077f3c(), &mid2);
            if (extraValue < extraBase) color = 4;
            else if (extraValue > extraBase) color = 3;
            else color = 2;
            FUN_0207920c(renderer, 884736, 0x143000, (unsigned short)color, 4, extraValue, 0);
            break;
        case 2:
            FUN_020c331c(glyph, 720896, 0x137000, W(32));
            FUN_020c331c(74, 720896 + offset, 0x137000, W(32));
            FUN_0207920c(renderer, 884736, 0x143000, 2, 3, extraBase, 0);
            pos2 = *(Pos *)(UNK_020f3e04 + 35);
            FUN_02071d0c(&small2);
            small2.glyph = 2;
            FUN_0208971c(&small2.x, &pos2);
            FUN_020c32b4(&small2, FUN_02078038(FUN_02077f3c()));
            break;
        case 3:
            FUN_020c331c(71, 720896, 0x137000, W(32));
            FUN_020c331c(72, 884736, 0x137000, W(32));
            FUN_0207920c(renderer, 884736, 0x143000, 2, 3, extraBase, 0);
            pos3 = *(Pos *)(UNK_020f3e04 + 47);
            FUN_02071d0c(&small3);
            small3.glyph = 2;
            FUN_0208971c(&small3.x, &pos3);
            FUN_020c32b4(&small3, FUN_02078038(FUN_02077f3c()));
            break;
        }
    }

    if (data) {
        row1 = UNK_020f3ed4;
        row2 = UNK_020f3ee0;
        draw.glyph = row1.glyph;
        FUN_0208971c(&draw.x, &row1.x);
        FUN_020c32b4(&draw, W(32));
        draw.glyph = row2.glyph;
        FUN_0208971c(&draw.x, &row2.x);
        FUN_020c32b4(&draw, W(32));
        pos.x = 917504;
        pos.y = 0x14f000;
        value = data->f7;
        player += 0x56;
        flag = !(value > *player);
        if (flag == 1) color = 2;
        else color = 4;
        FUN_02079160(renderer, &pos, color, 3, value, -1, -1, 8, 0);
    }

    FUN_0208b2a4(s);
    if (data) {
        FUN_0208b3e4(s, (data->f10 >> 11) + 1);
    }
}
