// flags: -O4,s
extern unsigned int DAT_020fcb20[];
extern char DAT_0211c9b8[];
extern signed short DAT_020ed83c[];
#pragma thumb off
extern void *FUN_02012914(void *, unsigned int);
extern void FUN_020149ec(void *, void *, void *), FUN_020144f0(void), FUN_02014764(unsigned int, unsigned int, unsigned int), FUN_020148c4(int, int), FUN_02014488(void *), FUN_02014714(void);
#pragma thumb reset
void FUN_020c3388(unsigned char *item, unsigned char *resource) {
    void *entry;
    int angle;
    if (!DAT_020fcb20[1]) return;
    entry = FUN_02012914(*(void **)(resource + 20), *(unsigned short *)item);
    if (!entry) return;
    FUN_020149ec(DAT_0211c9b8, resource + 24, resource + 60);
    FUN_020144f0();
    FUN_02014764(*(unsigned int *)(item + 8), *(unsigned int *)(item + 12), 0);
    angle = *(unsigned short *)(item + 2);
    if (angle) {
        int index = angle >> 4;
        FUN_020148c4(DAT_020ed83c[2 * index], DAT_020ed83c[2 * index + 1]);
    }
    FUN_02014488(entry);
    FUN_02014714();
}
