// flags: -O4,s
int FUN_overlay_10__02120898(char *p, int unused, unsigned int direction) {
    int result;
    if (*(int *)(p + 72)) return 0;
    result = 1;
    switch (direction) {
    case 0:
        (*(short *)(p + 82))--;
        if (*(short *)(p + 82) < 0) { *(short *)(p + 82) = 5; result = 0; }
        break;
    case 1:
        (*(short *)(p + 82))++;
        if (*(short *)(p + 82) >= 6) { *(short *)(p + 82) = 0; result = 0; }
        break;
    case 2:
        (*(short *)(p + 80))--;
        if (*(short *)(p + 80) < 0) { *(short *)(p + 80) = 2; result = 0; }
        break;
    case 3:
        (*(short *)(p + 80))++;
        if (*(short *)(p + 80) >= 3) { *(short *)(p + 80) = 0; result = 0; }
        break;
    default:
        result = 0;
        break;
    }
    return result;
}
