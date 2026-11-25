// flags: -O4,s
extern signed char DAT_0211a208[];
extern void FUN_02071d0c(void *);
extern void FUN_02090b44(void *);
extern void FUN_020c32b4(void *, int);
void FUN_overlay_18__0211ec44(int *p, int index, int kind) {
    int t[4];
    FUN_02071d0c(t);
    FUN_02090b44(t);
    *(short *)t = kind;
    if (index != 6) t[2] = 0x10000;
    else t[2] = 0x33000;
    t[3] = (index * 24 + 198) << 12;
    if (DAT_0211a208[1] == 1 && kind == 6) t[3] = 0x149000;
    FUN_020c32b4(t, p[17]);
}
