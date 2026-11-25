// flags: -O4,s
extern void FUN_020c32b4(void *, int);
struct Pos {
    int x;
    int y;
};
struct Global_0213be28 {
    int pad[6];
    struct Pos pos;
};
extern struct Global_0213be28 DAT_0213be28;
struct Draw {
    short a, b, c, pad;
    int x, y;
};
void FUN_overlay_12__02135808(int *p) {
    if (p[3] != 2) {
        struct Draw d;
        volatile struct Pos pos;
        int i;
        int x, y;
        d.a = 0;
        d.b = 0;
        d.c = 0;
        ((volatile struct Draw *)&d)->a = 0;
        ((volatile struct Draw *)&d)->b = 0;
        ((volatile struct Draw *)&d)->c = 0;
        ((volatile struct Draw *)&d)->y = 0;
        x = ((volatile struct Global_0213be28 *)&DAT_0213be28)->pos.x;
        y = ((volatile struct Global_0213be28 *)&DAT_0213be28)->pos.y;
        ((volatile struct Draw *)&d)->x = 0;
        pos.x = x;
        pos.y = y;
        for (i = 0; i < 2; i++) {
            d.a = (i == p[5]) ? 1 : 0;
            d.y = y + ((i * 17) << 12);
            d.x = x;
            FUN_020c32b4(&d, p[6]);
        }
    }
}
