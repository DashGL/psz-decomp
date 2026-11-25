// flags: -O4,s
typedef struct { unsigned short h[4]; int xy[2]; } Draw;
extern void FUN_02071d0c(void *), FUN_02090b44(void *), FUN_020c32b4(void *, unsigned int);
void FUN_overlay_7__0211fa0c(int *self, int selected, int count) {
    int i;
    Draw draw;
    for (i = 0; i < count; i++) {
        FUN_02071d0c(&draw);
        FUN_02090b44(&draw);
        draw.xy[0] = 0x4000;
        draw.xy[1] = (i * 16 + 28) << 12;
        draw.h[2] = 2;
        if (i == selected) {
            draw.h[0] = 1;
        } else {
            draw.h[0] = 0;
        }
        FUN_020c32b4(&draw, self[35]);
    }
}
