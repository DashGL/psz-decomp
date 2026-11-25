// flags: -O4,s
extern unsigned short FUN_020bbe80(void);
extern struct {
    unsigned short a[7];
    unsigned short pad;
    int flag;
} DAT_0211b330;
extern unsigned short DAT_0211b344[14];
void FUN_020bbe44(void) {
    unsigned short value = FUN_020bbe80();
    int i;
    DAT_0211b330.a[3] = value;
    DAT_0211b330.a[4] = value;
    DAT_0211b330.a[5] = value;
    DAT_0211b330.a[6] = value;
    DAT_0211b330.a[0] = value;
    DAT_0211b330.a[1] = 10;
    DAT_0211b330.a[2] = 3;
    for (i = 0; i < 14; i++) {
        DAT_0211b344[i] = 10;
    }
    DAT_0211b330.flag = 0;
}
