// flags: -O4,s
extern signed char DAT_02108d00[];
void *FUN_0203b844(char *s) {
    int i;
    for (i = 0; i < 4; i++) {
        int value = ((int *)(s + 0x1d4))[i];
        if (value >= 0 && value <= 3) DAT_02108d00[i] = value;
        else DAT_02108d00[i] = -1;
    }
    return DAT_02108d00;
}
