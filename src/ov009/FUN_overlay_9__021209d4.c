// flags: -O4,s
struct Cell { unsigned int a; unsigned int b; };
extern struct Cell DAT_02120f34[4][3];
extern struct Cell DAT_02120eb0;
void *FUN_overlay_9__021209d4(int *p) {
    int row = p[1];
    if (row >= 0 && row < 4) {
        int col = p[14];
        if (col >= 0 && col < 3) {
            return &DAT_02120f34[row][col];
        }
    }
    return &DAT_02120eb0;
}
