// flags: -O3,s
typedef struct { unsigned int bits; unsigned short tile, pad; } Attribute;
typedef struct { unsigned short glyph, b, c, pad; int x, y; } Draw;

extern char UNK_0211c90c[];
extern signed char UNK_020fc1dc[];
extern unsigned char UNK_020f4e5c[];
extern void *UNK_0211a994[];

#pragma thumb off
extern void FUN_02012e70(void *, void *, int);
extern void FUN_0206557c(unsigned int, void *, unsigned int);
#pragma thumb on

extern int FUN_020bc26c(unsigned short *, unsigned short *);
extern int FUN_020a52e0(void *);
extern int FUN_020969fc(void *);
extern int FUN_02096a10(void *);
extern void FUN_020a6020(void *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
extern void FUN_020c32b4(void *, int);
extern void FUN_020a74e8(void *);
extern void FUN_02071d0c(void *);
extern void FUN_020a7170(void *, void *, int, void *);
extern void FUN_020ba8c4(void *);
extern void FUN_020a4be0(void *);
extern void FUN_020a73a0(void *, int);
extern void FUN_020c193c(int, int, int, int, int);
extern void FUN_020a5148(void *, int);
extern void FUN_020a6e68(void *);
extern void FUN_020a4ef4(void *);
extern void FUN_020a737c(void *);
extern void FUN_020a73e8(void *, int);
extern void FUN_020a7014(void *);
extern void FUN_0208bd14(void *);
extern void *FUN_020ba8bc(unsigned int, unsigned int);
extern void *FUN_020a5240(void);
extern void *FUN_020aff68(void *, int);
extern void *FUN_02096488(void);
extern void *FUN_0208bce4(void);
extern unsigned char *FUN_020a9834(void *, int);

#define W(n) (*(int *)(self + (n)))
#define P(n) (*(char **)(self + (n)))

void FUN_020a681c(char *self) {
    Attribute drag[2];
    Draw draw1, draw2, draw3, draw4;
    unsigned short xy[2];
    int row, i, tile, old, selection, index;
    void *buffer, *panel;
    unsigned char *entry;

    if (W(228) >= 0) {
        xy[1] = 0;
        xy[0] = 0;
        if (FUN_020bc26c(xy + 1, xy)) {
            int by, bx, dy;
            row = W(212) - 7;
            by = 48 * row + 36;
            bx = 108;
            bx += xy[1] - W(220);
            dy = xy[0] - W(224);
            for (i = 0; i < 2; i++) {
                tile = (29 * 4096 + ((i + 2 * row) * 4096) / 2) / 128;
                FUN_020a6020(drag + i, bx + 64 * i, by + dy, 0, 0, 0, 0, 0xc0000000U, 0, tile, 0, 0);
            }
            FUN_02012e70(UNK_0211c90c, drag, 2);
        }
    }

    FUN_02012e70(UNK_0211c90c, self + 256, 6);
    FUN_020c32b4(self + 332, W(248));
    if (W(60)) return;

    switch ((unsigned int)W(244)) {
    case 0:
        FUN_020a74e8(self);
        break;
    case 1:
    case 2:
    case 3:
        if (W(328) == 1 && W(316) == 2) {
            row = UNK_020fc1dc[1] - *(int *)(P(252) + 8);
            if (row >= 0 && row < 3) {
                FUN_02071d0c(&draw1);
                draw1.glyph = 9;
                draw1.x = 29 << 14;
                draw1.y = (228 + 48 * row) << 12;
                FUN_020c32b4(&draw1, W(56));
            }
        }
        if (*(int *)(P(252) + 16)) {
            buffer = FUN_020ba8bc(4096, 32);
            if (buffer) {
                FUN_0206557c(0, buffer, 4096);
                *(int *)(P(252) + 16) = 0;
                for (i = 0; i < 3; i++) {
                    FUN_020a7170(self, FUN_020aff68(P(252), i), i, buffer);
                }
                FUN_020ba8c4(buffer);
            }
        }
        break;
    }

    old = W(232);
    FUN_020a4be0(self);
    if (W(316) != 3 && old != W(232)) {
        selection = -1;
        if (W(232) >= 0) {
            if (W(232) == 0) {
                selection = 5;
            } else if (W(232) == 1) {
                selection = 6;
            } else if (W(232) == 2) {
                selection = W(244) == 3 ? 9 : 7;
            }
        }
        FUN_020a73a0(self, selection);
    }

    switch ((unsigned int)W(244)) {
    case 0:
        for (i = 0; i < 3; i++) {
            entry = FUN_020a9834(FUN_020a5240(), i);
            if (entry) {
                FUN_02071d0c(&draw2);
                draw2.glyph = UNK_020f4e5c[entry[769]];
                draw2.x = 29 << 14;
                draw2.y = (228 + 48 * i) << 12;
                FUN_020c32b4(&draw2, W(56));
            }
        }
        if (*(int *)((char *)FUN_020a5240() + 28)) {
            buffer = FUN_020ba8bc(4096, 32);
            if (buffer) {
                FUN_0206557c(0, buffer, 4096);
                *(int *)((char *)FUN_020a5240() + 28) = 0;
                for (i = 0; i < 3; i++) {
                    entry = FUN_020a9834(FUN_020a5240(), i);
                    if (entry) {
                        FUN_020a7170(self, entry, i, buffer);
                    } else {
                        { unsigned char *dst = (unsigned char *)0x06600000; dst += (i << 12) + 0x1d000; FUN_0206557c(0, dst, 4096); }
                    }
                }
                FUN_020ba8c4(buffer);
            }
        }
        if (FUN_020a52e0(self)) {
            FUN_020c193c(0, 1, 0, 0, -1);
            FUN_020a5148(self, 0);
            return;
        }
        if (W(236)) {
            FUN_020a6e68(self);
            FUN_020a4ef4(self);
        }
        break;
    case 1:
        if (FUN_020a52e0(self)) {
            FUN_020c193c(0, 1, 0, 0, -1);
            panel = UNK_0211a994[1];
            if (panel) FUN_020a5148(panel, 1);
            return;
        }
        break;
    case 3:
        FUN_02071d0c(&draw3);
        draw3.glyph = 4;
        draw3.x = 5 << 12;
        draw3.y = 0x13a000;
        FUN_020c32b4(&draw3, W(56));
        W(348) = FUN_020969fc(FUN_02096488());
        W(352) = FUN_02096a10(FUN_02096488());
        for (i = 0; i < 2; i++) {
            index = ((int *)(self + 348))[i];
            if (index >= 0) {
                row = index - *(int *)(P(252) + 8);
                if (row >= 0 && row < 3) {
                    FUN_02071d0c(&draw4);
                    draw4.glyph = 13;
                    draw4.x = 29 << 14;
                    draw4.y = (228 + 48 * row) << 12;
                    FUN_020c32b4(&draw4, W(56));
                }
            }
        }
    case 2:
        if (FUN_020a52e0(self)) {
            FUN_020c193c(0, 1, 0, 0, -1);
            panel = UNK_0211a994[1];
            if (panel) FUN_020a737c(panel);
            return;
        }
        if (W(236)) {
            switch (W(232)) {
            case 1:
                W(328) = 1;
                break;
            case 2:
                W(328) = 2;
                FUN_020a73e8(self, W(228) - 7);
                break;
            case 0:
            default:
                W(328) = 0;
                break;
            }
            FUN_020a7014(self);
            FUN_020a4ef4(self);
        }
        break;
    }

    panel = FUN_0208bce4();
    if (panel) FUN_0208bd14(panel);
}
