// flags: -O4,s
struct Rec { unsigned char pad[2]; unsigned char bit; unsigned char row; };
int FUN_overlay_12__0212d320(const unsigned char (*p)[3], const struct Rec *record) {
    unsigned char bit = record->bit;
    unsigned int row = record->row;
    unsigned int col = bit / 8U;
    if (col < 3 && row < 4) {
        unsigned char b = p[row][col];
        if ((b & (unsigned char)(1 << (bit & 7))) == 0) return 0;
        return 1;
    }
    return 0;
}
