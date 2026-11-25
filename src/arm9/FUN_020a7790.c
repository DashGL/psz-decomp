// flags: -O4,s
struct Grid { int pad; unsigned char cells[48 * 128]; unsigned char val; };
extern int FUN_020a76e8(int, int);
void FUN_020a7790(struct Grid *self, int x, int y) {
    int row, col;
    for (row = y; row <= y + 1; row++) {
        for (col = x; col <= x + 1; col++) {
            if (FUN_020a76e8(col, row)) {
                unsigned char v = self->val;
                self->cells[(unsigned int)(col + (row << 7))] = v;
            }
        }
    }
}
