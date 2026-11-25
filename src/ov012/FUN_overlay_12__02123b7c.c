//cpp
// flags: -O4,s
extern "C" int FUN_overlay_12__02123b7c(void *unused, unsigned int value) {
    if (value != 0xffff) {
        return ((value <= 49) ? 1 : 0) || ((value >= 50 && value <= 56) ? 1 : 0);
    }
    return 0;
}
