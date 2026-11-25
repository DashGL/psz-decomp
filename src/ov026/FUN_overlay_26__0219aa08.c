//cpp
// flags: -O4,s
extern int DAT_0219b790;
extern "C" int FUN_overlay_26__0219aa08(unsigned int *p, int *value) {
    if (p[20] == 1) {
        return 0;
    }
    int gt = (*value > DAT_0219b790) ? 1 : 0;
    if (gt) {
        return 0;
    }
    p[20] = 1;
    p[22] = 0;
    return 1;
}
