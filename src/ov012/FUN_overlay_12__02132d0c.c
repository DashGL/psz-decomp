// flags: -O4,s
extern int DAT_overlay_12__0213f2e0;
extern const int DAT_overlay_12__0213ba6c[];
extern int FUN_02084900(const void *), FUN_02084944(const void *), FUN_overlay_12__0213221c(const void *), FUN_overlay_12__02131ad0(int);
extern void *FUN_02079114(void);
extern void FUN_02079160(void *, const void *, unsigned short, int, int, int, int, int, int);
extern void FUN_02071d0c(void *), FUN_02090b44(void *), FUN_020c32b4(void *, int);
typedef struct { short a, b; int c, x, y; } Draw;

void FUN_overlay_12__02132d0c(int *self, const void *item)
{
    int handle, graphic, quantity, color;
    unsigned ready;
    int pos[2];
    Draw draw;
    if (!FUN_02084900(item)) return;
    ready = (DAT_overlay_12__0213f2e0 == 0);
    if (!ready) return;
    switch (self[19]) {
    case 0: graphic = 3; handle = FUN_overlay_12__02131ad0(3); break;
    case 1: graphic = 9; handle = FUN_overlay_12__02131ad0(5); break;
    default: return;
    }
    if (handle == -1) return;
    quantity = FUN_overlay_12__0213221c(item);
    pos[0] = DAT_overlay_12__0213ba6c[20];
    pos[1] = DAT_overlay_12__0213ba6c[21];
    color = quantity >= FUN_02084944(item) ? 4 : 2;
    FUN_02079160(FUN_02079114(), pos, (unsigned short)color, 2, quantity, FUN_overlay_12__02131ad0(1), -1, 8, 0);
    FUN_02071d0c(&draw);
    FUN_02090b44(&draw);
    draw.x = 0x2000;
    draw.y = 0x96000;
    draw.a = graphic;
    FUN_020c32b4(&draw, handle);
}
