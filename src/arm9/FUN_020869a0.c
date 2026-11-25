// flags: -O4,s
extern int UNK_020fc988;
extern int UNK_020fc958[];
extern void FUN_02036348(void *, void *, void *);
extern void FUN_02036368(void *);
#pragma thumb off
extern unsigned short FUN_0205cc08(int);
#pragma thumb on

enum { E0 = 0, E1 = 1 };

unsigned short FUN_020869a0(void *origin, int angle, void *target) {
    int v[3];
    unsigned short result;

    FUN_02036348(v, target, origin);
    v[1] = UNK_020fc988;
    if (((v[0] != UNK_020fc958[0] || v[1] != UNK_020fc958[1] || v[2] != UNK_020fc958[2]) ? E1 : E0) != 0) {
        FUN_02036368(v);
        result = FUN_0205cc08(v[2]);
        if (((v[0] < UNK_020fc988) ? E1 : E0) != 0) {
            result = 65536 - result;
        }
        return result - angle;
    }
    return 0;
}
