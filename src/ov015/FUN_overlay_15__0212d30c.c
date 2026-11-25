// flags: -O4,p
extern int FUN_overlay_15__021311a8(void), FUN_overlay_15__0213119c(void);
extern void FUN_overlay_15__02125570(void), FUN_overlay_15__0212d6f8(void), FUN_overlay_15__02132190(int), FUN_overlay_15__0212e064(void);
#pragma thumb off
extern int FUN_0205c73c(int, int);
#pragma thumb on
extern void FUN_overlay_15__0212deb0(void *, void *), FUN_overlay_15__0212df28(void *, void *);
extern void *FUN_overlay_15__021373d8(int, void (*)(void *, void *), void *, int);

extern struct {
    int pad0;
    unsigned short scroll;
    unsigned short pad6;
    unsigned char *owner;
} DAT_overlay_15__0213e86c;

void FUN_overlay_15__0212d30c(void)
{
    unsigned char *owner = DAT_overlay_15__0213e86c.owner;
    void *task;
    int remainder;
    if (*(void **)(owner + 0x38) != 0) return;
    if (owner[0x41] != 0) owner[0x41]--;
    switch (FUN_overlay_15__021311a8()) {
    case 1:
        DAT_overlay_15__0213e86c.owner[0x45] = 1;
        break;
    case 2:
        if (DAT_overlay_15__0213e86c.owner[0x41] == 0) {
            FUN_overlay_15__02125570();
            DAT_overlay_15__0213e86c.scroll = (unsigned short)((FUN_overlay_15__0213119c() * 145) / 55);
            FUN_overlay_15__0212d6f8();
            DAT_overlay_15__0213e86c.owner[0x41] = 4;
        }
        break;
    case 3:
        DAT_overlay_15__0213e86c.owner[0x45] = 0;
        DAT_overlay_15__0213e86c.scroll = (unsigned short)((FUN_overlay_15__0213119c() * 145) / 55);
        FUN_overlay_15__02132190(19);
        FUN_overlay_15__0212d6f8();
        remainder = FUN_0205c73c(DAT_overlay_15__0213e86c.scroll, 29);
        if (remainder == 0) {
            FUN_overlay_15__0212e064();
        } else if (remainder < 16) {
            task = FUN_overlay_15__021373d8(0, FUN_overlay_15__0212deb0, 0, 120);
            *(void **)(DAT_overlay_15__0213e86c.owner + 0x38) = task;
        } else {
            task = FUN_overlay_15__021373d8(0, FUN_overlay_15__0212df28, 0, 120);
            *(void **)(DAT_overlay_15__0213e86c.owner + 0x38) = task;
        }
        break;
    case 4:
        if (DAT_overlay_15__0213e86c.scroll == 0) {
            if (!DAT_overlay_15__0213e86c.owner[0x46]) {
                FUN_overlay_15__02132190(9);
                DAT_overlay_15__0213e86c.owner[0x46] = 1;
            }
        } else {
            FUN_overlay_15__02132190(19);
            task = FUN_overlay_15__021373d8(0, FUN_overlay_15__0212deb0, 0, 120);
            *(void **)(DAT_overlay_15__0213e86c.owner + 0x38) = task;
        }
        break;
    case 6:
        if (DAT_overlay_15__0213e86c.scroll == 145) {
            if (!DAT_overlay_15__0213e86c.owner[0x46]) {
                FUN_overlay_15__02132190(9);
                DAT_overlay_15__0213e86c.owner[0x46] = 1;
            }
        } else {
            FUN_overlay_15__02132190(19);
            task = FUN_overlay_15__021373d8(0, FUN_overlay_15__0212df28, 0, 120);
            *(void **)(DAT_overlay_15__0213e86c.owner + 0x38) = task;
        }
        break;
    case 5:
    case 7:
        DAT_overlay_15__0213e86c.owner[0x46] = 0;
        break;
    }
}
