// flags: -O4,s
typedef struct { short glyph, a, b, pad; int x, y; } Draw;
typedef struct { const char *rows; int count; } Table;
typedef struct {
    unsigned char pad00[0x18];
    int idx;
    unsigned char pad1c[0x2a0];
    int items[16];
} Menu;
extern const int data_02137b8c[];
extern int FUN_overlay_12__02120570(void *, int), FUN_overlay_12__0212058c(void *, int), FUN_overlay_12__021205ec(void *, int), FUN_overlay_12__0212d3b8(void *, int, int);
extern void *FUN_02031a74(void), *FUN_02031c98(void *), *FUN_020a0ce8(void);
extern const char *FUN_02032208(void *, int, int, int, int);
extern const unsigned char *FUN_020942dc(const void *, int);
extern unsigned FUN_020c3f6c(const char *, unsigned);
extern void FUN_020c38f0(void *, int), FUN_020c3788(void *, const char *, int, int, int), FUN_02090b44(void *), FUN_020c32b4(void *, int);

void FUN_overlay_12__0211ef10(int *self, int mode)
{
    Menu *menu = (Menu *)self[4];
    int category, selected, id, index, count, i;
    signed char draw_index;
    const Table *owner;
    const char *rows, *row, *text;
    Draw draw;
    if (menu && (unsigned)mode - 2u <= 1) {
        selected = menu->items[menu->idx - 1];
        category = FUN_overlay_12__02120570(menu, mode);
        id = FUN_overlay_12__0212058c((void *)self[4], mode);
        index = FUN_overlay_12__021205ec((void *)self[4], mode);
        if (self[3] != index) {
            const Table *entry;
            self[3] = index;
            owner = (const Table *)FUN_02031c98(FUN_02031a74());
            if (!owner) return;
            entry = &owner[category];
            rows = entry->rows;
            {
                int found = -1;
                if (rows) {
                    int j;
                    for (j = 0; j < entry->count; j++) {
                        if (*(const int *)(rows + 56 * j + 36) == id) {
                            found = j;
                            break;
                        }
                    }
                }
                if (!rows || found == -1) return;
                row = rows + 56 * found;
            }
            text = FUN_02032208(FUN_02031a74(), id, category, 1, *(const signed char *)(row + 51));
            FUN_020c38f0(self + 7, 0);
            FUN_020c3788(self + 7, text, 95, 66, 2);
            *(short *)((char *)self + 22) = *(const signed char *)(row + 52) - 1;
            *(short *)((char *)self + 20) = FUN_020942dc(row, selected)[9] - 1;
            text = FUN_02032208(FUN_02031a74(), *(const int *)(row + 36), category, 0, *(const signed char *)(row + 50));
            self[6] = 70 - ((FUN_020c3f6c(text, 255) * 5u) >> 1);
            FUN_020c3788(self + 7, text, self[6] + 95, 45, 2);
        }
        draw.glyph = 0; draw.a = 0; draw.b = 0;
        FUN_02090b44(&draw);
        draw.x = (unsigned)self[6] * 4096u + (76 << 12);
        draw.y = 237 << 12;
        category = FUN_overlay_12__02120570((void *)self[4], mode);
        if (category == 1) {
            draw.glyph = 8;
            FUN_020c32b4(&draw, self[0]);
        } else if (category == 2 && !FUN_overlay_12__0212d3b8((char *)FUN_020a0ce8() + 404, id, selected)) {
            draw.glyph = 9;
            FUN_020c32b4(&draw, self[0]);
        }
        for (draw_index = 0; draw_index < 3; draw_index++) {
            FUN_02090b44(&draw);
            draw.x = data_02137b8c[2 * draw_index];
            draw.y = data_02137b8c[2 * draw_index + 1];
            switch (draw_index) {
            case 0:
                draw.glyph = *(unsigned short *)((char *)self + 22);
                FUN_020c32b4(&draw, self[1]);
                break;
            case 1:
                draw.glyph = *(unsigned short *)((char *)self + 20);
                FUN_020c32b4(&draw, self[0]);
                break;
            case 2:
                draw.glyph = 7;
                FUN_020c32b4(&draw, self[0]);
                break;
            }
        }
    } else {
        self[3] = -1;
        FUN_020c38f0(self + 7, 0);
    }
}
