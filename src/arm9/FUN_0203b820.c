// flags: -O4,s
int FUN_0203b820(char *s) {
    int count = 0, i;
    for (i = 0; i < 4; i++) if (((int *)(s + 0x1d4))[i] != -1) count++;
    return count;
}
