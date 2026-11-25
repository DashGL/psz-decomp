// flags: -O4,p
typedef struct { unsigned short x, y, w, h; } Rect;
extern int FUN_overlay_15__02136a68(const void *), FUN_overlay_15__02136b88(const void *);
#pragma thumb off
extern int FUN_0205c700(int, int);
#pragma thumb on

extern char DAT_overlay_15__0213a81c[];
extern struct {
    int pad0;
    unsigned short scroll;
} DAT_overlay_15__0213e86c;
extern const struct {
    int pad0;
    Rect r0;
    Rect r1;
    Rect r2;
} DAT_overlay_15__0213a3c0;
extern unsigned char DAT_overlay_15__0213a4a0[];
extern Rect DAT_overlay_15__0213a44e[];

int FUN_overlay_15__0212dcf0(void)
{
    Rect rect;
    int first, i, current;
    if (!FUN_overlay_15__02136a68(DAT_overlay_15__0213a81c)) return 14;
    first = FUN_0205c700(DAT_overlay_15__0213e86c.scroll, 29);
    rect = DAT_overlay_15__0213a3c0.r0;
    for (i = 0; i < 4; i++, first++) {
        if (first != 2 && first != 6 && FUN_overlay_15__02136b88(&rect))
            return DAT_overlay_15__0213a4a0[first];
        rect.y += 29;
    }
    first = FUN_0205c700(DAT_overlay_15__0213e86c.scroll, 29);
    for (i = 0, current = first; i < 4; i++, current++) {
        if (current == 2) {
            rect = DAT_overlay_15__0213a3c0.r2;
            rect.y += i * 29;
            if (FUN_overlay_15__02136b88(&rect)) return 2;
            rect = DAT_overlay_15__0213a3c0.r1;
            rect.y += i * 29;
            if (FUN_overlay_15__02136b88(&rect)) return 3;
            break;
        }
    }
    first = FUN_0205c700(DAT_overlay_15__0213e86c.scroll, 29);
    for (i = 0, current = first; i < 4; i++, current++) {
        if (current == 6) {
            rect = DAT_overlay_15__0213a3c0.r2;
            rect.y += i * 29;
            if (FUN_overlay_15__02136b88(&rect)) return 7;
            rect = DAT_overlay_15__0213a3c0.r1;
            rect.y += i * 29;
            if (FUN_overlay_15__02136b88(&rect)) return 8;
            break;
        }
    }
    for (i = 0; i < 3; i++)
        if (FUN_overlay_15__02136a68(&DAT_overlay_15__0213a44e[i])) return i + 11;
    return 14;
}
