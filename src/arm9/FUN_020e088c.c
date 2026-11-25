// flags: -O4,p
#pragma opt_propagation off
// flags: -O4,p
struct Sub_020e088c {
    int f0;
    unsigned short f4;
    unsigned short f6;
    unsigned short f8;
    unsigned short fa;
    unsigned char fc;
    unsigned char pad[3];
    int f10;
};

struct Global_020e088c {
    int f0;
    struct Sub_020e088c *f4;
};

extern void FUN_020e07e0(void);
extern void FUN_020e056c(int, int);
extern int FUN_020da9a8(void);
extern int FUN_02028ac4(void);
extern void FUN_020e098c(void);
extern void FUN_020e068c(struct Sub_020e088c *, unsigned short, int, unsigned short);
extern void FUN_020dce70(void *);
extern struct Global_020e088c DAT_0211dc9c;

int FUN_020e088c(void) {
    struct Sub_020e088c *sub = DAT_0211dc9c.f4;
    int res;

    if (sub == 0) {
        return 0;
    }
    switch (sub->f10) {
    case 1:
        return 2;
    case 2:
        return 2;
    case 3:
        FUN_020e07e0();
        FUN_020e056c(5, DAT_0211dc9c.f0);
        DAT_0211dc9c.f4->f4 = 7;
        DAT_0211dc9c.f4->f10 = 4;
        return 7;
    case 4:
        return 7;
    case 0:
    default:
        if (sub->f4 == 1) {
            return sub->f4;
        }
        res = FUN_020da9a8();
        if (res == 5) {
            DAT_0211dc9c.f4->f4 = 4;
            DAT_0211dc9c.f4->f6 = 1;
            DAT_0211dc9c.f4->fc = 1;
            return 4;
        }
        if (res < 0) {
            if (res >= -10) {
                FUN_020e056c(9, -50199);
                DAT_0211dc9c.f4->f4 = 8;
                return 8;
            }
            sub = DAT_0211dc9c.f4;
            if (sub->fc == 0) {
                unsigned short port = sub->f8;
                int r = FUN_02028ac4();
                DAT_0211dc9c.f0 = res;
                FUN_020e098c();
                FUN_020e068c(sub, port, 1, r);
                FUN_020dce70((char *)DAT_0211dc9c.f4 + 0x14);
                int ret;
                DAT_0211dc9c.f4->f10 = 1;
                ret = 2;
                DAT_0211dc9c.f4->f0 = 0;
                return ret;
            }
            if (DAT_0211dc9c.f0 < res) {
                res = DAT_0211dc9c.f0;
            }
            FUN_020e056c(5, res);
            DAT_0211dc9c.f4->f4 = 7;
            return 7;
        }
        return 2;
    }
}
