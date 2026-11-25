// flags: -O4,s
enum { E0 = 0, E1 = 1 };
extern char *FUN_020a0ce8(void);
extern void FUN_overlay_12__02130a88(void *);
extern void FUN_overlay_12__0212d488(void *, int);
extern void FUN_overlay_12__0212d51c(void *, int);
extern void FUN_overlay_12__0212c9a0(void);
extern void FUN_overlay_12__0212d63c(const void *, int);
extern void FUN_overlay_12__0212c8f8(const void *, int, int, int);
extern void FUN_02071d0c(void *);
extern void FUN_02090b44(void *);
extern void FUN_020c32b4(void *, int);
extern int FUN_overlay_12__02131ad0(int);
extern void *FUN_overlay_12__0212d268(int, int);
typedef struct { short a, b, c, pad; int x, y; } Draw;
void FUN_overlay_12__02130ab8(int *self) {
    char *progress = FUN_020a0ce8() + 604;
    Draw draw;
    int index, row;
    FUN_overlay_12__02130a88(self);
    FUN_overlay_12__0212d488(self + 33, 0);
    FUN_overlay_12__0212d51c(self + 33, 0);
    if (self[18] <= 0) {
        if (self[37]) {
            self[37] = 0;
            FUN_overlay_12__0212c9a0();
            FUN_overlay_12__0212d63c(FUN_overlay_12__0212d268(0, 18), 2);
        }
    } else {
        FUN_02071d0c(&draw);
        FUN_02090b44(&draw);
        index = self[36];
        for (row = 0; row < 5 && index < self[18]; row++, index++) {
            if ((((*(unsigned *)(progress + 720) & (1u << self[index + 19])) != 0) ? E1 : E0) != 0) {
                draw.x = 0x1d000;
                draw.y = (row * 16 + 69) << 12;
                draw.a = 18;
                FUN_020c32b4(&draw, FUN_overlay_12__02131ad0(4));
            }
        }
        if (self[37]) {
            self[37] = 0;
            FUN_overlay_12__0212c9a0();
            index = self[36];
            for (row = 0; row < 5 && index < self[18]; row++, index++)
                FUN_overlay_12__0212c8f8(FUN_overlay_12__0212d268(7, self[index + 19]), 51, row * 16 + 69, 2);
        }
    }
}
