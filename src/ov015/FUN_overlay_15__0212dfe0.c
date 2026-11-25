// flags: -O4,p
extern void FUN_overlay_15__0212546c(int, int, int, int);
struct Map14_0212dfe0 { unsigned char m[14]; };
struct Rect4_0212dfe0 { unsigned short a, b, c, d; };
extern const struct Map14_0212dfe0 DAT_0213a3dc;
extern struct { unsigned char mode; unsigned char pad; unsigned char sub; } DAT_0213e86c;
extern const struct Rect4_0212dfe0 DAT_0213a466[];
extern const struct Rect4_0212dfe0 DAT_0213a46a[];
extern const struct Rect4_0212dfe0 DAT_0213a468[];
void FUN_overlay_15__0212dfe0(void) {
    struct Map14_0212dfe0 map = DAT_0213a3dc;
    struct Rect4_0212dfe0 rect;
    int index = map.m[DAT_0213e86c.mode];
    if (index >= 3) {
        FUN_overlay_15__0212546c(3, DAT_0213a466[index].a, DAT_0213a46a[index].a, DAT_0213a468[index].a);
        return;
    }
    rect = DAT_0213a466[index];
    rect.b += 29 * DAT_0213e86c.sub;
    FUN_overlay_15__0212546c(1, rect.a, rect.c, rect.b);
}
