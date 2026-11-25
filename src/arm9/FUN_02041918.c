// flags: -O4,s
extern void FUN_02041a08(void *, void *);
#pragma thumb off
extern void FUN_02003d54(void *, const void *, unsigned int);
extern int FUN_020038ec(void *, unsigned int, const void *, ...);
#pragma thumb on
extern void FUN_02041a20(void *, void *), FUN_02041adc(void *, void *);
extern void *FUN_0206d1ec(void *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
extern int FUN_0206d3dc(void *, void *), FUN_0206d2e4(void *, void *), FUN_0206d36c(void *, void *), FUN_02084bf8(void *), FUN_02041b80(void *, void *);
extern char DAT_0211a51c[];
extern const char DAT_020f8da4[];
extern const char DAT_020f8da8[];
extern const char DAT_020f8dac[];
extern const char DAT_020f8db0[];

void FUN_02041918(void *s, void *source) {
    unsigned int record[5];
    char key[12], prefix[16], path[64];
    unsigned int mode;
    char suffix[4];
    unsigned int variant;
    int replaced;
    FUN_02041a08(record, source);
    replaced = 0;
    mode = ~0u;
    if (FUN_0206d3dc(record, &mode)) {
        switch (mode) {
        case 0:
            FUN_0206d1ec(record, 0, 0, 4, 4, 1);
            replaced = 1;
            break;
        case 4:
            FUN_0206d1ec(record, 0, 0, 4, 4, 6);
            replaced = 1;
            break;
        }
    }
    if (FUN_0206d2e4(record, key)) {
        variant = ~0u;
        if (FUN_0206d36c(record, &variant)) {
            if (FUN_02084bf8(DAT_0211a51c) && variant <= 1)
                FUN_02003d54(suffix, DAT_020f8da4, 4);
            else
                FUN_02003d54(suffix, DAT_020f8da8, 4);
        } else if (replaced) {
            FUN_02003d54(suffix, DAT_020f8dac, 4);
        } else {
            FUN_02041a20(s, suffix);
        }
        FUN_02041b80(prefix, key);
        FUN_020038ec(path, 64, DAT_020f8db0, prefix, key, suffix);
        FUN_02041adc(s, path);
    }
}
