// flags: -O4,s
enum { E0 = 0, E1 = 1 };
extern void FUN_02037910(void *, int);
extern void FUN_overlay_19__0219b094(void *, const void *);
extern void FUN_overlay_19__0219abdc(void *);
void FUN_overlay_19__0219b2c0(int *p) {
    switch (*(signed char *)((unsigned char *)p + 112)) {
    case 1: case 2: case 3:
        FUN_02037910(p, p[13]);
        break;
    case 6:
        FUN_02037910(p, p[15]);
        break;
    case 4: case 5:
        FUN_02037910(p, p[18]);
        break;
    case 7:
        FUN_02037910(p, p[19]);
        break;
    case 14:
        if (p[36] == 1) { FUN_02037910(p, p[16]); p[36] = 0; }
        else FUN_02037910(p, p[21]);
        break;
    case 11:
        if (p[36] == 1) FUN_02037910(p, p[20]);
        else { FUN_02037910(p, p[16]); p[36] = 1; }
        break;
    case 12:
        if (p[36] == 1) { FUN_02037910(p, p[16]); p[36] = 0; }
        else FUN_02037910(p, p[20]);
        break;
    case 13:
        if (p[36] == 1) FUN_02037910(p, p[17]);
        else { FUN_02037910(p, p[16]); p[36] = 1; }
        break;
    case 8:
        FUN_02037910(p, p[22]);
        break;
    case 9:
        FUN_02037910(p, p[23]);
        break;
    case 0: case 15: case 16:
        if (((p[20] == p[2]) ? E1 : E0) == 0) FUN_02037910(p, p[20]);
        break;
    default:
        FUN_02037910(p, p[19]);
        break;
    }
    if (*(signed char *)((unsigned char *)p + 112) != 0) {
        FUN_overlay_19__0219b094((unsigned char *)p + 100, (unsigned char *)p + 112);
        FUN_overlay_19__0219abdc((unsigned char *)p + 112);
    }
}
