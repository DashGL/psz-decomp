// flags: -O4,s
#pragma opt_strength_reduction off
struct Entry {
    unsigned int f[4];
    unsigned int key;
};
int FUN_overlay_12__0212be18(struct Entry *p, unsigned int value) {
    int i;
    for (i = 0; i < 8; i++) {
        if (value == p[i].key) {
            return i;
        }
    }
    return -1;
}
