// flags: -O4,s
typedef struct { unsigned char b[14]; } Rec14;
typedef struct { unsigned char b[6]; } Data6;
extern unsigned char *FUN_02084778(int, int);
extern int FUN_02078188(int);
extern int FUN_02078198(int);
extern int FUN_0204e738(int, int, unsigned int);
extern void FUN_0204e01c(int, int, int, int, int);

void FUN_0204e0d8(int source, int type, int amount, unsigned int radius) {
    Rec14 record;
    Data6 data;
    unsigned char *p;
    int code = -1, first, last, i;
    if (type == 0) code = amount > 0 ? 7 : 9;
    else if (type == 1) code = amount > 0 ? 8 : 10;
    if (code == -1) return;
    if (!radius) {
        p = FUN_02084778(code, amount);
        record = *(Rec14 *)p;
        data = *(Data6 *)(record.b + 6);
        radius = (unsigned int)data.b[2] << 12;
    }
    first = 0;
    last = 0;
    if ((FUN_02078188(source) && amount > 0) || (FUN_02078198(source) && amount < 0)) {
        first = 0;
        last = 3;
    } else if ((FUN_02078188(source) && amount < 0) || (FUN_02078198(source) && amount > 0)) {
        first = 4;
        last = 515;
    }
    if (first != last) {
        for (i = first; i <= last; i++) {
            if (FUN_0204e738(source, i, radius))
                FUN_0204e01c(source, i, type, amount, -1);
        }
    }
}
