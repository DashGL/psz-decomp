// flags: -O4,s
int FUN_0209399c(char *self) {
    int limit = *(int *)(self + 84), value = *(int *)(self + 80);
    if (value < limit && *(unsigned short *)(self + 406)) return 1;
    if (120 - value * *(unsigned short *)(self + 408) < limit && !*(unsigned short *)(self + 406)) return 1;
    return 0;
}
