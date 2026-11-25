// flags: -O4,s
int FUN_020bcd54(int *xmin, int *ymin, int *xmax, int *ymax, int *point) {
    int outsideLowY = 1, outsideHighY = 1, outsideX = 1; if (point[0] <= *xmax && point[0] >= *xmin) outsideX = 0; if (!outsideX && point[1] <= *ymax) outsideHighY = 0; if (!outsideHighY && point[1] >= *ymin) outsideLowY = 0; if (!outsideLowY) return 1; return 0;
}
