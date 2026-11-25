// flags: -O4,p
extern char DAT_02120c70[];
extern char DAT_02120bf4[];
void *FUN_overlay_9__0211e670(int index) {
    if (index >= 0 && index < 13) return DAT_02120c70 + 24 * index;
    return DAT_02120bf4;
}
