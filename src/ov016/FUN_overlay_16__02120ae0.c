//cpp
// flags: -O4,s
extern "C" unsigned char DAT_020eb9d8[];
extern "C" int FUN_overlay_16__02120ae0(int value) {
    int outside = 1;
    if (value >= 0 && value < 128) outside = 0;
    if (!outside) value = DAT_020eb9d8[value];
    switch ((signed char)value) {
    case 78: return 1;
    case 87: return 3;
    case 83: return 4;
    case 67: return 2;
    case 69: return 5;
    default: return 0;
    }
}
