// flags: -O4,p
void FUN_020aa9e4(char *s, char *out) {
    *(int *)out = 1;
    *(int *)(out + 180) |= 1;
    *(int *)(out + 168) = (*(unsigned short *)(s + 92) * *(short *)(s + 500)) / 100;
    *(int *)(out + 172) = (*(unsigned short *)(s + 94) * *(short *)(s + 500)) / 100;
    if (*(short *)(s + 502) == 1) *(int *)(out + 176) |= 1;
}
