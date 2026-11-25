//cpp
// flags: -O4,s
extern "C" void FUN_02037390(int *, const int *);
extern int DAT_0219b5e8;
extern "C" int FUN_overlay_26__02199c0c(void *self, const int *vector) {
    int magnitude;
    FUN_02037390(&magnitude, vector);
    int ok = (magnitude <= DAT_0219b5e8) ? 1 : 0;
    if (ok) {
        return 1;
    }
    return 0;
}
