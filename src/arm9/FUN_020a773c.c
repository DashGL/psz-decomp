// flags: -O4,s
struct Grid { int pad; unsigned char cells[128 * 128]; };
extern int FUN_020a76e8(int, int);
void FUN_020a773c(struct Grid *self, int x, int y) {
    int row, col;
    for (row = y - 1; row <= y + 1; row++) {
        for (col = x - 1; col <= x + 1; col++) {
            if (FUN_020a76e8(col, row)) {
                self->cells[(unsigned int)(col + (row << 7))] = 0;
            }
        }
    }
}
