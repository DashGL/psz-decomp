// flags: -O4,p
typedef struct { int a, b; } Pair_9;
extern const Pair_9 DAT_02120e08[];
extern const Pair_9 DAT_02120df8[];
extern const int DAT_02120e18[4][2];
extern const int DAT_02120e38[4][2];
extern int FUN_0207315c(void);
extern void FUN_overlay_9__02120128(void *, int, int);

void FUN_overlay_9__02120164(int *s, int index) {
    if (index < 0 || index >= 2) return;
    if (s[2] == 0) {
        if (s[1] == 0 && FUN_0207315c() < 2) {
            s[20] = index;
            FUN_overlay_9__02120128(s, DAT_02120e08[index].a, DAT_02120e08[index].b);
            s[19] = 90;
            return;
        }
        if (s[1] == 1 && s[3]) {
            s[20] = index;
            FUN_overlay_9__02120128(s, DAT_02120df8[index].a, DAT_02120df8[index].b);
            s[19] = 90;
            return;
        }
    }
    if (s[2] >= 0 && s[2] < 4) {
        s[20] = index;
        if (s[1] == 0)
            FUN_overlay_9__02120128(s, 3, DAT_02120e18[s[2]][s[20]]);
        else
            FUN_overlay_9__02120128(s, 3, DAT_02120e38[s[2]][s[20]]);
    }
    s[19] = 90;
}
