// flags: -O4,s
enum { E0 = 0, E1 = 1 };

extern void FUN_02037910(void *, int);

void FUN_overlay_29__0219b0b4(int *p)
{
    int *c = (int *)p[1];
    int value = ((short *)c)[12];
    int limit = c[13] * 5;

    if (value > limit) {
        if (!(p[23] & 1)) {
            p[23] |= 1;
            if (((p[17] == p[2]) ? E1 : E0) == 0) {
                FUN_02037910(p, p[14]);
            }
        }
    } else if (value * 2 > limit) {
        if (!(p[23] & 2)) {
            p[23] |= 2;
            if (((p[17] == p[2]) ? E1 : E0) == 0) {
                FUN_02037910(p, p[14]);
            }
        }
    } else if (value * 3 > limit) {
        if (!(p[23] & 4)) {
            p[23] |= 4;
            if (((p[17] == p[2]) ? E1 : E0) == 0) {
                FUN_02037910(p, p[14]);
            }
        }
    } else if (value * 4 > limit) {
        if (!(p[23] & 8)) {
            p[23] |= 8;
            if (((p[17] == p[2]) ? E1 : E0) == 0) {
                FUN_02037910(p, p[14]);
            }
        }
    }
}
