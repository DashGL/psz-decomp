//cpp
// flags: -O4,s
extern "C" int FUN_020510dc(signed char *s) {
    int ok = (s[0x2] & 0x1) ? 1 : 0;
    if (!ok) return 1;
    return 0;
}
