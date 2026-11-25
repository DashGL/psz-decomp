// flags: -O4,s
extern char DAT_020f33b0[];
void *FUN_02084778(int group, int number) {
    int index = (number - 1) + 15 * group;
    if (index < 0 || index >= 165) index = 0;
    return DAT_020f33b0 + 14 * index;
}
