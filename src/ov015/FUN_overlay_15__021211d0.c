// flags: -O4,p
extern unsigned int DAT_overlay_15__0213d200[];
extern unsigned char DAT_overlay_15__0213d228[], DAT_overlay_15__0213d230[];
extern unsigned char DAT_020ec174[], DAT_020ec17c[];
#pragma thumb off
extern unsigned int FUN_020683d4(void);
extern void FUN_020683e8(unsigned int);
extern void FUN_020656b8(void *, int, unsigned int);
#pragma thumb on
extern int FUN_0202dbec(const void *, const void *, unsigned int);
extern int FUN_overlay_15__02121124(void);

int FUN_overlay_15__021211d0(const unsigned char *address, const unsigned char *name,
    int length, unsigned int option)
{
    unsigned int irq = FUN_020683d4();
    int i;
    DAT_overlay_15__0213d200[1] = option;
    if (address) {
        for (i = 0; i < 6; i++) DAT_overlay_15__0213d228[i] = *address++;
        DAT_overlay_15__0213d200[4] = (unsigned int)DAT_overlay_15__0213d228;
    } else {
        FUN_020656b8(DAT_overlay_15__0213d228, 255, 6);
        DAT_overlay_15__0213d200[4] = (unsigned int)DAT_020ec174;
    }
    if (name && length > 0 && length <= 32) {
        for (i = 0; i < length; i++) DAT_overlay_15__0213d230[i] = *name++;
        for (; i < 32; i++) DAT_overlay_15__0213d230[i] = 0;
        DAT_overlay_15__0213d200[5] = (unsigned int)DAT_overlay_15__0213d230;
    } else {
        FUN_020656b8(DAT_overlay_15__0213d230, 255, 32);
        DAT_overlay_15__0213d200[5] = (unsigned int)DAT_020ec17c;
    }
    if (DAT_overlay_15__0213d200[6] == 3) {
        if (FUN_0202dbec((void *)DAT_overlay_15__0213d200[4], (void *)DAT_overlay_15__0213d200[5], DAT_overlay_15__0213d200[1]) == 3) {
            DAT_overlay_15__0213d200[6] = 6;
            FUN_020683e8(irq);
            return 1;
        }
    } else if (FUN_overlay_15__02121124() == 1) {
        DAT_overlay_15__0213d200[6] = 6;
        FUN_020683e8(irq);
        return 1;
    }
    FUN_020683e8(irq);
    return 0;
}
