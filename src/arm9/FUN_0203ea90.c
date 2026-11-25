// flags: -O4,p
int FUN_0203ea90(char *s) {
    int index = -1; unsigned int group = *(unsigned char *)(s + 0x24); if (group < 14) index = 4 * group + *(unsigned char *)(s + 0x25); else if (group >= 14 && group <= 18) index = group + 42; if (index >= 0 && index < 61) return index; return 0;
}
