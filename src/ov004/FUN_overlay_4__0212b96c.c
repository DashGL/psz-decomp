// flags: -O4,s
typedef struct { unsigned short kind, a, b, padding; int x, y; } Draw;
extern unsigned short DAT_overlay_4__0212e4d8[];
extern void FUN_020a1e20(int *, int, int, int, int);
extern int FUN_020c2e38(void), FUN_020bc220(const int *);
extern int FUN_overlay_4__0212bb28(void *), FUN_overlay_4__0212bb70(void *), FUN_overlay_4__0212bb04(void *), FUN_overlay_4__0212bb4c(void *);
extern int FUN_overlay_4__0212bbb0(void *, unsigned int);
extern void FUN_020c193c(int, int, int, int, int), FUN_020c32b4(const Draw *, int), FUN_020a5000(int);

void FUN_overlay_4__0212b96c(int *self) {
    Draw d;
    int upper[4], lower[4];
    if (self[0] == -1) return;
    d.kind = 0; d.a = 0; d.b = 0;
    FUN_020a1e20(upper, 220, 100, 32, 40);
    FUN_020a1e20(lower, 220, 145, 32, 40);
    if (!FUN_020c2e38()) {
        if (FUN_020bc220(upper) && self[1] == 0) {
            if (FUN_overlay_4__0212bb28(self) != -1) {
                FUN_020c193c(0, 17, 0, 0, -1);
                self[2] = 1;
                self[3] = 0;
            }
        } else if (FUN_020bc220(lower) && self[2] == 0) {
            if (FUN_overlay_4__0212bb70(self) != -1) {
                FUN_020c193c(0, 17, 0, 0, -1);
                self[1] = 1;
                self[3] = 0;
            }
        }
    }
    if (FUN_overlay_4__0212bb28(self) != -1) {
        d.kind = FUN_overlay_4__0212bb04(self);
        d.x = 0xdf000; d.y = 0x13a000;
        FUN_020c32b4(&d, self[0]);
        d.kind = DAT_overlay_4__0212e4d8[self[2]];
        d.x = 0xdc000; d.y = 0x124000;
        FUN_020c32b4(&d, self[0]);
    }
    if (FUN_overlay_4__0212bb70(self) != -1) {
        d.kind = FUN_overlay_4__0212bb4c(self);
        d.x = 0xdf000; d.y = 0x168000;
        FUN_020c32b4(&d, self[0]);
        d.kind = DAT_overlay_4__0212e4d8[self[1]];
        d.x = 0xdc000; d.y = 0x151000;
        FUN_020c32b4(&d, self[0]);
    }
    if (self[2]) {
        self[3]++;
        if (self[3] > 3) FUN_020a5000(FUN_overlay_4__0212bbb0(self, FUN_overlay_4__0212bb28(self)));
    } else if (self[1]) {
        self[3]++;
        if (self[3] > 3) FUN_020a5000(FUN_overlay_4__0212bbb0(self, FUN_overlay_4__0212bb70(self)));
    }
}
