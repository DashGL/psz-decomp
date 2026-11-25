//cpp
// flags: -O4,s
extern "C" {
extern unsigned char *FUN_020a0ce8(void);
extern int FUN_020a1580(unsigned int, void *);
extern int FUN_overlay_12__0212ccfc(void *);
extern int FUN_overlay_12__0212d3fc(unsigned int, void *);
extern unsigned char DAT_02138bc0[];
}
extern "C" int FUN_overlay_12__0212cc94(void) {
    unsigned char *save = FUN_020a0ce8();
    if ((((signed char)save[6] >= 100 ? 1 : 0)) == 0) {
        unsigned char *conditions = DAT_02138bc0;
        unsigned int i;
        for (i = 0; i < 100; ++i) {
            if (!FUN_020a1580(i, save + 10) && FUN_overlay_12__0212ccfc(conditions + 28 * i)) {
                if (FUN_overlay_12__0212d3fc(i, save + 10))
                    save[6] = (signed char)save[6] + 1;
                return i;
            }
        }
    }
    return -1;
}
