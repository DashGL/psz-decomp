// flags: -O4,s
typedef struct {
    int x, y;
} Vec2;
typedef struct {
    unsigned short a, b, c, pad;
    int x, y;
} Draw;
extern int DAT_0213c158[];
extern void FUN_020c32b4(void *, int);
void FUN_overlay_12__0213785c(int *p) {
    int count;
    int i;
    Draw d;
    Vec2 pos;
    if (p[3] == 2) return;
    count = 0;
    d.a = 0; d.b = 0; d.c = 0;
    d.a = 0; d.b = 0; d.c = 0;
    d.y = 0; d.x = 0;
    pos = *(Vec2 *)(DAT_0213c158 + 3);
    switch (p[7]) {
    case 0: count = 2; break;
    case 1: count = 3; break;
    }
    {
        int x = pos.x;
        for (i = 0; i < count; i++) {
            d.a = (i == p[5]);
            d.x = x;
            d.y = pos.y + ((i * 17) << 12);
            FUN_020c32b4(&d, p[8]);
        }
    }
}
