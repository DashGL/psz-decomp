// flags: -O4,s
typedef struct { int c[12]; } Row;
extern const char *DAT_overlay_17__021250bc[];
extern void *FUN_020ba374(const char *, int *, unsigned);
extern void *FUN_020ba440(void *);
extern void *FUN_02086e3c(void);
extern void FUN_0203955c(void *);
extern void FUN_020944ac(void *, int, int);
extern void FUN_02094520(void *, int, int);
extern void FUN_02084a1c(void *, int);
extern void FUN_020ba8c4(void *);
extern int FUN_020b028c(void *, const void *, int);
int FUN_overlay_17__02121050(void *unused, int table, int index) {
    int size, ok, value;
    unsigned item[4];
    Row *row;
    void *file;
    if (table < 0 || table >= 4) return 0;
    if (index < 0) return 0;
    size = 0;
    file = FUN_020ba374(DAT_overlay_17__021250bc[table], &size, 16);
    if (!file) return 0;
    ok = 1;
    row = &((Row *)FUN_020ba440(file))[index];
    FUN_0203955c(item);
    ((unsigned char *)item)[0] = row->c[0];
    ((unsigned char *)item)[3] = row->c[1];
    ((unsigned char *)item)[1] = row->c[2];
    ((unsigned char *)item)[2] = row->c[3];
    switch (row->c[0]) {
    case 0:
        FUN_020944ac(item, 1, row->c[4]);
        FUN_020944ac(item, 2, row->c[5]);
        FUN_020944ac(item, 3, row->c[6]);
        FUN_020944ac(item, 4, row->c[7]);
        FUN_020944ac(item, 5, row->c[8]);
        item[2] = (item[2] & 0xfffc1fff) | ((unsigned)row->c[9] << 13);
        item[2] = (item[2] & 0xfffff1ff) | ((unsigned)row->c[10] << 9);
        item[1] = (item[1] & ~15u) | (row->c[11] & 15);
        break;
    case 1:
        FUN_02094520(item, 1, row->c[4]);
        FUN_02094520(item, 2, row->c[5]);
        FUN_02094520(item, 3, row->c[6]);
        FUN_02094520(item, 4, row->c[7]);
        FUN_02094520(item, 5, row->c[8]);
        value = row->c[9];
        if (value > 4) value = 4;
        item[1] = (item[1] & 0xfe3fffff) | ((unsigned)value << 22);
        break;
    case 2:
        break;
    case 3:
        FUN_02084a1c(item, row->c[4]);
        break;
    default:
        ok = 0;
        break;
    }
    if (ok == 1) FUN_020b028c((char *)FUN_02086e3c() + 16, item, 0);
    if (file) FUN_020ba8c4(file);
    return ok;
}
