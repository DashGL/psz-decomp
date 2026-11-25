// flags: -O4,s
struct Entry {
    unsigned int val : 31;
    unsigned int flag : 1;
};
int FUN_overlay_12__0212d454(struct Entry *p) {
    int i;
    for (i = 0; i < 10; i++) {
        if (p[i].val == 0) {
            return i;
        }
    }
    return 10;
}
