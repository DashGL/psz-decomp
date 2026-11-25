//cpp
// flags: -O4,s
extern "C" void FUN_02037910(void *, int);
extern "C" void FUN_overlay_29__02199afc(void *, int);
extern "C" void FUN_overlay_29__02199874(int *p, int unused1, int unused2, int value) {
    int same = (p[16] == p[2]) ? 1 : 0;
    if (same == 1) return;
    if (value == -1) return;
    FUN_02037910(p, p[14]);
    FUN_overlay_29__02199afc(p, 4);
}
