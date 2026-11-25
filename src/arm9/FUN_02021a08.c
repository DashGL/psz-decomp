// flags: -O4,p -noThumb
struct Global21A08 { unsigned char pad[0x50]; unsigned int f50; };
struct Entry21A08 { unsigned int ip; unsigned char f4[6]; unsigned short f10; };
extern struct Global21A08 DAT_02107054;
extern unsigned char DAT_0210753c[];
extern unsigned char DAT_020f6948[];
extern struct Entry21A08 DAT_021070d4[8];
extern int FUN_020683d4(void);
extern void FUN_020683e8(int);
extern int FUN_02021560(unsigned int);
extern int FUN_0202159c(unsigned int);
extern unsigned long long FUN_02067e0c(void);

void *FUN_02021a08(unsigned int ip) {
    unsigned int i;
    int ime = FUN_020683d4();
    void *res = 0;
    if (ip == 0x7f000001 || ip == DAT_02107054.f50) {
        res = DAT_0210753c;
    } else if (FUN_02021560(ip) != 0 || FUN_0202159c(ip) != 0) {
        res = DAT_020f6948;
    } else {
        struct Entry21A08 *p = DAT_021070d4;
        for (i = 0; i < 8; i++, p++) {
            if (ip == p->ip) {
                unsigned short t = (unsigned short)(FUN_02067e0c() >> 16);
                DAT_021070d4[i].f10 = t;
                res = DAT_021070d4[i].f4;
                break;
            }
        }
    }
    FUN_020683e8(ime);
    return res;
}
