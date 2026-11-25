//cpp
// flags: -O4,s
extern "C" int FUN_020514ac(signed char *s) {
    int ok = (s[0x5] & 0x1) ? 1 : 0;
    if (!ok) return 1;
    return 0;
}
