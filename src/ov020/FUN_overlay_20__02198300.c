//cpp
// flags: -O4,s
extern "C" void FUN_overlay_20__02198300(unsigned int *p, int *target) {
    int ok = (p[59] & 64) ? 1 : 0;
    if (ok) {
        target[50] = (int)(((long long)target[50] * 6144 + 2048) >> 12);
    }
}
