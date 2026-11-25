//cpp
// flags: -O4,s
extern "C" int DAT_0219b790[];
extern "C" int FUN_overlay_26__0219aaa0(unsigned int *p, int *value) {
    if (p[22] > 5) {
        p[20] = 0;
        p[22] = 0;
        return 0;
    }
    int over = (*value > DAT_0219b790[1]) ? 1 : 0;
    if (over) {
        p[20] = 0;
        p[22] = 0;
        return 0;
    }
    p[22]++;
    return 1;
}
