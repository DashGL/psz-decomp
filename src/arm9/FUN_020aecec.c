// flags: -O4,s
typedef unsigned short u16;
typedef unsigned int u32;

typedef struct {
    u16 glyph;
    u16 a;
    u16 b;
    u16 pad;
    int x;
    int y;
} Icon;

extern void FUN_02071d0c(Icon *);
extern void FUN_02090b44(Icon *);
extern void FUN_020c32b4(Icon *, void *);

void FUN_020aecec(char *self, void *renderer, signed char *data, int *status) {
    int year, month, day, ok;
    u16 packed;
    if (data == 0) {
        return;
    }
    {
        Icon base;
        FUN_02071d0c(&base);
        FUN_02090b44(&base);
        base.x = (*(int *)(self + 0x78) + 5) << 12;
        base.y = (*(int *)(self + 0x7c) + 6) << 12;
        if (data[0] != 0) { base.glyph = 0; } else { base.glyph = 20; }
        FUN_020c32b4(&base, renderer);
    }
    if (status[0] != 0) {
        Icon mark;
        int show = 1;
        FUN_02071d0c(&mark);
        FUN_02090b44(&mark);
        switch (status[0]) {
        case 1:
            mark.glyph = 6;
            break;
        case 2:
            mark.glyph = 4;
            break;
        case 3:
            mark.glyph = 5;
            break;
        case 4:
            if (status[1] > 0) { mark.glyph = ((volatile int *)status)[1]; } else { mark.glyph = 5; }
            break;
        case 5:
            show = 0;
            break;
        default:
            mark.glyph = 6;
            break;
        }
        if (show == 1) {
            mark.x = (*(int *)(self + 0x78) + 25) << 12;
            mark.y = (*(int *)(self + 0x7c) + 6) << 12;
            FUN_020c32b4(&mark, renderer);
        }
    }
    year = 0;
    month = 0;
    day = 0;
    packed = *(u16 *)(data + 4);
    if (packed == 0) {
        ok = 0;
    } else {
        year = (packed >> 9) & 0x7f;
        month = (packed >> 5) & 0xf;
        day = packed & 0x1f;
        ok = 1;
    }
    if (!ok) {
        return;
    }
    {
        Icon icon;
        FUN_02071d0c(&icon);
        FUN_02090b44(&icon);
        icon.y = (*(int *)(self + 0x7c) + 15) << 12;
        if (month >= 1 && month <= 12) {
            icon.x = (*(int *)(self + 0x78) + 44) << 12;
            icon.glyph = month / 10 + 7;
            FUN_020c32b4(&icon, renderer);
            icon.x += 0x8000;
            icon.glyph = month % 10 + 7;
            FUN_020c32b4(&icon, renderer);
            icon.x += 0x8000;
            icon.glyph = 17;
            FUN_020c32b4(&icon, renderer);
        }
        if (day >= 0 && day < 100) {
            icon.x += 0x8000;
            icon.glyph = day / 10 + 7;
            FUN_020c32b4(&icon, renderer);
            icon.x += 0x8000;
            icon.glyph = day % 10 + 7;
            FUN_020c32b4(&icon, renderer);
            icon.x += 0x8000;
            icon.glyph = 17;
            FUN_020c32b4(&icon, renderer);
        }
        if (year >= 0) {
            icon.x += 0x8000;
            icon.glyph = 9;
            FUN_020c32b4(&icon, renderer);
            icon.x += 0x8000;
            icon.glyph = 7;
            FUN_020c32b4(&icon, renderer);
            year %= 100;
            icon.x += 0x8000;
            icon.glyph = year / 10 + 7;
            FUN_020c32b4(&icon, renderer);
            icon.x += 0x8000;
            icon.glyph = year % 10 + 7;
            FUN_020c32b4(&icon, renderer);
        }
    }
}
