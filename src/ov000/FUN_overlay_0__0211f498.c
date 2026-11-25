// flags: -O4,s
extern unsigned int DAT_0211f520[];
extern char DAT_0211f76c[];
extern char DAT_0211f760[];
#pragma thumb off
extern int FUN_0205c520(int, int);
extern unsigned int FUN_02009c84(int);
extern unsigned int FUN_0200923c(unsigned int, unsigned int);
extern int FUN_02009c50(unsigned int);
extern void FUN_0200c594(void *, void *(*)(void *), void *);
#pragma thumb on
extern unsigned int FUN_overlay_0__0211ed60(int, int);
extern void *FUN_overlay_0__0211e6c4(void *);
extern void *FUN_overlay_0__0211f090(void *);
void FUN_overlay_0__0211f498(void) {
    unsigned int value;
    int denominator;
    DAT_0211f520[0] = FUN_0205c520(32768, 32768);
    value = FUN_0200923c(0x3f000000, FUN_02009c84(0x60000));
    denominator = FUN_overlay_0__0211ed60(122880, 1229);
    DAT_0211f520[1] = FUN_0205c520(FUN_02009c50(value), denominator);
    FUN_overlay_0__0211e6c4(DAT_0211f76c);
    FUN_0200c594(DAT_0211f76c, FUN_overlay_0__0211f090, DAT_0211f760);
}
