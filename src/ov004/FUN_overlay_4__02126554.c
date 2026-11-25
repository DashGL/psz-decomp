// flags: -O4,s
extern void FUN_02071d0c(void *);
extern void FUN_020c32b4(void *, int);
void FUN_overlay_4__02126554(int *p) {
    int t[4];
    FUN_02071d0c(t);
    switch (p[0]) {
    case 7:
        if (p[29] >= 0) {
            *(short *)t = 4;
            t[2] = 0xad000;
            t[3] = (p[29] * 13 + 250) << 12;
            FUN_020c32b4(t, p[37]);
        }
        break;
    case 9:
        *(short *)t = 5;
        t[2] = 0xad000;
        t[3] = 0xfa000;
        FUN_020c32b4(t, p[37]);
        break;
    }
}
