// flags: -O4,s -noThumb
int FUN_0205a160(char *s, int offset, int origin) {
    int min, max;
    switch (origin) {
    case 0: offset += *(int *)(s + 36); break;
    case 1: offset += *(int *)(s + 44); break;
    case 2: offset += *(int *)(s + 40); break;
    default: return 0;
    }
    min = *(int *)(s + 36);
    if (offset < min) offset = min;
    max = *(int *)(s + 40);
    if (offset > max) offset = max;
    *(int *)(s + 44) = offset;
    return 1;
}
