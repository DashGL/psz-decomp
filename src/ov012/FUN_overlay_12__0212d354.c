// flags: -O4,s
struct Table {
    unsigned char grids[16][12];
    unsigned char extra[8];
};
extern int FUN_overlay_12__0212d320(const unsigned char *, const unsigned char *);
int FUN_overlay_12__0212d354(const struct Table *table, const unsigned char *key) {
    unsigned int category = (unsigned int)key[1] - 1;
    if (category < 16) return FUN_overlay_12__0212d320(table->grids[category], key);
    if (category == 16) {
        unsigned int bit = key[3];
        unsigned int group = bit >> 3;
        if (group < 8) {
            unsigned char b = table->extra[group];
            unsigned char m = (unsigned char)(1 << (bit & 7));
            if (b & m) return 1;
            return 0;
        }
    }
    return 0;
}
