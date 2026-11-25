//cpp
// flags: -O4,s
extern "C" int FUN_overlay_17__02122754(int value) {
    int lower = (value >= 97 && value <= 122) ? 1 : 0;
    if (lower) {
        value -= 32;
    }
    return (signed char)value;
}
