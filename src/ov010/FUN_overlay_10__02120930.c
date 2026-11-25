// flags: -O4,s
extern const signed char DAT_overlay_10__02122c18[6][3];
extern void FUN_overlay_10__02120bd0(void *), FUN_overlay_10__02120bbc(void *), FUN_overlay_10__02120c20(void *), FUN_overlay_10__02121060(unsigned, unsigned), FUN_overlay_10__02120f68(void);
extern int FUN_overlay_10__02120b7c(void *, unsigned *);
int FUN_overlay_10__02120930(char *self, unsigned short *event)
{
    int x = *(short *)(self + 80), y, key, index, result;
    unsigned number[2];
    if (x < 0 || x >= 3 || (y = *(short *)(self + 82)) < 0 || y >= 6) return 0;
    key = DAT_overlay_10__02122c18[y][x];
    switch (*(unsigned *)(self + 72)) {
    case 0:
        if (key >= 0 && key <= 9) {
            if (*(int *)(self + 76) >= 12) *(int *)(self + 76) = 11;
            index = *(int *)(self + 76);
            if (index >= 0 && index < 12) {
                *(self + index + 88) = key;
                *(unsigned *)(self + 76) += 1;
                FUN_overlay_10__02120bd0(self);
            }
        } else if (key == 10) {
            index = *(int *)(self + 76);
            if (index > 0) {
                index--;
                *(int *)(self + 76) = index;
                *((signed char *)self + index + 88) = -1;
                FUN_overlay_10__02120bd0(self);
            }
        } else if (key == 11) {
            *(unsigned *)(self + 76) = 0;
            FUN_overlay_10__02120bbc(self);
            FUN_overlay_10__02120bd0(self);
        } else if (key == 12) {
            number[0] = 0;
            number[1] = 0;
            result = FUN_overlay_10__02120b7c(self, number);
            if (result >= 0) {
                event[0] = 7;
                event[1] = 5;
                *(int *)(event + 2) = result;
                FUN_overlay_10__02121060(number[0], number[1]);
            } else {
                switch (result) {
                case -2: *(unsigned *)(self + 72) = 2; break;
                case -5: case -3: *(unsigned *)(self + 72) = 1; break;
                case -4: *(unsigned *)(self + 72) = 3; break;
                default: *(unsigned *)(self + 72) = 1; break;
                }
                FUN_overlay_10__02120c20(self);
            }
        } else if (key == 13) {
            event[0] = 5;
            event[1] = 0;
            FUN_overlay_10__02120f68();
        }
        break;
    case 1:
    case 2:
        *(unsigned *)(self + 72) = 0;
        FUN_overlay_10__02120c20(self);
        break;
    case 3:
        event[0] = 5;
        event[1] = 0;
        FUN_overlay_10__02120f68();
        break;
    }
    return 1;
}
