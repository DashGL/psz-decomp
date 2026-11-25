// flags: -O4,s
typedef struct { int rows; int columns; unsigned char *entries; } Table;
extern unsigned char DAT_0213bc54[];
extern int FUN_overlay_12__0213417c(void *);
void *FUN_overlay_12__02134550(unsigned char *self, unsigned char *key) {
    int b3, b2, b1; Table *table; int row; int column;
    if (*(Table **)(self + 20)) {
        int category = key[0];
        if (category >= 0 && category <= 3) {
            column = key[1];
            row = FUN_overlay_12__0213417c(key) ? 0 : key[3];
            
            table = *(Table **)(self + 20) + category;
            b3 = 0; b2 = 0; b1 = 0;
            if (row < 0) goto L1;
            if (row >= table->rows) goto L1;
            b1 = 1;
        L1:
            if (b1 && column >= 0) b2 = 1;
            if (b2 && column < table->columns) b3 = 1;
            if (b3) return table->entries + 8 * (row * table->columns + column);
        }
    }
    return DAT_0213bc54;
}
