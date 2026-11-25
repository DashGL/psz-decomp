// flags: -O4,s
enum { E0 = 0, E1 = 1 };
extern char *FUN_02086a1c(int);
extern void FUN_020345f0(void *, void *);
extern void FUN_02036348(void *, void *, void *);
extern void FUN_02037390(int *, void *);
int FUN_020868f0(int *position) {
    int result = -1;
    int best;
    int i;
    for (i = 0; i <= 3; i++) {
        char *p = FUN_02086a1c(i);
        if (p != 0) {
            int v[3], delta[3], distance;
            FUN_020345f0(v, p + 156);
            FUN_02036348(delta, v, position);
            FUN_02037390(&distance, delta);
            if (result == -1 || ((best > distance) ? E1 : E0) != 0) {
                best = distance;
                result = i;
            }
        }
    }
    return result;
}
