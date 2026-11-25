// flags: -O4,s
typedef struct {
    unsigned short h[4];
    int x, y;
} Desc_0211eb04;
#pragma thumb off
extern void FUN_020144f0(void);
extern void FUN_02014714(void);
#pragma thumb reset
extern void FUN_02071d0c(void *);
extern void FUN_02090b44(void *);
extern void FUN_020c32b4(void *, int);
void FUN_overlay_18__0211eb04(int *self) {
    Desc_0211eb04 right, left;
    int i;
    FUN_020144f0();
    for (i = 0; i < self[23]; i++) {
        int y;
        FUN_02071d0c(&right);
        FUN_02090b44(&right);
        right.h[0] = 8;
        right.x = 851968;
        y = (24 * i + 12) << 12;
        right.y = y;
        right.y = y + 786432;
        if (i == self[18] && self[21] > 0) {
            self[21]--;
            right.x += 8192;
        }
        FUN_020c32b4(&right, self[17]);
        FUN_02071d0c(&left);
        FUN_02090b44(&left);
        left.h[0] = 7;
        left.x = 655360;
        left.y = y;
        left.y = y + 786432;
        if (i == self[18] && self[21] < 0) {
            self[21]++;
            left.x -= 8192;
        }
        FUN_020c32b4(&left, self[17]);
    }
    FUN_02014714();
}
