//cpp
// flags: -O4,s
struct Archive {
    virtual void f0();
    virtual void f1();
};
extern "C" {
extern char DAT_020f8e88[];
extern char DAT_020f8e8c[];
extern int DAT_02108e94[];
extern char DAT_0210c390[][216];
extern char DAT_0210a818[];
extern char DAT_02109200[];
extern char DAT_02109344[];
extern char DAT_02109488[];
extern char DAT_02109cb0[];
extern char DAT_021095cc[];
extern char DAT_02109710[];
extern char DAT_02109b24[];
extern char DAT_021090bc[];
extern char DAT_02108d98[];
extern char DAT_02109854[];
extern char DAT_02109f38[];
extern void *FUN_020ba894(unsigned int), *FUN_020bc2dc(void *, void *, int), *FUN_020bc508(void *, int);
extern char *FUN_020ba440(void *);
extern int FUN_020bc3c0(void *, void *, void *);
#pragma thumb off
extern void FUN_020014d4(void *, const void *, unsigned int);
#pragma thumb on
}
extern "C" void FUN_02044ef8(void) {
    int i;
    Archive *archive;
    char *data;
    int j;
    archive = (Archive *)FUN_020ba894(132);
    if (archive) archive = (Archive *)FUN_020bc2dc(archive, DAT_020f8e88, 0);
    if (!archive) return;
    if (FUN_020bc3c0(archive, DAT_020f8e8c, 0)) {
        for (i = 0, j = 0; j < 16; j++, i++) {
            data = FUN_020ba440(FUN_020bc508(archive, j));
            FUN_020014d4(&DAT_02108e94[i], data, 4);
            FUN_020014d4(DAT_0210c390[i], data + 4, 216);
        }
        FUN_020014d4(DAT_0210a818, FUN_020ba440(FUN_020bc508(archive, 16)), 1320);
        FUN_020014d4(DAT_02109200, FUN_020ba440(FUN_020bc508(archive, 17)), 324);
        FUN_020014d4(DAT_02109344, FUN_020ba440(FUN_020bc508(archive, 18)), 324);
        FUN_020014d4(DAT_02109488, FUN_020ba440(FUN_020bc508(archive, 19)), 324);
        FUN_020014d4(DAT_02109cb0, FUN_020ba440(FUN_020bc508(archive, 20)), 648);
        FUN_020014d4(DAT_021095cc, FUN_020ba440(FUN_020bc508(archive, 21)), 324);
        FUN_020014d4(DAT_02109710, FUN_020ba440(FUN_020bc508(archive, 22)), 324);
        FUN_020014d4(DAT_02109b24, FUN_020ba440(FUN_020bc508(archive, 25)), 396);
        FUN_020014d4(DAT_021090bc, FUN_020ba440(FUN_020bc508(archive, 24)), 324);
        FUN_020014d4(DAT_02108d98, FUN_020ba440(FUN_020bc508(archive, 23)), 12);
        data = FUN_020ba440(FUN_020bc508(archive, 26));
        FUN_020014d4(DAT_02109854, data, 360);
        FUN_020014d4(DAT_02109f38, data + 360, 1080);
    }
    if (archive) {
        if (archive) archive->f1();
    }
}